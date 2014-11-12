#include "interfaz.h"
#include "ui_interfaz.h"

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
