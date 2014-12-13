#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <QVector>


class Lagrange
{
public:
    Lagrange();
    ~Lagrange();
    double calcularPuntoConLagrange(QVector <double> xIniciales, QVector <double> yIniciales, double xAEvaluar);
    QVector<double> resultadoLagrange;
    void calcularPuntosConLagrange(QVector<double> xIniciales,
                                               QVector<double> yIniciales, QVector<double> puntosAEvaluar);

};
#endif // LAGRANGE_H
