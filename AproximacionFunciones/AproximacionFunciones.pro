#-------------------------------------------------
#
# Project created by QtCreator 2014-11-09T14:55:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AproximacionFunciones
TEMPLATE = app


SOURCES += main.cpp\
        main.cpp \
    lagrange.cpp \
    funcionexacta.cpp \
    interfazalgoritmosgraficador.cpp \
    graficador.cpp

HEADERS  += main.h \
    lagrange.h \
    funcionexacta.h \
    interfazalgoritmosgraficador.h \
    graficador.h

FORMS    += main.ui
