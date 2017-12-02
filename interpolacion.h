#ifndef INTERPOLACION_H
#define INTERPOLACION_H

#include <QMainWindow>

namespace Ui {
class interpolacion;
}

class interpolacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit interpolacion(QWidget *parent = 0);
    ~interpolacion();


private slots://Declare the functions that will be used in the program
    void Metodo();//declaracion de los metodos que se utilizaran
    void Borrar();
    void Habilitar();
    void salir();
private:
    Ui::interpolacion *ui;
};

#endif // INTERPOLACION_H
