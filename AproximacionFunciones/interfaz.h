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
    ~Interfaz();
    void graficar(QVector<double>x, QVector<double>y1, QVector<double> y2);
    FuncionExacta funcionExacta;
    Lagrange lagrange;
     QVector<double> puntosXIniciales,yinicialesLagrange,puntosAEvaluar,yIniciales;
     void calcularPuntosAEvaluar();
     void generarpuntosX(double salto);
     void showPointToolTip(QMouseEvent *event);





private slots:
    void on_bt_abrirArchivo_clicked();


    void on_bt_graficar_clicked();

    void on_bt_validarParametros_clicked();

    void on_bt_validarX_clicked();

    void on_rB_cargarArchivo_clicked();

    void on_rB_generarPuntos_clicked();

    void on_sb_salto_valueChanged(double arg1);





    void on_tb_funcion_textEdited();

    void on_sb_intervalo1_valueChanged(double arg1);

    void on_sb_intervalo2_valueChanged(double arg1);

    void on_bt_limpiarTodo_clicked();



private:
    Ui::Interfaz *ui;

};

#endif // INTERFAZ_H
