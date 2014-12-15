#ifndef FUNCIONEXACTA_H
#define FUNCIONEXACTA_H


#include <QString>
#include <interprete/exprtk.hpp>
#include <QVector>



class FuncionExacta
{
public:
    FuncionExacta();
    ~FuncionExacta();


    double evaluarFuncion(QString funcion, double punto);
    void evaluarFuncionVariosPuntos(QString funcion, QVector<double> puntos);
    void evaluarFuncionVariosPuntosLagrange(QString funcion, QVector<double> puntos);
    QVector<double> resultadosFuncionExacta, resultadosFuncionExactaLagrange;
    double ymin,ymax;

};

#endif // FUNCIONEXACTA_H
