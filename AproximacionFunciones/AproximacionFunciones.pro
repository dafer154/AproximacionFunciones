#-------------------------------------------------
#
# Project created by QtCreator 2014-11-09T22:10:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AproximacionFunciones
TEMPLATE = app


SOURCES += main.cpp\
    funcionexacta.cpp \
    graficador.cpp \
    lagrange.cpp \
    interfaz.cpp \
    interprete/exprtk_simple_example_01.cpp

HEADERS  += \
    funcionexacta.h \
    graficador.h \
    lagrange.h \
    interfaz.h \
    interprete/exprtk.hpp

FORMS    += \
    interfaz.ui

RESOURCES += \
    imagenes.qrc
