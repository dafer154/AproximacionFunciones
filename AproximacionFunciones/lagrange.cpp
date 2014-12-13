#include "lagrange.h"


/**
 * @brief Lagrange::Lagrange constructor de la clase
 */
Lagrange::Lagrange()
{

}

/**
 * @brief Lagrange::~Lagrange destructor de la clase
 */
Lagrange::~Lagrange()
{
}

/**
 * @brief Lagrange::polinomioLagrange interpola el valor de un dato utilizando el
 * polinomio de lagrange.
 * @param xIniciales valores de x iniciales
 * @param yIniciales valores y o f(x) iniciales
 * @param xAEvaluar valor que se desea interpolar
 * @return
 */
double Lagrange::calcularPuntoConLagrange(QVector<double> xIniciales, QVector<double> yIniciales, double xAEvaluar)
{
    double resultadoLagrange = 0;

    double numerador, denominador;
    int tamano = xIniciales.size();
    for (int i = 0; i < tamano; i++) {
        numerador = 1;
        denominador = 1;
        for (int j = 0; j < tamano; j++) {
            if(i!=j){
                numerador *= (xAEvaluar-xIniciales.at(j));
                denominador *= (xIniciales.at(i)-xIniciales.at(j));
            }
        }
        resultadoLagrange += (numerador/denominador)*yIniciales.at(i);
    }
    return resultadoLagrange;
}

void Lagrange::calcularPuntosConLagrange(QVector<double> xIniciales,
                                                              QVector<double> yIniciales, QVector<double> puntosAEvaluar){
    resultadoLagrange.clear();
    int size = puntosAEvaluar.size();
    for (int i = 0; i < size; ++i) {
        resultadoLagrange.push_back(calcularPuntoConLagrange(xIniciales, yIniciales,puntosAEvaluar.at(i)));
    }
}

