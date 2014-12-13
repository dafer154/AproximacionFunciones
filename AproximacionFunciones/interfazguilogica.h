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
    QVector <double> calcularPuntosConLagrange(QVector<double> xIniciales,
                                               QVector<double> yIniciales, QVector<double> xAEvaluar);
};

#endif // INTERFAZGUILOGICA_H
