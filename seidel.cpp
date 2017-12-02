#include "seidel.h"
#include "ui_seidel.h"
#include "math.h"
#include "cmath"//se incluye la libreria de matematica

seidel::seidel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seidel)
{
    ui->setupUi(this);//se conectan los Botones de la interza a los Slots correspondientes
                      //the connections of the interface with the main program are declared
    connect(ui->calcular,SIGNAL(clicked()),this,SLOT(Metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(Limpiar()));
    connect(ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(Habilitar()));//se connectan los spinbox de condicion de termino del Metodo
    connect(ui->doubleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(Habilitar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(Salir()));
}
seidel::~seidel()
{
    delete ui;
}
void seidel::Habilitar(){//se define lo que realizara la funcion Habilitar
    QString mensaje;//se crea la variable mensaje
    double operacion;//se declara la variable operacion
    double var1=ui->doubleSpinBox->value();//se obtienen los valores de los spin box de condicion
    int var2=ui->spinBox->value();//y se guardan en 2 variables
    operacion=var1*var2;//se multiplica el contenido de los spin box
    if(operacion!=0)//se revisa la condicion
        ui->calcular->setEnabled(true);//se habilita el boton Calcular
    else
        mensaje.append("falta un ingresar el numero maximo ").append("\n de iteraciones o el error permitido");
    ui->Resultado->setText(mensaje);//si no se cumple la condicion se despliega el mensaje en la interfaz
}
void seidel::Metodo(){//se define lo que ara el metodo
    QString resultado,valor1,valor2,valor3,valor4,valor5,error1,error2,error3,error4;
    double a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,A,B,C,D;//se crean las variables para obtener los valores de los spinbox
    double X1,X2,X3,X4,XRa,XRb,XRc,XRd,error,ea1,ea2,ea3,ea4;//se declaran variables tipo double y cadena para el metodo
    //the spin box values ​​are obtained
    a1=ui->a1->value();//se obtienen los valores de los spin box
    a2=ui->a2->value();
    a3=ui->a3->value();
    a4=ui->a4->value();
    b1=ui->b1->value();
    b2=ui->b2->value();
    b3=ui->b3->value();
    b4=ui->b4->value();
    c1=ui->c1->value();
    c2=ui->c2->value();
    c3=ui->c3->value();
    c4=ui->c4->value();
    d1=ui->d1->value();
    d2=ui->d2->value();
    d3=ui->d3->value();
    d4=ui->d4->value();
    A=ui->A->value();
    B=ui->B->value();
    C=ui->C->value();
    D=ui->D->value();
    int iteracion=0;//se inicializa la variable iteracion en 0
    int iter=ui->spinBox->value();//se obtienen valores de los spinbox de condicion
    error=ui->doubleSpinBox->value();
    X2=0,X3=0,X4=0;//se asignan valores iniciales a las X
    ea1=100.0,ea2=100.0,ea3=100.0,ea4=100.0;//se inicializa en 100 el error de cada X
    //place the condition that will follow the method to get to the result
    while(((ea1>error)|(ea2>error)|(ea3>error)|(ea4>error))&(iteracion<iter)){//se crea la condicion con la cual se desarrollara el metodo
        if(iteracion>=1){//se verifica una segunda condicion
            XRa=X1;//se asignan valores absolutos para el calculo del error
            XRb=X2;
            XRc=X3;
            XRd=X4;
        }
        X1=((A-(b1*X2)-(c1*X3)-(d1*X4))/a1);//se evalua las X con las ecuaciones
        X2=((B-(a2*X1)-(c2*X3)-(d2*X4))/b2);
        X3=((C-(a3*X1)-(b3*X2)-(d3*X4))/c3);
        X4=((D-(a4*X1)-(b4*X2)-(c4*X3))/d4);
        if(iteracion>=1){//se verifica una tercera condicion
        ea1=std::abs((X1-XRa)/X1);//se calcula el error nuevo de cada X
        XRa=X1;
        ea2=std::abs((X2-XRb)/X2);
        XRb=X2;
        ea3=std::abs((X3-XRc)/X3);
        XRc=X3;
        ea4=std::abs((X4-XRd)/X4);
        XRd=X4;
        }
        iteracion=iteracion+1;//iteracion aumenta 1
    }
    //se guarda el mensaje en la variable resultado
    //the text that appears as a result is conditioned
    resultado.append("El Valor de las X es el siguiente")
            .append("\n X1= ").append(valor1.setNum(X1)).append(" con un error de ").append(error1.setNum(ea1))
            .append("\n X2= ").append(valor2.setNum(X2)).append(" con un error de ").append(error2.setNum(ea2))
            .append("\n X3= ").append(valor3.setNum(X3)).append(" con un error de ").append(error3.setNum(ea3))
            .append("\n X4= ").append(valor4.setNum(X4)).append(" con un error de ").append(error4.setNum(ea4))
            .append("\nEn ").append(valor5.setNum(iteracion)).append(" Iteraciones");
    ui->Resultado->setText(resultado);//se despliega en pantalla
}
void seidel::Limpiar(){//se define la funcion Limpiar
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
    ui->doubleSpinBox->setValue(0.0);
    ui->spinBox->setValue(0);
    ui->Resultado->clear();//se limpia el texto del label Resultado
    ui->calcular->setEnabled(false);//se deshabilita el boton calcular
}
void seidel::Salir(){
    Limpiar();
    close();
}
