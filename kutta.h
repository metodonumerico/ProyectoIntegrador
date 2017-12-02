#ifndef KUTTA_H
#define KUTTA_H

#include <QMainWindow>

namespace Ui {
class kutta;
}

class kutta : public QMainWindow
{
    Q_OBJECT

public:
    explicit kutta(QWidget *parent = 0);
    ~kutta();
    double funcion1(double x);//se declara la integrada de la funcion
    double funcion2(double x);//se declara la derivada de la funcion

private:
    Ui::kutta *ui;
private slots://Declare the functions that will be used in the program
    void Calcular();//se declara el metodo calcular, limpiar y salir
    void Limpiar();
    void salir();
};

#endif // KUTTA_H
