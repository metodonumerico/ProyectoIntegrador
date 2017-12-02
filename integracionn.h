#ifndef INTEGRACIONN_H
#define INTEGRACIONN_H

#include <QMainWindow>

namespace Ui {
class integracionN;
}

class integracionN : public QMainWindow
{
    Q_OBJECT

public:
    explicit integracionN(QWidget *parent = 0);
    ~integracionN();
   double Funcion(double x);//se define la funcion
private:
    Ui::integracionN *ui;
private slots://Declare the functions that will be used in the program
    void Calcular();//se definen los metodos que se utilizaran dentro del programa
    void Borrar();
    void salir();
};

#endif // INTEGRACIONN_H
