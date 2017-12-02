#include "rmultiple.h"
#include "ui_rmultiple.h"
#include "math.h"
#include "cmath"
#include "QMatrix"

rmultiple::rmultiple(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rmultiple)
{
    ui->setupUi(this);//the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(calcular()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}

rmultiple::~rmultiple()
{
    delete ui;
}
void rmultiple::calcular(){
    QString resultado,valor1,valor2,valor3,valor4,valor5,valor6,valor7;
    double n=6;
    double multiple[6][3];
    //the spin box values ​​are obtained
    multiple[0][0]=ui->x1->value();
    multiple[1][0]=ui->x2->value();
    multiple[2][0]=ui->x3->value();
    multiple[3][0]=ui->x4->value();
    multiple[4][0]=ui->x5->value();
    multiple[5][0]=ui->x6->value();
    multiple[0][1]=ui->x11->value();
    multiple[1][1]=ui->x12->value();
    multiple[2][1]=ui->x13->value();
    multiple[3][1]=ui->x14->value();
    multiple[4][1]=ui->x15->value();
    multiple[5][1]=ui->x16->value();
    multiple[0][2]=ui->y1->value();
    multiple[1][2]=ui->y2->value();
    multiple[2][2]=ui->y3->value();
    multiple[3][2]=ui->y4->value();
    multiple[4][2]=ui->y5->value();
    multiple[5][2]=ui->y6->value();
    //place the condition that will follow the method to get to the result
    double sumaX1=multiple[0][0]+multiple[1][0]+multiple[2][0]+multiple[3][0]+multiple[4][0]+multiple[5][0];
    double sumaX2=multiple[0][1]+multiple[1][1]+multiple[2][1]+multiple[3][1]+multiple[4][1]+multiple[5][1];
    double sumaY1=multiple[0][2]+multiple[1][2]+multiple[2][2]+multiple[3][2]+multiple[4][2]+multiple[5][2];
    double X1cuadrado=pow(multiple[0][0],2)+pow(multiple[1][0],2)+pow(multiple[2][0],2)+pow(multiple[3][0],2)+
            pow(multiple[4][0],2)+pow(multiple[5][0],2);
    double X2cuadrado=pow(multiple[0][1],2)+pow(multiple[1][1],2)+pow(multiple[2][1],2)+pow(multiple[3][1],2)+
            pow(multiple[4][1],2)+pow(multiple[5][1],2);
    double X1X2productos=(multiple[0][0]*multiple[0][1])+(multiple[1][0]*multiple[1][1])+(multiple[2][0]*multiple[2][1])+
            (multiple[3][0]*multiple[3][1])+(multiple[4][0]*multiple[4][1])+(multiple[5][0]*multiple[5][1]);
    double X1Y1producto=(multiple[0][0]*multiple[0][2])+(multiple[1][0]*multiple[1][2])+(multiple[2][0]*multiple[2][2])+
            (multiple[3][0]*multiple[3][2])+(multiple[4][0]*multiple[4][2])+(multiple[5][0]*multiple[5][2]);
    double X2Y1pruducto=(multiple[0][2]*multiple[0][1])+(multiple[1][2]*multiple[1][1])+(multiple[2][2]*multiple[2][1])+
            (multiple[3][2]*multiple[3][1])+(multiple[4][2]*multiple[4][1])+(multiple[5][2]*multiple[5][1]);
    double ymedia=sumaY1/n;
    double A[3][3];
    A[0][0]=n;
    A[1][0]=sumaX1;
    A[2][0]=sumaX2;
    A[0][1]=sumaX1;
    A[1][1]=X1cuadrado;
    A[2][1]=X1X2productos;
    A[0][2]=sumaX2;
    A[1][2]=X1X2productos;
    A[2][2]=X2cuadrado;
    double B[3][1];
    B[0][0]=sumaY1;
    B[1][0]=X1Y1producto;
    B[2][0]=X2Y1pruducto;
    double detA=((A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1]))
            -((A[0][2]*A[1][1]*A[2][0])+(A[0][0]*A[1][2]*A[2][1])+(A[0][1]*A[1][0]*A[2][2]));
    double deta0=((B[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*B[2][0])+(A[0][2]*B[1][0]*A[2][1]))
            -((A[0][2]*A[1][1]*B[2][0])+(B[0][0]*A[1][2]*A[2][1])+(A[0][1]*B[1][0]*A[2][2]));
    double deta1=((A[0][0]*B[1][0]*A[2][2])+(B[0][0]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*B[2][0]))
            -((A[0][2]*B[1][0]*A[2][0])+(A[0][0]*A[1][2]*B[2][0])+(B[0][0]*A[1][0]*A[2][2]));
    double deta2=((A[0][0]*A[1][1]*B[2][0])+(A[0][1]*B[1][0]*A[2][0])+(B[0][0]*A[1][0]*A[2][1]))
            -((B[0][0]*A[1][1]*A[2][0])+(A[0][0]*B[1][0]*A[2][1])+(A[0][1]*A[1][0]*B[2][0]));
    double a0=deta0/detA;
    double a1=deta1/detA;
    double a2=deta2/detA;
    double St=0;
    double Sr=0;
    for(int i=0;i<n;i++){
        double minimos=multiple[i][2]-ymedia;
        St=St+pow(minimos,2);
        double aprox=multiple[i][2]-a0-(a1*multiple[i][0])-(a2*multiple[i][1]);
        Sr=Sr+pow(aprox,2);
    }
    double R1=(St-Sr)/Sr;
    double R=sqrt(R1);
    //the text that appears as a result is conditioned
    resultado.append("El resultado de la Regresion Multiple es:").append("\na0= ").append(valor1.setNum(a0))
            .append("\na1= ").append(valor2.setNum(a1)).append("\na2= ").append(valor3.setNum(a2))
            .append("\nCoeficiente de Regresion= ").append(valor4.setNum(R)).append("\nLa ecuacion del plano es: ")
            .append(valor5.setNum(a0)).append(" + ").append(valor6.setNum(a1)).append("X1 + ").append(valor7.setNum(a2)).append("X2");
    ui->Resultado->setText(resultado);
}
void rmultiple::borrar(){
    ui->x1->setValue(0);
    ui->x2->setValue(0);
    ui->x3->setValue(0);
    ui->x4->setValue(0);
    ui->x5->setValue(0);
    ui->x6->setValue(0);
    ui->x11->setValue(0);
    ui->x12->setValue(0);
    ui->x13->setValue(0);
    ui->x14->setValue(0);
    ui->x15->setValue(0);
    ui->x16->setValue(0);
    ui->y1->setValue(0.0);
    ui->y2->setValue(0.0);
    ui->y3->setValue(0.0);
    ui->y4->setValue(0.0);
    ui->y5->setValue(0.0);
    ui->y6->setValue(0.0);
    ui->Resultado->clear();
}
void rmultiple::salir(){
    borrar();
    close();
}
