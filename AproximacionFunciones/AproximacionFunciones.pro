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
    interfaz.cpp

HEADERS  += \
    funcionexacta.h \
    graficador.h \
    interfazalgoritmosgraficador.h \
    lagrange.h \
    interfaz.h

FORMS    += \
    interfaz.ui

RESOURCES += \
    imagenes.qrc
