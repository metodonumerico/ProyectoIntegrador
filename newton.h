#ifndef NEWTON_H
#define NEWTON_H

#include <QMainWindow>
#include <QString>//se incluye esta libreria para dar de alta variables de tipo cadena
                   //the QString library is included to define string variables

namespace Ui {
class newton;
}

class newton : public QMainWindow
{
    Q_OBJECT

public:
    explicit newton(QWidget *parent = 0);
    ~newton();
    double funcion(double x);//se define la funcion que se va a evaluar
                            //is defined function to evaluated
    double derivada1(double x);//se define una segunda funcion para la derivada de la primera funcion
                               //is defined a second function to evaluated the derivad
    QString resultado;//se declara la variable de tipo cadena
                   //is declared resultado as String variable

private slots:
    void Metodo(); //se declara la funcion Metodo
                   //is declared the Metodo function
    void Borrar();//se declara la funcion Borrar
                  //is declared the Borrar function
    void Habilitar();//se declara la funcion Habilitar
                    //is declarated the Enable Function
    void salir();
private:
    Ui::newton *ui;
};

#endif // NEWTON_H
