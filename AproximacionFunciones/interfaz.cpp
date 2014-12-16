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
    //connect(ui->wg_grafica, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePress()));
}

Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_bt_abrirArchivo_clicked()//cuando haga click en el boton abrir
{
    ui->bt_graficar->setEnabled(false);
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();
    QString linea;//guarda la lineas leidas del archivo
    QStringList lista_de_numeros;//guarda cada Xo en una posicion de la lista
    linea="";
    puntosXIniciales.clear();
    lista_de_numeros.clear();
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
                puntosXIniciales.push_back(lista_de_numeros[i].toDouble());//se convierte cada numero de la lista en double y se guarda en un vector de double
        }
        if(!puntosXIniciales.isEmpty()){
            ui->bt_validarParametros->setEnabled(true);
        }

        else
        {
            QMessageBox msgBox;
            msgBox.setText("el archivo esta vacio");
            msgBox.exec();}
    }
}


//funcion para graficar los puntos que retorne la funcion.
void Interfaz::graficar(QVector<double> x, QVector<double> y1,QVector<double> y2){
    ui->wg_grafica->clearGraphs();
    ui->wg_grafica->addGraph();
    ui->wg_grafica->graph(0)->setData(x,y1);
    ui->wg_grafica->addGraph();
    ui->wg_grafica->graph(1)->setData(x,y2);
    ui->wg_grafica->addGraph();
    ui->wg_grafica->graph(2)->removeFromLegend();

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





    ui->wg_grafica->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                                    QCP::iSelectLegend | QCP::iSelectPlottables);

    ui->wg_grafica->replot();
    connect(ui->wg_grafica, SIGNAL(mouseMove(QMouseEvent*)),this,SLOT(showPointToolTip(QMouseEvent*)));
   // connect(ui->wg_grafica, SIGNAL(mouseMove(QMouseEvent*)), this,SLOT(showPointToolTip()));
}


void Interfaz::on_bt_graficar_clicked()
{
    calcularPuntosAEvaluar();

    funcionExacta.evaluarFuncionVariosPuntos(ui->tb_funcion->text(),
                                             puntosAEvaluar);
    lagrange.calcularPuntosConLagrange(puntosXIniciales,
                                       funcionExacta.resultadosFuncionExactaLagrange,
                                       puntosAEvaluar);
    graficar(puntosAEvaluar,lagrange.resultadoLagrange,
             funcionExacta.resultadosFuncionExacta);

    ui->sb_valorX->setEnabled(true);
    ui->bt_validarX->setEnabled(true);
    ui->gb_verificacionError->setEnabled(true);

}

void Interfaz::on_bt_validarParametros_clicked()
{

    if(ui->rB_cargarArchivo->isChecked())
    {
        ui->tabla_puntos->clear();
        int size=puntosXIniciales.size();
        ui->sb_intervalo1->setValue(puntosXIniciales.at(0));
        ui->sb_intervalo2->setValue(puntosXIniciales.at(size-1));

        funcionExacta.evaluarFuncionVariosPuntosLagrange(ui->tb_funcion->text(),
                                                 puntosXIniciales);

        ui->tabla_puntos->setColumnCount(size);
        for (int i = 0; i < size; ++i) {
            ui->tabla_puntos->setItem(0,i,new QTableWidgetItem(QString::number(puntosXIniciales.at(i))));
            ui->tabla_puntos->setItem(1,i,new QTableWidgetItem(QString::number(
                                                                   funcionExacta.resultadosFuncionExactaLagrange.at(i))));
        }
        ui->bt_graficar->setEnabled(true);

    }else


        if(ui->rB_generarPuntos->isChecked()){
            ui->tabla_puntos->clear();
            generarpuntosX(ui->sb_salto->value());
            int size=puntosXIniciales.size();
            funcionExacta.evaluarFuncionVariosPuntosLagrange(ui->tb_funcion->text(),
                                                     puntosXIniciales);
            ui->tabla_puntos->setColumnCount(size);
            for (int i = 0; i < size; ++i) {
                ui->tabla_puntos->setItem(0,i,new QTableWidgetItem(QString::number(puntosXIniciales.at(i))));
                ui->tabla_puntos->setItem(1,i,new QTableWidgetItem(
                                              QString::number(funcionExacta.resultadosFuncionExactaLagrange.at(i))));
            }
            ui->bt_graficar->setEnabled(true);


        }
}




void Interfaz::calcularPuntosAEvaluar(){
    puntosAEvaluar.clear();
    //calcular extrapolacion
    //for (double i = ui->sb_intervalo1->value()-20; i <=ui->sb_intervalo2->value()+20; i+=0.1) {
    for (double i = ui->sb_intervalo1->value(); i <=ui->sb_intervalo2->value(); i+=0.1) {
        puntosAEvaluar.push_back(i);
    }
}

void Interfaz::generarpuntosX(double salto){
    puntosXIniciales.clear();
    for (double i = ui->sb_intervalo1->value(); i <=ui->sb_intervalo2->value() ; i+=salto) {
       puntosXIniciales.push_back(i);
    }
}



void Interfaz::on_bt_validarX_clicked()
{
    double valorLagrange=lagrange.calcularPuntoConLagrange(puntosXIniciales,ui->sb_valorX->value());
    double valorFuncionExacta=funcionExacta.evaluarFuncion(
                ui->tb_funcion->text(),ui->sb_valorX->value());

    ui->tb_segunLagrange->setText(QString::number(valorLagrange));
    ui->tb_funcionEvaluada->setText(QString::number(valorFuncionExacta));
    ui->tb_errorAbsoluto->setText(QString::number(fabs(valorFuncionExacta-
                                                       valorLagrange)));
    ui->wg_grafica->xAxis->setRange(ui->sb_valorX->value()-0.1, ui->sb_valorX->value()+0.1);
    ui->wg_grafica->yAxis->setRange(valorFuncionExacta-0.1, valorFuncionExacta+0.1);

    QVector <double> puntosEnXerror;
    QVector <double> puntosEnYerror;
    puntosEnXerror.clear();
    puntosEnYerror.clear();
    puntosEnXerror.push_back(ui->sb_valorX->value());
    puntosEnXerror.push_back(ui->sb_valorX->value());
    puntosEnYerror.push_back(funcionExacta.ymin-10);
    puntosEnYerror.push_back(funcionExacta.ymax+10);


        ui->wg_grafica->graph(2)->clearData();

        ui->wg_grafica->graph(2)->setData(puntosEnXerror,puntosEnYerror);
        //ui->wg_grafica->graph(2)->setName("x= "+QString::number(ui->sb_valorX->value()));
        //ui->wg_grafica->graph(2)->setLineStyle((QCPGraph::LineStyle)Qt::DashDotLine); //personalizar el estilo de linea
        ui->wg_grafica->graph(2)->setPen(QPen(Qt::DashLine));
        ui->wg_grafica->replot();



}

void Interfaz::on_rB_cargarArchivo_clicked()
{
    ui->bt_abrirArchivo->setEnabled(true);
    ui->sb_intervalo1->setEnabled(false);
    ui->sb_intervalo2->setEnabled(false);
    ui->sb_intervalo1->setValue(0.0);
    ui->sb_intervalo2->setValue(0.0);
    ui->bt_validarParametros->setEnabled(false);
    ui->sb_salto->setEnabled(false);
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();


}

void Interfaz::on_rB_generarPuntos_clicked()
{
    ui->bt_abrirArchivo->setEnabled(false);
    ui->sb_intervalo1->setEnabled(true);
    ui->sb_intervalo2->setEnabled(true);
    ui->sb_salto->setEnabled(true);
    ui->bt_validarParametros->setEnabled(true);
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();


}

void Interfaz::on_sb_salto_valueChanged(double arg1)
{
   ui->bt_graficar->setEnabled(false);
   ui->gb_verificacionError->setEnabled(false);
   ui->sb_valorX->setValue(0.0);
   ui->tb_funcionEvaluada->setText("");
   ui->tb_segunLagrange->setText("");
   ui->tb_errorAbsoluto->setText("");
   ui->tabla_puntos->clear();
   ui->wg_grafica->clearGraphs();

}



void Interfaz::on_tb_funcion_textEdited()
{
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();

}

void Interfaz::on_sb_intervalo1_valueChanged(double arg1)
{
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();

}

void Interfaz::on_sb_intervalo2_valueChanged(double arg1)
{
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();

}

void Interfaz::on_bt_limpiarTodo_clicked()
{
    ui->tb_funcion->setText("");
    ui->rB_cargarArchivo->setAutoExclusive(false);
    ui->rB_cargarArchivo->setChecked(false);
    ui->rB_generarPuntos->setAutoExclusive(false);
    ui->rB_generarPuntos->setChecked(false);


    ui->bt_abrirArchivo->setEnabled(false);
    ui->sb_intervalo1->setEnabled(false);
    ui->sb_intervalo2->setEnabled(false);
    ui->sb_salto->setEnabled(false);
    ui->bt_validarParametros->setEnabled(false);
    ui->bt_graficar->setEnabled(false);
    ui->gb_verificacionError->setEnabled(false);
    ui->sb_intervalo1->setValue(0.0);
    ui->sb_intervalo2->setValue(0.0);
    ui->sb_valorX->setValue(0.0);
    ui->tb_funcionEvaluada->setText("");
    ui->tb_segunLagrange->setText("");
    ui->tb_errorAbsoluto->setText("");
    ui->tabla_puntos->clear();
    ui->wg_grafica->clearGraphs();


}

void Interfaz::showPointToolTip(QMouseEvent *event)
{

    double x = ui->wg_grafica->xAxis->pixelToCoord(event->pos().x());
    double y = ui->wg_grafica->yAxis->pixelToCoord(event->pos().y());

    QToolTip::showText(ui->wg_grafica->mapToGlobal(event->pos()), QString("%1 , %2").arg(x).arg(y));
}
