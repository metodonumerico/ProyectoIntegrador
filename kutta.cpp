//programa para el metodo de runge kutta version 1.0
#include "kutta.h"
#include "ui_kutta.h"
#include "math.h"
#include "cmath"
#include <QDebug>

kutta::kutta(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kutta)
{
    ui->setupUi(this);//se hace las conexiones del la interfaz con el programa principal
                       //the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Calcular()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Limpiar()));
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}
kutta::~kutta()
{
    delete ui;
}
double kutta::funcion1(double x){//se define la funcion
    return ((-0.5*(pow(x,4)))+(4*(pow(x,3)))-(10*(pow(x,2)))+(8.5*x)+1);
}
double kutta::funcion2(double x){//se define la segunda funcion que se ocupara en el metodo
    return ((-2*(pow(x,3)))+(12*(pow(x,2)))-(20*x)+8.5);
}
void kutta::Calcular(){//se declara el funcionamiento del metodo calcular
    double limiteinf,limitesup,dato,dato1,dato2,H,K1,K2,K3,K4,Y;//se declaran las variables que se ocuparan en el programa
    limiteinf=ui->liminf->value();//se obtinenen los valores de los spinbox
    limitesup=ui->limsup->value();//the spin box values ​​are obtained
    H=ui->paso->value();
    int ORDEN=ui->grado->value();
    int N=(limitesup-limiteinf)/H;//se calcula el numero de partes en que se divira la funcion para el calculo de su integral
    double valores[N+1][3];//se declara una matriz
    double espacio=0;//se inicializa una variable con un valor inicual
    for(int i=0;i<=N;i++){//se calculan todos los puntos que se evaluaran en el metodo
        valores[i][0]=espacio;
        espacio=espacio+H;
    }
    for(int j=0;j<=N;j++){//se evaluan los puntos
        valores[j][1]=funcion1(valores[j][0]);
    }
    valores[0][2]=valores[0][1];//se definen valores iniciales
    double y1=valores[0][1];
    double x=valores[0][0];
    //place the condition that will follow the method to get to the result
    switch (ORDEN){//se declara una condicion switch para definir el orden de la solucion
    case 2:
        //de segundo orden metodo de Ralston*/
        for(int i=1;i<=N;i++){
            K1=funcion2(x);
            dato=x+((3*H)/4);
            K2=funcion2(dato);
            Y=y1+(((K1/3)+((2*K2)/3))*H);
            valores[i][2]=Y;
            y1=Y;
            x=x+H;
        }
        break;
    case 3:
        //tercer orden
        for(int i=1;i<=N;i++){
            K1=funcion2(x);
            dato=x+(H/2);
            K2=funcion2(dato);
            dato1=x+H;
            K3=funcion2(dato1);
            Y=y1+(((K1+(4*K2)+K3)/6)*H);
            y1=Y;
            valores[i][2]=Y;
            x=x+H;
        }
        break;
    case 4:
        //Cuarto Orden
        for(int i=1;i<=N;i++){
            K1=funcion2(x);
            dato=x+(H/2);
            K2=funcion2(dato);
            dato1=dato;
            K3=funcion2(dato1);
            dato2=x+H;
            K4=funcion2(dato2);
            Y=y1+(((K1+(2*K2)+(2*K3)+K4)/6)*H);
            y1=Y;
            valores[i][2]=Y;
            x=x+H;
        }
        break;
    default:
        break;
    }
    double error[N+1];//se declara un vector llamado error
    error[0]=0;
    for(int i=1;i<=N;i++){//se calculan los errores y se guardan en el vector error
    error[i]=100*std::abs((valores[i][2]-valores[i][1]))/valores[i][2];
    }
    //the text that appears as a result is conditioned
    ui->tabla->setRowCount(N+1);//se definen el numero de columnas y filas de la QTableWidget
    ui->tabla->setColumnCount(4);
    for(int i=0;i<4;i++){
        for(int j=0;j<=N;j++){//se crean las los espacios que tendra la tabla
             ui->tabla->setItem(j,i,new QTableWidgetItem);
        }
    }
    QString val,val1;
    for(int i=0;i<3;i++){//se rellenan los espacios de la tabla con los valores obtenidos en el metodo
       for(int j=0;j<=N;j++){
           ui->tabla->item(j,i)->setText(val.setNum(valores[j][i]));
       }
    }
    for(int i=0;i<=N;i++){//se agregan a la tabla los valores de los errores
       ui->tabla->item(i,3)->setText(val1.setNum(error[i]));
    }
}
void kutta::Limpiar(){// se define el funcionamiento del metodo Limpiar
    ui->liminf->setValue(0.0);//se restauran todos los valores  de los spinbo
    ui->limsup->setValue(0.0);
    ui->paso->setValue(0.0);
    ui->grado->setValue(2);
    ui->tabla->clear();//se borra el contenido de la tabla
}
void kutta::salir(){//se define el metodo salir
    Limpiar();//llama al metodo limpiar
    close();//llama al metodo close para cerrar la pantalla de interfaz
}
