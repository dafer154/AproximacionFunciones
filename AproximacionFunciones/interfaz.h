#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <QMainWindow>
#include <QVector>
#include <funcionexacta.h>
#include <lagrange.h>

namespace Ui {
class Interfaz;
}

class Interfaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interfaz(QWidget *parent = 0); 
    QVector<double>getPuntosXo();
    ~Interfaz();
    void graficar(QVector<double>x, QVector<double>y1, QVector<double> y2);
    FuncionExacta funcionExacta;
    Lagrange lagrange;
     QVector<double> puntosXarchivo,yinicialesLagrange,puntosAEvaluar,yIniciales;
     void calularPuntosAEvaluar(double salto);




private slots:
    void on_bt_abrirArchivo_clicked();


    void on_bt_graficar_clicked();

    void on_bt_validarParametros_clicked();

    void on_bt_validarX_clicked();

private:
    Ui::Interfaz *ui;

};

#endif // INTERFAZ_H
