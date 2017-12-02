//Programa del Metodo Interpolacion de Lagrange version 1.0
#include "interpolacion.h"
#include "ui_interpolacion.h"

interpolacion::interpolacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interpolacion)
{
    ui->setupUi(this);//conexiones del programa con la interfaz
                       //the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Borrar()));
    connect(ui->x,SIGNAL(valueChanged(double)),this,SLOT(Habilitar()));
}

interpolacion::~interpolacion()
{
    delete ui;
}
void interpolacion::Habilitar(){//declaracion del metodo Habilitar
    double X=ui->x->value();//se guarda el valor del spinbox en la variable X
    QString resultado;//se declara una variable de tipo cadena
    if(X!=0){//se declara la condicion para habilitar el boton calcular
        ui->calcular->setEnabled(true);
    }
    else
        resultado.append("Falta agregar el valor de X");//se imprime un mensaje si no se cumple la condicion
    ui->Resultado->setText(resultado);//se visualiza el mensaje en la interfaz
}

void interpolacion::Metodo(){//se inicializa el codigo para la solucion del metodo
    QString resultado,valor1,valor2,valor3,valor4;//se declaran variables de tipo cadena
    double polinomio,formula;//se declaran variables de tipo double
    double x[5][2];//creacion de la matriz para el calculo del metodo
    x[0][0]=ui->X0->value();//se llena la matriz con los valores de los double spinbox de la interfaz
    x[1][0]=ui->X1->value();//the spin box values ​​are obtained
    x[2][0]=ui->X2->value();
    x[3][0]=ui->X3->value();
    x[4][0]=ui->X4->value();
    x[0][1]=ui->fx0->value();
    x[1][1]=ui->fx1->value();
    x[2][1]=ui->fx2->value();
    x[3][1]=ui->fx3->value();
    x[4][1]=ui->fx4->value();
    double X=ui->x->value();//se asigna el valor de la incognita
    int n=5,i,j,k;
    double lagrange[n];//se declara un vector del tamaño de n
    //place the condition that will follow the method to get to the result
    for(k=1;k<n;k++){//inicial el primer ciclo para el orden del polinomio
        polinomio=0;
        for(i=0;i<k+1;i++){//se crea el ciclo para el calculo de la formula del metodo
            formula=1;
            for(j=0;j<k+1;j++){
                if(i!=j){
                 formula=formula*((X-x[j][0])/(x[i][0]-x[j][0]));//se define los valores que tomara la formula
                }                
            }
            formula=formula*x[i][1];//se multiplica el resultado de la formula por el valor de F(x)
            polinomio=polinomio+formula;//se agrega el valor del polinomio
        }        
        lagrange[k]=polinomio;//se guarda el polinomio en el vector lagrange
    }
    //se guarda el mensaje y las variables que se visualizaran en la interfaz
    //the text that appears as a result is conditioned
   resultado.append("Los valores de la interpolacion de lagrange para F(x)=2 son: ").append("\nPrimera aproximacion= ").append(valor1.setNum(lagrange[1])).append("\nSegunda Aproximacion= ").append(valor2.setNum(lagrange[2]))
           .append("\nTercera aproximacion= ").append(valor3.setNum(lagrange[3])).append("\nCuarta Aproximacion= ").append(valor4.setNum(lagrange[4]));
   ui->Resultado->setText(resultado);//se visualiza en valor del String resultado en la interfaz
}
void interpolacion::Borrar(){//se declara el metodo borrar
    ui->X0->setValue(0.0);//se regresan todos los spinbox a 0
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->X3->setValue(0.0);
    ui->X4->setValue(0.0);
    ui->fx0->setValue(0.0);
    ui->fx1->setValue(0.0);
    ui->fx2->setValue(0.0);
    ui->fx3->setValue(0.0);
    ui->fx4->setValue(0.0);
    ui->x->setValue(0.0);
    ui->Resultado->clear();//se limpia el label Resultado
    ui->calcular->setEnabled(false);//se deshabilita el boton calcular
}
void interpolacion::salir(){
    Borrar();
    close();
}
