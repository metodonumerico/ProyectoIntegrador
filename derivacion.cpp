//programa de diferenciacion numerica realizado con Qt Creator version 1.0
#include "derivacion.h"
#include "ui_derivacion.h"
#include "math.h"//se agrega la libreria math.h
#include "cmath"

derivacion::derivacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::derivacion)
{
    ui->setupUi(this);
                    //Se hacen las conexiones de los botones de la interfaz con el programa
                    //the connections of the interface with the main program are declared
    connect(ui->Calcular,SIGNAL(clicked()),this,SLOT(calcular()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->SALIR,SIGNAL(clicked()),this,SLOT(salir()));
}
derivacion::~derivacion()
{
    delete ui;
}
void derivacion::calcular(){//se define la funcion calcular
    //se declaran variables de tipo cadena
    QString resultado,valor,valor1,valor2,valor3,valor4,valor5,valor6,valor7,valor8,valor9,valor10,valor11,valor12,valor13,valor14,valor15;
    QString resultado1,value,value1,value2,value3,value4,value5,value6,value7,value8,value9,value10,value11,value12,value13,value14,value15;
    QString resultado2,var,var1,var2,var3,var4,var5,var6,var7,var8,var9,var10,var11,var12,var13,var14,var15;
    //se declaran las variables que se usaran en el programa con los valores que el usuario ingresara de tipo doble
    double FXi,FXi1,FXi2,FXi3,FXi4,FXi5,FXi_1,FXi_2,FXi_3,FXi_4,FXi_5,H;
    H=ui->h->value();//se guardan los valores en la variables creada anteriormente
    //the spin box values ​​are obtained
    FXi=ui->fxi->value();
    FXi1=ui->fxi1->value();
    FXi2=ui->fxi2->value();
    FXi3=ui->fxi3->value();
    FXi4=ui->fxi4->value();
    FXi5=ui->fxi5->value();
    FXi_1=ui->fxi_1->value();
    FXi_2=ui->fxi_2->value();
    FXi_3=ui->fxi_3->value();
    FXi_4=ui->fxi_4->value();
    FXi_5=ui->fxi_5->value();
    double primerderivada=-0.9125;//se definen los valores de las derivadas
    double segundaderivada=-1.75;
    double tercerderivada=-2.1;
    double cuartaderivada=-2.4;
    //place the condition that will follow the method to get to the result
                                    //HACIA ADELANTE
    double derivada1,derivada11,derivada2,derivada22,derivada3,derivada33,derivada4,derivada44;
    //Primer Derivada
    derivada1=(FXi1-FXi)/H;
    derivada11=((-1*FXi2)+(4*FXi1)-(3*FXi))/(2*H);
    double error1=100*std::abs((derivada1-primerderivada)/derivada1);
    double error11=100*std::abs((derivada11-primerderivada)/derivada11);
    //Segunda Derivada
    derivada2=(FXi2-(2*FXi1)+FXi)/pow(H,2);
    derivada22=((-1*FXi3)+(4*FXi2)-(5*FXi1)+(2*FXi))/pow(H,2);
    double error2=100*std::abs((derivada2-segundaderivada)/derivada2);
    double error22=100*std::abs((derivada22-segundaderivada)/derivada22);
    //Tercer Derivada
    derivada3=(FXi3-(3*FXi2)+(3*FXi1)-FXi)/pow(H,3);
    derivada33=((-3*FXi4)+(14*FXi3)-(24*FXi2)+(18*FXi1)-(5*FXi))/(2*pow(H,3));
    double error3=100*std::abs((derivada3-tercerderivada)/derivada3);
    double error33=100*std::abs((derivada33-tercerderivada)/derivada33);
    //Cuarta Derivada
    derivada4=(FXi4-(4*FXi3)+(6*FXi2)-(4*FXi1)+FXi)/pow(H,4);
    derivada44=((-2*FXi5)+(11*FXi4)-(24*FXi3)+(26*FXi2)-(14*FXi1)+(3*FXi))/pow(H,4);
    double error4=100*std::abs((derivada4-cuartaderivada)/derivada4);
    double error44=100*std::abs((derivada44-cuartaderivada)/derivada44);
                                    //HACIA ATRAS
    double deriva1,deriva11,deriva2,deriva22,deriva3,deriva33,deriva4,deriva44;
    //Primer Derivada
    deriva1=(FXi-FXi_1)/H;
    deriva11=((3*FXi)-(4*FXi_1)+(1*FXi_2))/(2*H);
    double ea1=100*std::abs((deriva1-primerderivada)/deriva1);
    double ea11=100*std::abs((deriva11-primerderivada)/deriva11);
    //Segunda Derivada
    deriva2=(FXi-(2*FXi_1)+FXi_2)/pow(H,2);
    deriva22=((2*FXi)-(5*FXi_1)+(4*FXi_2)-FXi_3)/pow(H,2);
    double ea2=100*std::abs((deriva2-segundaderivada)/deriva2);
    double ea22=100*std::abs((deriva22-segundaderivada)/deriva22);
    //Tercer Derivada
    deriva3=(FXi-(3*FXi_1)+(3*FXi_2)-FXi_3)/pow(H,3);
    deriva33=((5*FXi)-(18*FXi_1)+(24*FXi_2)-(14*FXi_3)+(3*FXi_4))/(2*pow(H,3));
    double ea3=100*std::abs((deriva3-tercerderivada)/deriva3);
    double ea33=100*std::abs((deriva33-tercerderivada)/deriva33);
    //Cuarta Derivada
    deriva4=(FXi-(4*FXi_1)+(6*FXi_2)-(4*FXi_3)+FXi_4)/pow(H,4);
    deriva44=((3*FXi)-(14*FXi_1)+(26*FXi_2)-(24*FXi_3)+(11*FXi_4)-(2*FXi_5))/pow(H,4);
    double ea4=100*std::abs((deriva4-cuartaderivada)/deriva4);
    double ea44=100*std::abs((deriva44-cuartaderivada)/deriva44);
                                    //CENTRADA
    double der1,der11,der2,der22,der3,der33,der4,der44;
    //Primer Derivada
    der1=(FXi1-FXi_1)/(2*H);
    der11=((-1*FXi2)+(8*FXi1)-(8*FXi_1)+(FXi_2))/(12*H);
    double EA1=100*std::abs((der1-primerderivada)/der1);
    double EA11=100*std::abs((der11-primerderivada)/der11);
    //Segunda Derivada
    der2=(FXi1-(2*FXi)+FXi_1)/pow(H,2);
    der22=((-1*FXi2)+(16*FXi1)-(30*FXi)+(16*FXi_1)-FXi_2)/(12*pow(H,2));
    double EA2=100*std::abs((der2-segundaderivada)/der2);
    double EA22=100*std::abs((der22-segundaderivada)/der22);
    //Tercer Derivada
    der3=(FXi2-(2*FXi1)+(2*FXi_1)-FXi_2)/(2*pow(H,3));
    der33=((-1*FXi3)+(8*FXi2)-(13*FXi1)+(13*FXi_1)-(8*FXi_2)+FXi_3)/(8*pow(H,3));
    double EA3=100*std::abs((der3-tercerderivada)/der3);
    double EA33=100*std::abs((der33-tercerderivada)/der33);
    //Cuarta Derivada
    der4=(FXi2-(4*FXi1)+(6*FXi)-(4*FXi_1)+FXi_2)/pow(H,4);
    der44=((-1*FXi3)+(12*FXi2)+(39*FXi1)+(56*FXi)-(39*FXi_1)+(12*FXi_2)+FXi_3)/(6*pow(H,4));
    double EA4=100*std::abs((der4-cuartaderivada)/der4);
    double EA44=100*std::abs((der44-cuartaderivada)/der44);
                                                //RESULTADOS
    //the text that appears as a result is conditioned
    resultado.append("\t\tHACIA ADELANTE ").append("\nPrimer Derivada Oh: ").append(valor.setNum(derivada1)).append(" con un error de ").append(valor1.setNum(error1)).append("%").
            append("\nPrimer Derivada O(h^2): ").append(valor2.setNum(derivada11)).append(" con un error de ").append(valor3.setNum(error11)).append("%").
            append("\nSegunda Derivada Oh: ").append(valor4.setNum(derivada2)).append(" con un error de ").append(valor5.setNum(error2)).append("%").
            append("\nSegunda Derivada O(h^2): ").append(valor6.setNum(derivada22)).append(" con un error de ").append(valor7.setNum(error22)).append("%").
            append("\nTercer Derivada Oh: ").append(valor8.setNum(derivada3)).append(" con un error de ").append(valor9.setNum(error3)).append("%").
            append("\nTercer Derivada O(h^2): ").append(valor10.setNum(derivada33)).append(" con un error de ").append(valor11.setNum(error33)).append("%").
            append("\nCuarta Derivada Oh: ").append(valor12.setNum(derivada4)).append(" con un error de ").append(valor13.setNum(error4)).append("%").
            append("\nCuarta Derivada O(h^2): ").append(valor14.setNum(derivada44)).append(" con un error de ").append(valor15.setNum(error44)).append("%");
    resultado1.append("\t\tHACIA ATRAS ").append("\nPrimer Derivada Oh: ").append(value.setNum(deriva1)).append(" con un error de ").append(value1.setNum(ea1)).append("%").
            append("\nPrimer Derivada O(h^2): ").append(value2.setNum(deriva11)).append(" con un error de ").append(value3.setNum(ea11)).append("%").
            append("\nSegunda Derivada Oh: ").append(value4.setNum(deriva2)).append(" con un error de ").append(value5.setNum(ea2)).append("%").
            append("\nSegunda Derivada O(h^2): ").append(value6.setNum(deriva22)).append(" con un error de ").append(value7.setNum(ea22)).append("%").
            append("\nTercer Derivada Oh: ").append(value8.setNum(deriva3)).append(" con un error de ").append(value9.setNum(ea3)).append("%").
            append("\nTercer Derivada O(h^2): ").append(value10.setNum(deriva33)).append(" con un error de ").append(value11.setNum(ea33)).append("%").
            append("\nCuarta Derivada Oh: ").append(value12.setNum(deriva4)).append(" con un error de ").append(value13.setNum(ea4)).append("%").
            append("\nCuarta Derivada O(h^2): ").append(value14.setNum(deriva44)).append(" con un error de ").append(value15.setNum(ea44)).append("%");
    resultado2.append("\t\tCENTRADO ").append("\nPrimer Derivada Oh: ").append(var.setNum(der1)).append(" con un error de ").append(var1.setNum(EA1)).append("%").
            append("\nPrimer Derivada O(h^2): ").append(var2.setNum(der11)).append(" con un error de ").append(var3.setNum(EA11)).append("%").
            append("\nSegunda Derivada Oh: ").append(var4.setNum(der2)).append(" con un error de ").append(var5.setNum(EA2)).append("%").
            append("\nSegunda Derivada O(h^2): ").append(var6.setNum(der22)).append(" con un error de ").append(var7.setNum(EA22)).append("%").
            append("\nTercer Derivada Oh: ").append(var8.setNum(der3)).append(" con un error de ").append(var9.setNum(EA3)).append("%").
            append("\nTercer Derivada O(h^2): ").append(var10.setNum(der33)).append(" con un error de ").append(var11.setNum(EA33)).append("%").
            append("\nCuarta Derivada Oh: ").append(var12.setNum(der4)).append(" con un error de ").append(var13.setNum(EA4)).append("%").
            append("\nCuarta Derivada O(h^2): ").append(var14.setNum(der44)).append(" con un error de ").append(var15.setNum(EA44)).append("%");
    //se manda el mensaje del resultado a la interfaz
    ui->Resultado->setText(resultado);
    ui->Resultado1->setText(resultado1);
    ui->Resultado2->setText(resultado2);
}
void derivacion::borrar(){//se define la funcion borrar
    ui->fxi->setValue(0.0);//se rergesan todos los spinbox a 0.0
    ui->fxi1->setValue(0.0);
    ui->fxi2->setValue(0.0);
    ui->fxi3->setValue(0.0);
    ui->fxi4->setValue(0.0);
    ui->fxi5->setValue(0.0);
    ui->fxi_1->setValue(0.0);
    ui->fxi_2->setValue(0.0);
    ui->fxi_3->setValue(0.0);
    ui->fxi_4->setValue(0.0);
    ui->fxi_5->setValue(0.0);
    ui->x1->setValue(0.0);
    ui->x2->setValue(0.0);
    ui->x3->setValue(0.0);
    ui->x4->setValue(0.0);
    ui->x5->setValue(0.0);
    ui->x6->setValue(0.0);
    ui->x7->setValue(0.0);
    ui->x8->setValue(0.0);
    ui->x9->setValue(0.0);
    ui->x10->setValue(0.0);
    ui->x11->setValue(0.0);
    ui->h->setValue(0.0);
    ui->Resultado->clear();//se limpian los 3 label
    ui->Resultado1->clear();
    ui->Resultado2->clear();
}
void derivacion::salir(){
    borrar();
    close();
}
