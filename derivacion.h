#ifndef DERIVACION_H
#define DERIVACION_H

#include <QMainWindow>

namespace Ui {
class derivacion;
}

class derivacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit derivacion(QWidget *parent = 0);
    ~derivacion();
private slots://Declare the functions that will be used in the program
    void calcular();
    void borrar();
    void salir();
private:
    Ui::derivacion *ui;
};

#endif // DERIVACION_H
