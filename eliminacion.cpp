#include "eliminacion.h"
#include "ui_eliminacion.h"
#include "math.h"
#include "cmath"

eliminacion::eliminacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eliminacion)
{
    ui->setupUi(this);//the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Metodo()));//se conecta el boton calcular de la interfaz con el programa
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));//se conecta el boton borrar de la interfaz con el programa
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}
eliminacion::~eliminacion()
{
    delete ui;
}
void eliminacion::Metodo(){//comienza el calculo del metodo
    QString resultado,var1,var2,var3,var4;//se declaran unas variables tipo cadena para el resultado
    double arreglo[4][5];//se crea la matriz donde se manipularan los valores
    arreglo[0][0]=ui->a1->value();//se agrega el valor de los spinbox a las posiciones de la matriz
    arreglo[1][0]=ui->a2->value();//the spin box values ​​are obtained
    arreglo[2][0]=ui->a3->value();
    arreglo[3][0]=ui->a4->value();
    arreglo[0][1]=ui->b1->value();
    arreglo[1][1]=ui->b2->value();
    arreglo[2][1]=ui->b3->value();
    arreglo[3][1]=ui->b4->value();
    arreglo[0][2]=ui->c1->value();
    arreglo[1][2]=ui->c2->value();
    arreglo[2][2]=ui->c3->value();
    arreglo[3][2]=ui->c4->value();
    arreglo[0][3]=ui->d1->value();
    arreglo[1][3]=ui->d2->value();
    arreglo[2][3]=ui->d3->value();
    arreglo[3][3]=ui->d4->value();
    arreglo[0][4]=ui->A->value();
    arreglo[1][4]=ui->B->value();
    arreglo[2][4]=ui->C->value();
    arreglo[3][4]=ui->D->value();
    double X1,X2,X3,X4;//se crean las variables que seran el resultado
    int n=4,x=0;//se inicializa el numero de incognitas
    //place the condition that will follow the method to get to the result
    for(int i=0;i<n-1;i++){//se inician los ciclos para calcular el metodo
       for(int j=0;j<=n;j++){
           arreglo[i+1][j]=(arreglo[i+1][j]-((arreglo[i][i]*arreglo[i+1][i])/arreglo[i][i]));
           if(x<=1){
                arreglo[i+2][j]=(arreglo[i+2][j]-((arreglo[i][i]*arreglo[i+2][i])/arreglo[i][i]));
          }
          if(x==0){
                arreglo[i+3][j]=(arreglo[i+3][j]-((arreglo[i][i]*arreglo[i+3][i])/arreglo[i][i]));
           }
           }
            x=x+1;
        }
    //se determinan los valores de las X
    X4=(arreglo[3][4]/arreglo[3][3]);
    X3=((arreglo[2][4]-(arreglo[2][3]*X4))/arreglo[2][2]);
    X2=((arreglo[1][4]-(arreglo[1][3]*X4)-(arreglo[1][2]*X3))/arreglo[1][1]);
    X1=((arreglo[0][4]-(arreglo[0][3]*X4)-(arreglo[0][2]*X3)-(arreglo[0][1]*X2))/arreglo[0][0]);
    //se guarda el valor de las X anteriores en la variable resultado
    //the text that appears as a result is conditioned
    resultado.append("El valor de las X en este Sistema de Ecuaciones es el siguiente").append("\nValor de X1= ").append(var1.setNum(X1)).append("\nValor de X2= ").append(var2.setNum(X2)).append("\nValor de X3= ").append(var3.setNum(X3)).append("\nValor de X4= ").append(var4.setNum(X4));
    //se guarda el resultado y se despliega en la interfaz
    ui->Resultado->setText(resultado);
}
void eliminacion::borrar(){//se inicia la funcion borrar
    ui->a1->setValue(0.00);//se modifican los spinbox a 0.0
    ui->b1->setValue(0.00);
    ui->c1->setValue(0.00);
    ui->d1->setValue(0.00);
    ui->a2->setValue(0.00);
    ui->b2->setValue(0.00);
    ui->c2->setValue(0.00);
    ui->d2->setValue(0.00);
    ui->a3->setValue(0.00);
    ui->b3->setValue(0.00);
    ui->c3->setValue(0.00);
    ui->d3->setValue(0.00);
    ui->a4->setValue(0.00);
    ui->b4->setValue(0.00);
    ui->c4->setValue(0.00);
    ui->d4->setValue(0.00);
    ui->A->setValue(0.00);
    ui->B->setValue(0.00);
    ui->C->setValue(0.00);
    ui->D->setValue(0.00);
    ui->Resultado->clear();//se limpia el texto del label Resultado
}
void eliminacion::salir(){
    borrar();
    close();
}
