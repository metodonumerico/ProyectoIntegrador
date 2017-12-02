//Metodo de Euler version 1.0
#include "euler.h"
#include "ui_euler.h"
#include "cmath"//se agregan librerias de matematica
#include "math.h"

Euler::Euler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Euler)
{
    ui->setupUi(this);//se conectan los botones de la interfaz con el programa principal
                //the connections of the interface with the main program are declared
    connect(ui->metodo,SIGNAL(clicked()),this,SLOT(calcular()));
    connect(ui->limpiar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->cerrar,SIGNAL(clicked()),this,SLOT(Salir()));
}
Euler::~Euler()
{
    delete ui;
}
//function that will be used in the method
double Euler::ecuacion(double x){//se definen las funciones que se ocuparan en el programa
    return ((-0.5*(pow(x,4)))+(4*(pow(x,3)))-(10*(pow(x,2)))+(8.5*x)+1);
}
//function that will be used in the method
double Euler::ecuacion2(double x){
    return ((-2*(pow(x,3)))+(12*(pow(x,2)))-(20*x)+8.5);
}
void Euler::calcular(){//se define lo que ara la funcion calcular
    QString val,val1;//se definen variables tipo cadena para la visualizacion
    double H,LIMITE1,LIMITE2,derivada,y;//se declaran variables de tipo double
    H=ui->h->value();//se obtinen los valores de los spinbox de la interfaz
    LIMITE1=ui->liminf->value();//the spin box values ​​are obtained
    LIMITE2=ui->limexf->value();
    int N=(LIMITE2-LIMITE1)/H;//se calcula el numero de intervalos
    double valores[N+1][3];//se declara una matriz donde se almacenaran los resultados obtenidos
    double paso=0;//se define la variable paso
    //place the condition that will follow the method to get to the result
    for(int i=0;i<=N;i++){//se calculan todos los puntos que se evaluaran en el metodo
        valores[i][0]=paso;
        paso=paso+H;
    }
    for(int j=0;j<=N;j++){//se evaluan los puntos
        valores[j][1]=ecuacion(valores[j][0]);
    }
    double euler=valores[0][1];//se guarda un valor de la matriz en la variable euler
    double x=valores[0][0];//se crea y define la variable x
    valores[0][2]=valores[0][1];
    for(int k=1;k<=N;k++){//se calcula el metodo de euler y se guarda en la matriz
        derivada=ecuacion2(x);
        y=euler+(derivada*H);
        euler=y;
        x=x+H;
        valores[k][2]=y;
    }
    double error[N+1];//se crea un vector llamado error
    error[0]=0;
    for(int i=1;i<=N;i++){//se calculan los errores y se guardan en el vector error
    error[i]=100*std::abs((valores[i][1]-valores[i][2]))/valores[i][1];
}
    //the text that appears as a result is conditioned
    ui->tabla->setRowCount(N+1);//se definen el numero de columnas y filas de la QTableWidget
    ui->tabla->setColumnCount(4);
    for(int i=0;i<4;i++){
        for(int j=0;j<=N;j++){//se crean las los espacios que tendra la tabla
             ui->tabla->setItem(j,i,new QTableWidgetItem);
        }
    }
   for(int i=0;i<3;i++){//se rellenan los espacios de la tabla con los valores obtenidos en el metodo
       for(int j=0;j<=N;j++){
           ui->tabla->item(j,i)->setText(val.setNum(valores[j][i]));
       }
   }
   for(int i=0;i<=N;i++){//se agregan a la tabla los valores de los errores
       ui->tabla->item(i,3)->setText(val1.setNum(error[i]));
   }
}
void Euler::borrar(){//se define la funcion borrar
    ui->h->setValue(0.0);//se regresan a 0 los valores de las spinbox
    ui->liminf->setValue(0.0);
    ui->limexf->setValue(0.0);
    ui->tabla->clear();//se limpian los valores de la QTableWidget
}
void Euler::Salir(){//se define la funcion Salir
    close();//se cierra la interfaz y se borran los valores existentes
    borrar();
}
