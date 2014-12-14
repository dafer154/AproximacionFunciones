#-------------------------------------------------
#
# Project created by QtCreator 2014-11-09T22:10:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = AproximacionFunciones
TEMPLATE = app


SOURCES += main.cpp\
    funcionexacta.cpp \
    lagrange.cpp \
    interfaz.cpp \
    qcustomplot.cpp

HEADERS  += \
    funcionexacta.h \
    lagrange.h \
    interfaz.h \
    qcustomplot.h

FORMS    += \
    interfaz.ui

RESOURCES += \
    imagenes.qrc
