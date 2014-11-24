#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <QMainWindow>
#include <QVector>

namespace Ui {
class Interfaz;
}

class Interfaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interfaz(QWidget *parent = 0); 
    QVector<double>getPuntosXo();
    ~Interfaz();

private slots:
    void on_bt_abrirArchivo_clicked();


private:
    Ui::Interfaz *ui;
    QVector<double> puntosXo;
};

#endif // INTERFAZ_H
