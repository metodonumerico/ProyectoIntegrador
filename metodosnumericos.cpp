
#include "metodosnumericos.h"
#include "ui_metodosnumericos.h"

metodosnumericos::metodosnumericos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::metodosnumericos)
{
    ui->setupUi(this);
    biseccion = new Bissec();//se declaran funciones nuevas de las clases principales
    eliminacionG = new eliminacion();
    Interpolacion = new interpolacion();
    Newton = new newton();
    Punto = new puntofijo();
    RegresionL = new rlineal();
    RegresionM = new rmultiple();
    Seidel = new seidel();
    Derivada = new derivacion();
    Integrar =new integracionN();
    euler= new Euler();
    runge = new kutta();
    //the connections of the interface with the main program are declared
    connect(ui->biseccion1,SIGNAL(clicked()),this,SLOT(Bisec()));//se conectan todos los botones de la interfaz con el programa principal
    connect(ui->puntofijo1,SIGNAL(clicked()),this,SLOT(puntof()));
    connect(ui->newton1,SIGNAL(clicked()),this,SLOT(newt()));
    connect(ui->lagrange1,SIGNAL(clicked()),this,SLOT(interpol()));
    connect(ui->gauss,SIGNAL(clicked()),this,SLOT(elimgaus()));
    connect(ui->seidel1,SIGNAL(clicked()),this,SLOT(gauseidel()));
    connect(ui->regresionlineal,SIGNAL(clicked()),this,SLOT(regresionli()));
    connect(ui->regresionmultiple,SIGNAL(clicked()),this,SLOT(regresionmul()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(Salir()));
    connect(ui->diferenciacion,SIGNAL(clicked()),this,SLOT(derivada()));
    connect(ui->integracion,SIGNAL(clicked()),this,SLOT(integral()));
    connect(ui->euler1,SIGNAL(clicked()),this,SLOT(metodoeuler()));
    connect(ui->kutta1,SIGNAL(clicked()),this,SLOT(Kutta()));
}
metodosnumericos::~metodosnumericos()
{
    delete ui;
}
void metodosnumericos::Bisec(){//se llama al metodo bisec
    biseccion->show();//se muestra el metodo bisesscion
}
void metodosnumericos::puntof(){//se hace lo mismo para todos los demas metodos
    Punto->show();
}
void metodosnumericos::newt(){
    Newton->show();
}
void metodosnumericos::interpol(){
    Interpolacion->show();
}
void metodosnumericos::elimgaus(){
    eliminacionG->show();
}
void metodosnumericos::gauseidel(){
    Seidel->show();
}
void metodosnumericos::regresionli(){
    RegresionL->show();
}
void metodosnumericos::regresionmul(){
    RegresionM->show();
}
void metodosnumericos::derivada(){
    Derivada->show();
}
void metodosnumericos::integral(){
    Integrar->show();
}
void metodosnumericos::metodoeuler(){
    euler->show();
}
void metodosnumericos::Kutta(){
    runge->show();
}
void metodosnumericos::Salir(){//se define la funcion salir
    delete biseccion;//se borran las funciones creadas y se cierra la ventana principal
    delete Punto;
    delete Newton;
    delete Interpolacion;
    delete eliminacionG;
    delete Seidel;
    delete RegresionL;
    delete RegresionM;
    delete Derivada;
    delete Integrar;
    delete euler;
    delete runge;
    close();
}
