#include "newton.h"
#include "ui_newton.h"
#include "math.h"

newton::newton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newton)
{
    ui->setupUi(this);
    //se hacen las conecciones de la interfaz con el programa principal
    // the interface buttons are connect to the main program
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Borrar()));
    connect(ui->x,SIGNAL(valueChanged(double)),this,SLOT(Habilitar()));
    connect(ui->error,SIGNAL(valueChanged(double)),this,SLOT(Habilitar()));
    connect(ui->iteracion,SIGNAL(valueChanged(int)),this,SLOT(Habilitar()));
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}
newton::~newton()
{
    delete ui;
}
double newton::funcion(double x){//se llama a la funcion para crear la funcion a evaluar
    /*funcion utilizada x^3-5x^2+1*/
    return pow(x,3)+5*pow(x,2)+1;//is defined the function to evaluated
}
double newton::derivada1(double x){
    /*la f'(x)=3x^2+10x*/
    return 3*pow(x,2)+(10*x);//is defined the derivad to evaluate X
}
void newton::Habilitar(){//se llama a la funcion habilitar
                           //is call the Habilitar Function
    resultado.clear();//se limpia la variable resultado
                      //clean resultado
    double condicion=(ui->x->value()*ui->error->value()*ui->iteracion->value());//se multiplica el valor de los campos
                                                                                //multiply value of the spinbox´s
    if(condicion!=0)//se pregunta si la condicion es diferente de 0
                    //condition for enable Calcular Button
    ui->calcular->setEnabled(true);//se habilita el boton si se cumple la condicion
                                  //enable Calcular button
    else
        resultado.append(" Faltan datos por ingresar ");//si no se cumple la condicion imprime un mensaje
                                                        //message if condition don´t real
    ui->Resultado->setText(resultado);//agrega el valor de la variable resultado al label Resultado
                                      //add variable resultado to Label Resultado
}
void newton::Metodo(){//se llama a la funcion Metodo
                      //is call the Metodo Function
 QString valor1,valor2,valor3;//String variable is created
 resultado.clear();//se limpia la variable resultado
                   //clean resultado
    double error;//se declara la variable error
             //is declare the error variable
    double X0;//se declara la variable X0
             //is declared the X0 variable

    X0=ui->x->value();//se toma el valor del spinbox
                      //add value of spinboxx to X0,error and iter
    error=ui->error->value();//
    int iter=ui->iteracion->value();
    double ea=100.0;//se inician las variables iniciales
    int iteracion=1;//initial variables are inicialized
        while((ea>error)&(iteracion<iter)){//se pone la condicional para terminar el metodo
                                           //the condition to made the method is created
                double Xi=X0-(funcion(X0)/derivada1(X0));//se calcula la nueva Xi
                                                         //calculate the new value of Xi
                ea=100*std::abs((Xi-X0)/Xi);//se calcula el nuevo valor de ea
                                            //calculate the new value of ea
                X0=Xi;//se intercambia el valor de X0 por Xi
                      //change X0 with the value of Xi
                iteracion=iteracion+1;//incrementa la iteracion en 1
                                      //iteracion is incremented
     }      //se crea la cadena donde se guardara el resultado
            //is saved the String resultado
            resultado.append("La raiz esta en ").append(valor1.setNum(X0)).append("\nError aproximado: ").append(valor2.setNum(ea)).append("\n# de Iteracion ").append(valor3.setNum(iteracion));
            ui->Resultado->setText(resultado);//se despliega el resultado en la pantalla dela interfaz
                                              //the result is displayed
}
void newton::Borrar(){//se crea la funcion Borrar
                      //function Borrar is defined
    //se regresan todos los valores de los spinbox a 0, se limpia el resultado y se deshabilita el boton Calcular
    //clean spinbox,label and disable the Calcular button
    ui->x->setValue(0.0);
    ui->error->setValue(0.0);
    ui->iteracion->setValue(0);
    ui->Resultado->clear();
    ui->calcular->setEnabled(false);
}
void newton::salir(){
    Borrar();
    close();
}
