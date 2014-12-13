#ifndef INTERFAZGUILOGICA_H
#define INTERFAZGUILOGICA_H
#include <QVector>
#include "lagrange.h"

class InterfazGuiLogica
{
public:
    InterfazGuiLogica();
    ~InterfazGuiLogica();
    Lagrange lagrange;
    QVector<double> resultadoLagrange;
    void calcularPuntosConLagrange(QVector<double> xIniciales,
                                               QVector<double> yIniciales, QVector<double> puntosAEvaluar);
};

#endif // INTERFAZGUILOGICA_H
