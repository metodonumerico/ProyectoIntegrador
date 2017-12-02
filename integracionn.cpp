//Programa elaborado para la solucion del metodo de integracion numerica version 1.0
#include "integracionn.h"
#include "ui_integracionn.h"
#include "math.h"
#include "cmath"//se agrega las librerias matematicas

integracionN::integracionN(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::integracionN)
{
    ui->setupUi(this);//se conectan los botones de la interfaz con el programa principal
                        //the connections of the interface with the main program are declared
    connect(ui->evaluar,SIGNAL(clicked()),this,SLOT(Calcular()));
    connect(ui->clear,SIGNAL(clicked()),this,SLOT(Borrar()));
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}
integracionN::~integracionN()
{
    delete ui;
}
//se declara la funcion que se va a utilizar para este metodo
//function that will be used in the method
double integracionN::Funcion(double x){
    return ((1/sqrt(2*3.1416))*exp(-(pow(x,2)/2)));
}
//se define lo que el programa realizara dentro de la funcion Calcular
void integracionN::Calcular(){
    QString resultado,valor1,valor2;//se crean vriables de tipo cadena apra el resultado
    double h,a,b,n,Integral,X0,X1,X2,X3,X4,X5,X6,error,valorR;//se definen variables de tipo doble para la solucion del problema
    valorR=0.682689;//se ingresa el valor verdadero de la integral para ver el error absoluto
    b=ui->limext->value();//se toman los valores de los spin box para el desarrollo del metodo
    //the spin box values ​​are obtained
    a=ui->liminf->value();
    n=ui->intervalo->value();
    h=(b-a)/n;//se calcula el valor de h
    X0=a;//se definen los valores de los intervalos
    X1=X0+h;
    X2=X1+h;
    X3=X2+h;
    X4=X3+h;
    X5=X4+h;
    X6=X5+h;
    //se realiza la formula para la determinacion del valor de la integral
    //place the condition that will follow the method to get to the result
    Integral=(((h/2)*(Funcion(X0)+Funcion(X1)))+((h/2)*(Funcion(X1)+Funcion(X2)))+((h/2)*(Funcion(X2)+Funcion(X3)))+
              ((h/2)*(Funcion(X3)+Funcion(X4)))+((h/2)*(Funcion(X4)+Funcion(X5)))+((h/2)*(Funcion(X5)+Funcion(X6))));
    error=100*std::abs((Integral-valorR)/Integral);//se calcula el valor del error
    //se crea el mensaje que se mostrara en la interfaz
    //the text that appears as a result is conditioned
    resultado.append("El valor aproximado de la integral es: ").append(valor1.setNum(Integral)).append("\nCon un error de: ").
            append(valor2.setNum(error)).append("%");
    ui->Resultado->setText(resultado);//se visualiza el mensaje en la interfaz
}
void integracionN::Borrar(){//se define el funcionamiento de la funcion Borrar
    ui->intervalo->setValue(0);//se regresan a 0 los valores de los spin box y double spic box
    ui->limext->setValue(0.0);
    ui->liminf->setValue(0.0);
    ui->Resultado->clear();//se limpia la etiqueta Resultado para el proximo Calculo
}
void integracionN::salir(){
    Borrar();
    close();
}
