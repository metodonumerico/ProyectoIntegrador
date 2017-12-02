#include "rlineal.h"
#include "ui_rlineal.h"
#include "math.h"
#include "cmath"

rlineal::rlineal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rlineal)
{
    ui->setupUi(this);//se conectan los botones de la interfaz con los metodos del programa
                        //the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(calcular()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(clear()));
}

rlineal::~rlineal()
{
    delete ui;
}
void rlineal::calcular(){//se define el metodo calcular
    QString resultado,valor1,valor2,valor3,valor4,valor5;//se declaran variables tipo cadena que se utilizaran en el metodo
    int n=7;//se declara el numero de elementos de la lista
    double regresion[7][2];//se declara una matriz de 7 x 2 de tipo doble
    regresion[0][0]=ui->x1->value();//se rellena la matriz con los valores de las spinbox
    regresion[1][0]=ui->x2->value();//the spin box values ​​are obtained
    regresion[2][0]=ui->x3->value();
    regresion[3][0]=ui->x4->value();
    regresion[4][0]=ui->x5->value();
    regresion[5][0]=ui->x6->value();
    regresion[6][0]=ui->x7->value();
    regresion[0][1]=ui->y1->value();
    regresion[1][1]=ui->y2->value();
    regresion[2][1]=ui->y3->value();
    regresion[3][1]=ui->y4->value();
    regresion[4][1]=ui->y5->value();
    regresion[5][1]=ui->y6->value();
    regresion[6][1]=ui->y7->value();
    //place the condition that will follow the method to get to the result
    double sumaXi=regresion[0][0]+regresion[1][0]+regresion[2][0]+regresion[3][0]+
            regresion[4][0]+regresion[5][0]+regresion[6][0];//se hace la sumatoria de la primer columna
    double sumayi=regresion[0][1]+regresion[1][1]+regresion[2][1]+regresion[3][1]+
            regresion[4][1]+regresion[5][1]+regresion[6][1];//se hace la sumatoria de la segunda columna
    double Xicuadrado=pow(sumaXi,2);//se calcula el cuadrado de la sumatoria de la primer columna
    double Yicuadrado=pow(sumayi,2);//se calcula el cuadrado de la sumatoria de la segunda columna
            //se calcula la sumatoria de los productos de las filas
    double sumaproductos=(regresion[0][0]*regresion[0][1])+(regresion[1][0]*regresion[1][1])+(regresion[2][0]*regresion[2][1])+
            (regresion[3][0]*regresion[3][1])+(regresion[4][0]*regresion[4][1])+(regresion[5][0]*regresion[5][1])+(regresion[6][0]*regresion[6][1]);
            //se hace la sumatoria de los cuadrados de cada elemento de la primer columna
    double sumacuadradosx=pow(regresion[0][0],2)+pow(regresion[1][0],2)+pow(regresion[2][0],2)+pow(regresion[3][0],2)+
            pow(regresion[4][0],2)+pow(regresion[5][0],2)+pow(regresion[6][0],2);
            //se hace la sumatoria de los cuadrados de cada elemento de la segunda columna
    double sumacuadradosy=pow(regresion[0][1],2)+pow(regresion[1][1],2)+pow(regresion[2][1],2)+pow(regresion[3][1],2)+
            pow(regresion[4][1],2)+pow(regresion[5][1],2)+pow(regresion[6][1],2);
    double Xmedia=sumaXi/n;//se calcula la media de la sumatoria de la primer columna
    double Ymedia=sumayi/n;//se calcula la media de la sumatoria de la segunda columna
            //se calcula el valor de a1
    double a1=(((n*sumaproductos)-(sumaXi*sumayi))/((n*sumacuadradosx)-Xicuadrado));
    double a0=Ymedia-(a1*Xmedia);//se calcula el valor de a0
            //se calcula el coeficiente de regresion
    double r1=((n*sumaproductos)-(sumaXi*sumayi));
    double r2=sqrt((n*sumacuadradosx)-Xicuadrado)*sqrt((n*sumacuadradosy)-Yicuadrado);
    double R=r1/r2;
    //se guarda el conjunto de datos que se mostraran en la pantalla de la interfaz
    //the text that appears as a result is conditioned
    resultado.append("El resultado de la regresion lineal es:").append("\nvalor de a1= ").append(valor1.setNum(a1))
            .append("\nvalor de a0= ").append(valor2.setNum(a0)).append("\nCoeficiente de regresion= ").append(valor3.setNum(R))
            .append("\necuacion de la recta: ").append(valor4.setNum(a0)).append(" + ")
            .append(valor5.setNum(a1)).append("x");
            //se visualiza el resultado en la pantalla de la interfaz
    ui->Resultado->setText(resultado);
}
void rlineal::clear(){
    ui->x1->setValue(0);//se regresan todos los spinbox de la interfaz a 0
    ui->x2->setValue(0);
    ui->x3->setValue(0);
    ui->x4->setValue(0);
    ui->x5->setValue(0);
    ui->x6->setValue(0);
    ui->x7->setValue(0);
    ui->y1->setValue(0.0);
    ui->y2->setValue(0.0);
    ui->y3->setValue(0.0);
    ui->y4->setValue(0.0);
    ui->y5->setValue(0.0);
    ui->y6->setValue(0.0);
    ui->y7->setValue(0.0);
    ui->Resultado->clear();//se limpia el label donde se muestra el resultado
}
void rlineal::salir(){
    clear();
    close();
}
