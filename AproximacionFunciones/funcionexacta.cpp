#include "funcionexacta.h"
#include "interprete/exprtk.hpp"


FuncionExacta::FuncionExacta()
{
}

FuncionExacta::~FuncionExacta()
{
}


void FuncionExacta::evaluarFuncionVariosPuntos(QString funcion, QVector<double> puntos)
{
    resultadosFuncionExacta.clear();

    double x;
    exprtk::symbol_table<double> symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    exprtk::expression<double> expression;
    expression.register_symbol_table(symbol_table);

    exprtk::parser<double> parser;
    parser.compile(funcion.toStdString(),expression);

    int size=puntos.size();

    for (int i = 0; i < size; ++i) {
        x=puntos.at(i);
        double y= (double) expression.value();
        if (y<ymin)
            ymin=y;
        if (y>ymax)
            ymax=y;
        resultadosFuncionExacta.push_back(y);
    }
}


void FuncionExacta::evaluarFuncionVariosPuntosLagrange(QString funcion, QVector<double> puntos)
{
    resultadosFuncionExactaLagrange.clear();

    double x;
    exprtk::symbol_table<double> symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    exprtk::expression<double> expression;
    expression.register_symbol_table(symbol_table);

    exprtk::parser<double> parser;
    parser.compile(funcion.toStdString(),expression);

    int size=puntos.size();

    for (int i = 0; i < size; ++i) {
        x=puntos.at(i);
        resultadosFuncionExactaLagrange.push_back((double) expression.value());
    }
}

double FuncionExacta::evaluarFuncion(QString funcion, double punto)
{


    double x;
    exprtk::symbol_table<double> symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    exprtk::expression<double> expression;
    expression.register_symbol_table(symbol_table);

    exprtk::parser<double> parser;
    parser.compile(funcion.toStdString(),expression);

    x=punto;
    return (double) expression.value();

}
/*
template <typename T>
double FuncionExacta::funcionExacta(QString funcion, double intervaloInf,
                                    double intervaloSup, double salto)
{

    T x;
    exprtk::symbol_table<T> symbol_table;
    symbol_table.add_variable("x",x);
    symbol_table.add_constants();

    exprtk::expression<T> expression;
    expression.register_symbol_table(symbol_table);

    exprtk::parser<T> parser;
    parser.compile(funcion,expression);

    for (x = T(intervaloInf); x <= T(intervaloSup); x += T(salto))
    {
       T y = expression.value();
       printf("%19.15f\t%19.15f\n",x,y);
    }

}

 */
