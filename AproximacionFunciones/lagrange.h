#ifndef LAGRANGE_H
#define LAGRANGE_H



#include <vector>
using namespace std;

class Lagrange
{
public:
    Lagrange();
    ~Lagrange();
    double polinomioLagrange(vector <double> xIniciales, vector <double> yIniciales, double xAEvaluar);
};

#endif // LAGRANGE_H
