#include "interfaz.h"
#include "ui_interfaz.h"
#include "QFileDialog"
#include "QTextStream"
#include <math.h>

Interfaz::Interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();//iniciar la aplicacion maximizada

    //prueba
}

Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_bt_abrirArchivo_clicked()//cuando haga click en el boton abrir
{
    QString linea;//guarda la lineas leidas del archivo
    QStringList lista_de_numeros;//guarda cada Xo en una posicion de la lista
    QString nombreArchivo= QFileDialog::getOpenFileName();
    if (!nombreArchivo.isEmpty()){
        QFile archivo(nombreArchivo);
        if(archivo.open(QFile::ReadOnly)){
            QTextStream archivoenTexto(&archivo);
            do{
                linea=archivoenTexto.readLine();
                lista_de_numeros+=linea.split(",",QString::SkipEmptyParts);//donde encuentra el simbolo "," cambia al siguiente numero
            }while(!linea.isNull());

            for(int i=0;i<lista_de_numeros.length();i++)
                puntosXarchivo.push_back(lista_de_numeros[i].toDouble());//se convierte cada numero de la lista en double y se guarda en un vector de double
        }
    }
}


//funcion para graficar los puntos que retorne la funcion.
void Interfaz::graficar(QVector<double> x, QVector<double> y1,QVector<double> y2){
    ui->wg_grafica->addGraph();
    ui->wg_grafica->graph(0)->setData(x,y1);
    ui->wg_grafica->addGraph();
    ui->wg_grafica->graph(1)->setData(x,y2);

    //nombre para los ejes
    ui->wg_grafica->xAxis->setLabel("x");
    ui->wg_grafica->yAxis->setLabel("f(x)");
    //rango de los ejes
    ui->wg_grafica->xAxis->setRange(ui->sb_intervalo1->value(),ui->sb_intervalo2->value());

    ui->wg_grafica->yAxis->setRange(funcionExacta.ymin,funcionExacta.ymax);
    //colores
    ui->wg_grafica->graph(0)->setPen(QPen(Qt::red));
    ui->wg_grafica->graph(1)->setPen(QPen(Qt::blue));

    //cuadro de texto
    ui->wg_grafica->legend->setVisible(true);
    ui->wg_grafica->graph(0)->setName("Aproximacion lagrange");
    ui->wg_grafica->graph(1)->setName("Valor real");

    //  ui->plot->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4)); //personalizar el estilo de linea


    ui->wg_grafica->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->wg_grafica->replot();




}



void Interfaz::on_bt_graficar_clicked()
{


    calularPuntosAEvaluar(ui->sb_salto->value());
    lagrange.calcularPuntosConLagrange(puntosXarchivo,
                                       funcionExacta.resultadosFuncionExacta,
                                       puntosAEvaluar);

    funcionExacta.evaluarFuncionVariosPuntos(ui->tb_funcion->text(),
                                             puntosAEvaluar);
    graficar(puntosAEvaluar,lagrange.resultadoLagrange,
             funcionExacta.resultadosFuncionExacta);



}

void Interfaz::on_bt_validarParametros_clicked()
{

    if(ui->rB_cargarArchivo->isChecked())
    {
        int size=puntosXarchivo.size();
        ui->sb_intervalo1->setValue(puntosXarchivo.at(0));
        ui->sb_intervalo2->setValue(puntosXarchivo.at(size-1));
        funcionExacta.evaluarFuncionVariosPuntos(ui->tb_funcion->text(),
                                                 puntosXarchivo);


        ui->tabla_puntos->setColumnCount(size);

        for (int i = 0; i < size; ++i) {


            ui->tabla_puntos->setItem(0,i,new QTableWidgetItem(QString::number(puntosXarchivo.at(i))));
            ui->tabla_puntos->setItem(1,i,new QTableWidgetItem(QString::number(
                                                                   funcionExacta.resultadosFuncionExacta.at(i))));
        }
    }
}




void Interfaz::calularPuntosAEvaluar(double salto){
    puntosAEvaluar.clear();
    for (double i = ui->sb_intervalo1->value(); i <=ui->sb_intervalo2->value() ; i+=salto) {
        puntosAEvaluar.push_back(i);
    }
}

void Interfaz::on_bt_validarX_clicked()
{

    double valorLagrange=lagrange.calcularPuntoConLagrange(puntosXarchivo,ui->sb_valorX->value());
    double valorFuncionExacta=funcionExacta.evaluarFuncion(
                ui->tb_funcion->text(),ui->sb_valorX->value());

    ui->tb_segunLagrange->setText(QString::number(valorLagrange));
    ui->tb_funcionEvaluada->setText(QString::number(valorFuncionExacta));
    ui->tb_errorAbsoluto->setText(QString::number(fabs(valorFuncionExacta-
                                                       valorLagrange)));

}
