#include "metodosnumericos.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    metodosnumericos w;
    w.show();

    return a.exec();
}
