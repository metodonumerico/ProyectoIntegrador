#ifndef RLINEAL_H
#define RLINEAL_H

#include <QMainWindow>

namespace Ui {
class rlineal;
}

class rlineal : public QMainWindow
{
    Q_OBJECT

public:
    explicit rlineal(QWidget *parent = 0);
    ~rlineal();
private slots://Declare the functions that will be used in the program
    void calcular();//se declara el metodo calcular
    void clear();//se declara el metodo borrar
    void salir();
private:
    Ui::rlineal *ui;
};

#endif // RLINEAL_H
