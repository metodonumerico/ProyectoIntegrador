#ifndef ELIMINACION_H
#define ELIMINACION_H

#include <QMainWindow>
#include <QGenericMatrix>

namespace Ui {
class eliminacion;
}
class eliminacion : public QMainWindow
{
    Q_OBJECT
public:
    explicit eliminacion(QWidget *parent = 0);
    ~eliminacion();

private slots://Declare the functions that will be used in the program
    void Metodo();//se declara la funcion metodo
    void borrar();//se declara la funcion borrar
    void salir();
private:
    Ui::eliminacion *ui;
};
#endif // ELIMINACION_H
