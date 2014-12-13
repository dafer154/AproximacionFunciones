#include "interfazguilogica.h"

InterfazGuiLogica::InterfazGuiLogica()
{

}

InterfazGuiLogica::~InterfazGuiLogica()
{

}

QVector <double> InterfazGuiLogica::calcularPuntosConLagrange(QVector<double> xIniciales,
                                                              QVector<double> yIniciales, QVector<double> xAEvaluar){
    int size = puntos.size();
    QVector <double> respuesta;
    for (int i = 0; i < size; ++i) {
        respuesta.push_back(lagrange.polinomioLagrange(xIniciales, yIniciales,xAEvaluar.at(i)));
    }
    return respuesta;
}

