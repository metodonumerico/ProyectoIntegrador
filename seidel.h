#ifndef SEIDEL_H
#define SEIDEL_H

#include <QMainWindow>

namespace Ui {
class seidel;
}
class seidel : public QMainWindow
{
    Q_OBJECT
public:
    explicit seidel(QWidget *parent = 0);
    ~seidel();

private slots://Declare the functions that will be used in the program
    void Metodo();//se declara la funcion Metodo
    void Habilitar();//se declara la funcion Habilitar
    void Limpiar();//se declara la funcion Limpiar
    void Salir();
private:
    Ui::seidel *ui;
};
#endif // SEIDEL_H
