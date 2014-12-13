#include "interfazguilogica.h"

InterfazGuiLogica::InterfazGuiLogica()
{

}

InterfazGuiLogica::~InterfazGuiLogica()
{

}

void InterfazGuiLogica::calcularPuntosConLagrange(QVector<double> xIniciales,
                                                              QVector<double> yIniciales, QVector<double> puntosAEvaluar){
    resultadoLagrange.clear();
    int size = puntosAEvaluar.size();
    for (int i = 0; i < size; ++i) {
        resultadoLagrange.push_back(lagrange.polinomioLagrange(xIniciales, yIniciales,puntosAEvaluar.at(i)));
    }
}

