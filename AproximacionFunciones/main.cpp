#include "interfaz.h"
#include <QApplication>
#include <QVector>
#include <funcionexacta.h>

/*int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interfaz w;
    w.show();

    return a.exec();
}*/

int main(){
    /* Prueba Lagrange
    InterfazGuiLogica guiLogica;
    QVector<double> x, y, puntos;

    x.push_back(0);
    x.push_back(2);
    x.push_back(4);
    x.push_back(6);
    x.push_back(8);
    x.push_back(10);

    y.push_back(0);
    y.push_back(4);
    y.push_back(16);
    y.push_back(36);
    y.push_back(64);
    y.push_back(100);

    puntos.push_back(1);
    puntos.push_back(3);
    puntos.push_back(5);
    puntos.push_back(7);
    puntos.push_back(9);

    guiLogica.calcularPuntosConLagrange(x, y, puntos);

    guiLogica.resultadoLagrange;
   */

    FuncionExacta funcionPrueba;

    QString funcion="x^2";
    //double intervaloInf=0;
    //double intervaloSup=5;
    //double salto=1;

    QVector<double> x;

    x.push_back(0);
    x.push_back(2);
    x.push_back(4);
    x.push_back(6);
    x.push_back(8);
    x.push_back(10);



    funcionPrueba.evaluarFuncionVariosPuntos(funcion, x);


    //double resultado=funcionPrueba.evaluarFuncion(funcion, intervaloSup);

    return 0;
}
