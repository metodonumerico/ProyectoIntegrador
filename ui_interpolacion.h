/********************************************************************************
** Form generated from reading UI file 'interpolacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERPOLACION_H
#define UI_INTERPOLACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interpolacion
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *X1;
    QDoubleSpinBox *X0;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *X2;
    QDoubleSpinBox *X3;
    QLabel *label_4;
    QDoubleSpinBox *X4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *fx2;
    QDoubleSpinBox *fx0;
    QDoubleSpinBox *fx3;
    QDoubleSpinBox *fx1;
    QLabel *label_9;
    QDoubleSpinBox *fx4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *x;
    QLabel *label_13;
    QLabel *Resultado;
    QPushButton *calcular;
    QPushButton *borrar;
    QPushButton *SALIR;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *interpolacion)
    {
        if (interpolacion->objectName().isEmpty())
            interpolacion->setObjectName(QStringLiteral("interpolacion"));
        interpolacion->resize(638, 399);
        interpolacion->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(interpolacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        X1 = new QDoubleSpinBox(centralWidget);
        X1->setObjectName(QStringLiteral("X1"));
        X1->setGeometry(QRect(50, 80, 51, 20));
        X1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        X0 = new QDoubleSpinBox(centralWidget);
        X0->setObjectName(QStringLiteral("X0"));
        X0->setGeometry(QRect(50, 50, 51, 20));
        X0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 21, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 21, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 21, 16));
        X2 = new QDoubleSpinBox(centralWidget);
        X2->setObjectName(QStringLiteral("X2"));
        X2->setGeometry(QRect(50, 110, 51, 20));
        X2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        X3 = new QDoubleSpinBox(centralWidget);
        X3->setObjectName(QStringLiteral("X3"));
        X3->setGeometry(QRect(50, 140, 51, 20));
        X3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 21, 16));
        X4 = new QDoubleSpinBox(centralWidget);
        X4->setObjectName(QStringLiteral("X4"));
        X4->setGeometry(QRect(50, 170, 51, 21));
        X4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 170, 21, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 110, 31, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 50, 31, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 170, 31, 20));
        fx2 = new QDoubleSpinBox(centralWidget);
        fx2->setObjectName(QStringLiteral("fx2"));
        fx2->setGeometry(QRect(150, 110, 71, 20));
        fx2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fx2->setDecimals(6);
        fx0 = new QDoubleSpinBox(centralWidget);
        fx0->setObjectName(QStringLiteral("fx0"));
        fx0->setGeometry(QRect(150, 50, 71, 20));
        fx0->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fx0->setDecimals(6);
        fx3 = new QDoubleSpinBox(centralWidget);
        fx3->setObjectName(QStringLiteral("fx3"));
        fx3->setGeometry(QRect(150, 140, 71, 20));
        fx3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fx3->setDecimals(6);
        fx1 = new QDoubleSpinBox(centralWidget);
        fx1->setObjectName(QStringLiteral("fx1"));
        fx1->setGeometry(QRect(150, 80, 71, 20));
        fx1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fx1->setDecimals(6);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 140, 31, 20));
        fx4 = new QDoubleSpinBox(centralWidget);
        fx4->setObjectName(QStringLiteral("fx4"));
        fx4->setGeometry(QRect(150, 170, 71, 21));
        fx4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fx4->setDecimals(6);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 80, 31, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 10, 311, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_11->setFont(font);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 200, 21, 16));
        x = new QDoubleSpinBox(centralWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(51, 200, 51, 22));
        x->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(380, 110, 71, 21));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(250, 160, 361, 181));
        Resultado->setStyleSheet(QStringLiteral(""));
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setEnabled(false);
        calcular->setGeometry(QRect(250, 50, 101, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        calcular->setFont(font1);
        calcular->setStyleSheet(QStringLiteral(""));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(380, 50, 101, 41));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(510, 50, 101, 41));
        interpolacion->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(interpolacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        interpolacion->setStatusBar(statusBar);
        mainToolBar = new QToolBar(interpolacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        interpolacion->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(interpolacion);

        QMetaObject::connectSlotsByName(interpolacion);
    } // setupUi

    void retranslateUi(QMainWindow *interpolacion)
    {
        interpolacion->setWindowTitle(QApplication::translate("interpolacion", "interpolacion", Q_NULLPTR));
        label->setText(QApplication::translate("interpolacion", "X0=", Q_NULLPTR));
        label_2->setText(QApplication::translate("interpolacion", "X1=", Q_NULLPTR));
        label_3->setText(QApplication::translate("interpolacion", "X2=", Q_NULLPTR));
        label_4->setText(QApplication::translate("interpolacion", "X3=", Q_NULLPTR));
        label_5->setText(QApplication::translate("interpolacion", "X4=", Q_NULLPTR));
        label_6->setText(QApplication::translate("interpolacion", "F(X2)=", Q_NULLPTR));
        label_7->setText(QApplication::translate("interpolacion", "F(X0)=", Q_NULLPTR));
        label_8->setText(QApplication::translate("interpolacion", "F(X4)=", Q_NULLPTR));
        label_9->setText(QApplication::translate("interpolacion", "F(X3)=", Q_NULLPTR));
        label_10->setText(QApplication::translate("interpolacion", "F(X1)=", Q_NULLPTR));
        label_11->setText(QApplication::translate("interpolacion", "Metodo Interpolacion de Lagrange", Q_NULLPTR));
        label_12->setText(QApplication::translate("interpolacion", "X=", Q_NULLPTR));
        label_13->setText(QApplication::translate("interpolacion", "Resultado", Q_NULLPTR));
        Resultado->setText(QString());
        calcular->setText(QApplication::translate("interpolacion", "&Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("interpolacion", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("interpolacion", "&Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class interpolacion: public Ui_interpolacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLACION_H
