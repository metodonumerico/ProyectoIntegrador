#include "bissec.h"
#include "ui_bissec.h"
#include <QString>
#include "QDoubleSpinBox"
#include <cmath>

Bissec::Bissec(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Bissec)
{
    ui->setupUi(this);
        //the connections of the interface with the main program are declared
    connect(ui->Evaluar,SIGNAL(clicked()),this,SLOT(evaluar()));
    connect(ui->Clear,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->CLOSE,SIGNAL(clicked()),this,SLOT(salir()));
}

Bissec::~Bissec()
{
    delete ui;
}
double Bissec::Func(double c){//function that will be used in the method
    return (667.38/c)*(1-exp(-0.146843*c))-40;
}

void Bissec::evaluar()
{
   /*(667.38/c)*(1-e-(0.146843)*c)-40;*/
   QString temp,temp2,temp3;
   double X1;
   double X2;
   double error;
   double Xr,ea,fx1,fxr,f;
   X1=ui->doubleSpinBox_3->value();//the spin box values ​​are obtained
   X2=ui->doubleSpinBox_2->value();
   error=ui->doubleSpinBox->value();
   ea=100.0;
   Xr=0.0;
   while(ea>error){//place the condition that will follow the method to get to the result
       Xr=(X2+X1)/2;
       ea=100*std::abs(Xr-X2)/Xr;
       fx1=Func(X1);
       fxr=Func(Xr);
       f=fx1*fxr;
       if(f<0)
           X2=Xr;
       if(f>0)
           X1=Xr;
   }
   //the text that appears as a result is conditioned
    temp.append("Raiz=").append(temp2.setNum(Xr)).append("\nError=").append(temp3.setNum(ea));  //Se prepara el texto para ser presentado
           ui->Resultado->setText(temp);  //Se presenta el texto
}

void Bissec::borrar(){
    ui->doubleSpinBox_3->setValue(0.0);  //Se borran los spinbox
    ui->doubleSpinBox_2->setValue(0.0);
    ui->doubleSpinBox->setValue(0.0);
    ui->Resultado->clear();     //Se borra el texto
}
void Bissec::salir(){
    borrar();
    close();
}
