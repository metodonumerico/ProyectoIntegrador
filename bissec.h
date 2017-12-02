#ifndef BISSEC_H
#define BISSEC_H

#include <QMainWindow>
#include <QDoubleSpinBox>

namespace Ui {
class Bissec;
}

class Bissec : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bissec(QWidget *parent = 0);
    ~Bissec();
    double Func(double c);


private slots:
    void evaluar();//se declaran las funciones que se ocuparan en el metodo
                    //Declare the functions that will be used in the program
    void borrar();
    void salir();
private:
    Ui::Bissec *ui;
};

#endif // BISSEC_H
