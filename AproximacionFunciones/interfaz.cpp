#include "interfaz.h"
#include "ui_interfaz.h"
#include "QFileDialog"
#include "QTextStream"

Interfaz::Interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
     QMainWindow::showMaximized();//iniciar la aplicacion maximizada
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
puntosXo.push_back(lista_de_numeros[i].toDouble());//se convierte cada numero de la lista en double y se guarda en un vector de double
       }
    }
}


