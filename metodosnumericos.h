#ifndef METODOSNUMERICOS_H
#define METODOSNUMERICOS_H

#include <QMainWindow>//se llaman todos las librerias  de los programas adicionales
#include "bissec.h"
#include "eliminacion.h"
#include "interpolacion.h"
#include "newton.h"
#include "puntofijo.h"
#include "rlineal.h"
#include "rmultiple.h"
#include "seidel.h"
#include "derivacion.h"
#include "integracionn.h"
#include "euler.h"
#include "kutta.h"

namespace Ui {
class metodosnumericos;
}

class metodosnumericos : public QMainWindow
{
    Q_OBJECT

public:
    explicit metodosnumericos(QWidget *parent = 0);
    ~metodosnumericos();
    Bissec *biseccion;//se declaran nuevas funciones de las clases existentes en las diferentes librerias
    eliminacion *eliminacionG;
    interpolacion *Interpolacion;
    newton *Newton;
    puntofijo *Punto;
    rlineal *RegresionL;
    rmultiple *RegresionM;
    seidel *Seidel;
    derivacion *Derivada;
    integracionN *Integrar;
    Euler *euler;
    kutta *runge;

private:
    Ui::metodosnumericos *ui;
public slots://se declaran todos los metodos que se utilizaran en el programa para poder llamar a las funciones declaradas anteriormente
    void Bisec();
    void elimgaus();
    void interpol();
    void newt();
    void puntof();
    void regresionli();
    void regresionmul();
    void gauseidel();
    void Salir();
    void derivada();
    void integral();
    void metodoeuler();
    void Kutta();
};

#endif // METODOSNUMERICOS_H
