#ifndef RMULTIPLE_H
#define RMULTIPLE_H

#include <QMainWindow>

namespace Ui {
class rmultiple;
}

class rmultiple : public QMainWindow
{
    Q_OBJECT

public:
    explicit rmultiple(QWidget *parent = 0);
    ~rmultiple();
private slots://Declare the functions that will be used in the program
    void calcular();
    void borrar();
    void salir();
private:
    Ui::rmultiple *ui;
};

#endif // RMULTIPLE_H
