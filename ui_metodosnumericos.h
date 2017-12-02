/********************************************************************************
** Form generated from reading UI file 'metodosnumericos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METODOSNUMERICOS_H
#define UI_METODOSNUMERICOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_metodosnumericos
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *diferenciacion;
    QPushButton *gauss;
    QPushButton *euler1;
    QPushButton *regresionmultiple;
    QPushButton *biseccion1;
    QPushButton *lagrange1;
    QPushButton *regresionlineal;
    QPushButton *puntofijo1;
    QPushButton *seidel1;
    QPushButton *integracion;
    QPushButton *newton1;
    QPushButton *kutta1;
    QPushButton *salir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *metodosnumericos)
    {
        if (metodosnumericos->objectName().isEmpty())
            metodosnumericos->setObjectName(QStringLiteral("metodosnumericos"));
        metodosnumericos->resize(610, 364);
        centralWidget = new QWidget(metodosnumericos);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 201, 31));
        label->setStyleSheet(QStringLiteral(""));
        diferenciacion = new QPushButton(centralWidget);
        diferenciacion->setObjectName(QStringLiteral("diferenciacion"));
        diferenciacion->setGeometry(QRect(320, 120, 101, 51));
        gauss = new QPushButton(centralWidget);
        gauss->setObjectName(QStringLiteral("gauss"));
        gauss->setGeometry(QRect(450, 50, 101, 51));
        euler1 = new QPushButton(centralWidget);
        euler1->setObjectName(QStringLiteral("euler1"));
        euler1->setGeometry(QRect(320, 200, 101, 51));
        regresionmultiple = new QPushButton(centralWidget);
        regresionmultiple->setObjectName(QStringLiteral("regresionmultiple"));
        regresionmultiple->setGeometry(QRect(60, 200, 101, 51));
        biseccion1 = new QPushButton(centralWidget);
        biseccion1->setObjectName(QStringLiteral("biseccion1"));
        biseccion1->setGeometry(QRect(60, 50, 101, 51));
        lagrange1 = new QPushButton(centralWidget);
        lagrange1->setObjectName(QStringLiteral("lagrange1"));
        lagrange1->setGeometry(QRect(190, 120, 101, 51));
        lagrange1->setCheckable(false);
        regresionlineal = new QPushButton(centralWidget);
        regresionlineal->setObjectName(QStringLiteral("regresionlineal"));
        regresionlineal->setGeometry(QRect(450, 120, 101, 51));
        puntofijo1 = new QPushButton(centralWidget);
        puntofijo1->setObjectName(QStringLiteral("puntofijo1"));
        puntofijo1->setGeometry(QRect(190, 50, 101, 51));
        seidel1 = new QPushButton(centralWidget);
        seidel1->setObjectName(QStringLiteral("seidel1"));
        seidel1->setGeometry(QRect(60, 120, 101, 51));
        integracion = new QPushButton(centralWidget);
        integracion->setObjectName(QStringLiteral("integracion"));
        integracion->setGeometry(QRect(190, 200, 101, 51));
        newton1 = new QPushButton(centralWidget);
        newton1->setObjectName(QStringLiteral("newton1"));
        newton1->setGeometry(QRect(320, 50, 101, 51));
        kutta1 = new QPushButton(centralWidget);
        kutta1->setObjectName(QStringLiteral("kutta1"));
        kutta1->setGeometry(QRect(450, 200, 101, 51));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(260, 270, 101, 51));
        metodosnumericos->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(metodosnumericos);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        metodosnumericos->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(metodosnumericos);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        metodosnumericos->setStatusBar(statusBar);

        retranslateUi(metodosnumericos);

        QMetaObject::connectSlotsByName(metodosnumericos);
    } // setupUi

    void retranslateUi(QMainWindow *metodosnumericos)
    {
        metodosnumericos->setWindowTitle(QApplication::translate("metodosnumericos", "metodosnumericos", Q_NULLPTR));
        label->setText(QApplication::translate("metodosnumericos", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Metodos Numericos</span></p></body></html>", Q_NULLPTR));
        diferenciacion->setText(QApplication::translate("metodosnumericos", "&Diferenciacion\n"
"Numerica", Q_NULLPTR));
        gauss->setText(QApplication::translate("metodosnumericos", "&Eliminacion\n"
" Gaussiana", Q_NULLPTR));
        euler1->setText(QApplication::translate("metodosnumericos", "Metodo de Euler", Q_NULLPTR));
        regresionmultiple->setText(QApplication::translate("metodosnumericos", "&Regresion\n"
"Multiple", Q_NULLPTR));
        biseccion1->setText(QApplication::translate("metodosnumericos", "&Biseccion", Q_NULLPTR));
        lagrange1->setText(QApplication::translate("metodosnumericos", "Interpolacion\n"
"de lagrange", Q_NULLPTR));
        regresionlineal->setText(QApplication::translate("metodosnumericos", "&Regresion\n"
"Lineal", Q_NULLPTR));
        puntofijo1->setText(QApplication::translate("metodosnumericos", "&Punto Fijo", Q_NULLPTR));
        seidel1->setText(QApplication::translate("metodosnumericos", "Gauss-Seidel", Q_NULLPTR));
        integracion->setText(QApplication::translate("metodosnumericos", "&Integracion\n"
"Numerica", Q_NULLPTR));
        newton1->setText(QApplication::translate("metodosnumericos", "&Newton\n"
"Raphson", Q_NULLPTR));
        kutta1->setText(QApplication::translate("metodosnumericos", "&Runge-Kutta", Q_NULLPTR));
        salir->setText(QApplication::translate("metodosnumericos", "&Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class metodosnumericos: public Ui_metodosnumericos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METODOSNUMERICOS_H
