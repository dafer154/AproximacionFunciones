#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <QVector>
using namespace std;

class Lagrange
{
public:
    Lagrange();
    ~Lagrange();
    double polinomioLagrange(QVector <double> xIniciales, QVector <double> yIniciales, double xAEvaluar);
};

#endif // LAGRANGE_H
