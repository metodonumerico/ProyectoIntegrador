/********************************************************************************
** Form generated from reading UI file 'derivacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DERIVACION_H
#define UI_DERIVACION_H

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

class Ui_derivacion
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *x4;
    QDoubleSpinBox *x6;
    QDoubleSpinBox *fxi_1;
    QDoubleSpinBox *fxi1;
    QDoubleSpinBox *fxi_2;
    QDoubleSpinBox *x7;
    QDoubleSpinBox *x5;
    QDoubleSpinBox *x8;
    QDoubleSpinBox *fxi2;
    QDoubleSpinBox *fxi;
    QDoubleSpinBox *h;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *Calcular;
    QPushButton *Borrar;
    QPushButton *SALIR;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *Resultado;
    QDoubleSpinBox *x2;
    QDoubleSpinBox *fxi_5;
    QLabel *label_14;
    QDoubleSpinBox *fxi_3;
    QDoubleSpinBox *x3;
    QDoubleSpinBox *fxi_4;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QDoubleSpinBox *x1;
    QLabel *label_19;
    QLabel *label_20;
    QDoubleSpinBox *x10;
    QDoubleSpinBox *fxi4;
    QDoubleSpinBox *fxi5;
    QLabel *label_21;
    QLabel *label_22;
    QDoubleSpinBox *fxi3;
    QDoubleSpinBox *x9;
    QLabel *label_23;
    QDoubleSpinBox *x11;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *Resultado1;
    QLabel *Resultado2;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *derivacion)
    {
        if (derivacion->objectName().isEmpty())
            derivacion->setObjectName(QStringLiteral("derivacion"));
        derivacion->resize(649, 534);
        derivacion->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(derivacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        x4 = new QDoubleSpinBox(centralWidget);
        x4->setObjectName(QStringLiteral("x4"));
        x4->setGeometry(QRect(77, 124, 71, 20));
        x4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x4->setDecimals(6);
        x4->setMinimum(-99.99);
        x4->setSingleStep(0.01);
        x6 = new QDoubleSpinBox(centralWidget);
        x6->setObjectName(QStringLiteral("x6"));
        x6->setGeometry(QRect(77, 176, 71, 20));
        x6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x6->setDecimals(6);
        x6->setMinimum(-99.99);
        x6->setSingleStep(0.01);
        fxi_1 = new QDoubleSpinBox(centralWidget);
        fxi_1->setObjectName(QStringLiteral("fxi_1"));
        fxi_1->setGeometry(QRect(206, 145, 71, 20));
        fxi_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi_1->setDecimals(6);
        fxi_1->setMinimum(-99.99);
        fxi_1->setSingleStep(0.01);
        fxi1 = new QDoubleSpinBox(centralWidget);
        fxi1->setObjectName(QStringLiteral("fxi1"));
        fxi1->setGeometry(QRect(206, 197, 71, 20));
        fxi1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi1->setDecimals(6);
        fxi1->setMinimum(-99.99);
        fxi1->setSingleStep(0.01);
        fxi_2 = new QDoubleSpinBox(centralWidget);
        fxi_2->setObjectName(QStringLiteral("fxi_2"));
        fxi_2->setGeometry(QRect(206, 119, 71, 20));
        fxi_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi_2->setDecimals(6);
        fxi_2->setMinimum(-99.99);
        fxi_2->setSingleStep(0.01);
        x7 = new QDoubleSpinBox(centralWidget);
        x7->setObjectName(QStringLiteral("x7"));
        x7->setGeometry(QRect(77, 202, 71, 20));
        x7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x7->setDecimals(6);
        x7->setMinimum(-99.99);
        x7->setSingleStep(0.01);
        x5 = new QDoubleSpinBox(centralWidget);
        x5->setObjectName(QStringLiteral("x5"));
        x5->setGeometry(QRect(77, 150, 71, 20));
        x5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x5->setDecimals(6);
        x5->setMinimum(-99.99);
        x5->setSingleStep(0.01);
        x8 = new QDoubleSpinBox(centralWidget);
        x8->setObjectName(QStringLiteral("x8"));
        x8->setGeometry(QRect(77, 228, 71, 20));
        x8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x8->setDecimals(6);
        x8->setMinimum(-99.99);
        x8->setSingleStep(0.01);
        fxi2 = new QDoubleSpinBox(centralWidget);
        fxi2->setObjectName(QStringLiteral("fxi2"));
        fxi2->setGeometry(QRect(206, 223, 71, 20));
        fxi2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi2->setDecimals(6);
        fxi2->setMinimum(-99.99);
        fxi2->setSingleStep(0.01);
        fxi = new QDoubleSpinBox(centralWidget);
        fxi->setObjectName(QStringLiteral("fxi"));
        fxi->setGeometry(QRect(206, 171, 71, 20));
        fxi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi->setDecimals(6);
        fxi->setMinimum(-99.99);
        fxi->setSingleStep(0.01);
        h = new QDoubleSpinBox(centralWidget);
        h->setObjectName(QStringLiteral("h"));
        h->setGeometry(QRect(144, 340, 71, 22));
        h->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        h->setDecimals(4);
        h->setMinimum(-99.99);
        h->setSingleStep(0.01);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(43, 123, 31, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 150, 31, 21));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 176, 21, 21));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 202, 31, 21));
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 228, 31, 21));
        label_5->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 118, 41, 21));
        label_6->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(160, 148, 41, 21));
        label_7->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 168, 31, 21));
        label_8->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 198, 51, 21));
        label_9->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(153, 223, 47, 21));
        label_10->setStyleSheet(QStringLiteral(""));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 340, 21, 21));
        label_11->setStyleSheet(QStringLiteral(""));
        Calcular = new QPushButton(centralWidget);
        Calcular->setObjectName(QStringLiteral("Calcular"));
        Calcular->setGeometry(QRect(300, 30, 91, 41));
        Borrar = new QPushButton(centralWidget);
        Borrar->setObjectName(QStringLiteral("Borrar"));
        Borrar->setGeometry(QRect(420, 30, 91, 41));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(550, 30, 91, 41));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 0, 291, 31));
        label_12->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(420, 90, 121, 21));
        label_13->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(290, 120, 321, 161));
        Resultado->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        x2 = new QDoubleSpinBox(centralWidget);
        x2->setObjectName(QStringLiteral("x2"));
        x2->setGeometry(QRect(77, 70, 71, 20));
        x2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x2->setDecimals(6);
        x2->setMinimum(-99.99);
        x2->setSingleStep(0.01);
        fxi_5 = new QDoubleSpinBox(centralWidget);
        fxi_5->setObjectName(QStringLiteral("fxi_5"));
        fxi_5->setGeometry(QRect(206, 40, 71, 20));
        fxi_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi_5->setDecimals(6);
        fxi_5->setMinimum(-99.99);
        fxi_5->setSingleStep(0.01);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(160, 88, 41, 21));
        label_14->setStyleSheet(QStringLiteral(""));
        fxi_3 = new QDoubleSpinBox(centralWidget);
        fxi_3->setObjectName(QStringLiteral("fxi_3"));
        fxi_3->setGeometry(QRect(206, 91, 71, 20));
        fxi_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi_3->setDecimals(6);
        fxi_3->setMinimum(-99.99);
        fxi_3->setSingleStep(0.01);
        x3 = new QDoubleSpinBox(centralWidget);
        x3->setObjectName(QStringLiteral("x3"));
        x3->setGeometry(QRect(77, 96, 71, 20));
        x3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x3->setDecimals(6);
        x3->setMinimum(-99.99);
        x3->setSingleStep(0.01);
        fxi_4 = new QDoubleSpinBox(centralWidget);
        fxi_4->setObjectName(QStringLiteral("fxi_4"));
        fxi_4->setGeometry(QRect(206, 65, 71, 20));
        fxi_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi_4->setDecimals(6);
        fxi_4->setMinimum(-99.99);
        fxi_4->setSingleStep(0.01);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 96, 31, 21));
        label_15->setStyleSheet(QStringLiteral(""));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(160, 68, 41, 21));
        label_16->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(43, 43, 31, 21));
        label_17->setStyleSheet(QStringLiteral(""));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(160, 38, 41, 21));
        label_18->setStyleSheet(QStringLiteral(""));
        x1 = new QDoubleSpinBox(centralWidget);
        x1->setObjectName(QStringLiteral("x1"));
        x1->setGeometry(QRect(77, 44, 71, 20));
        x1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x1->setDecimals(6);
        x1->setMinimum(-99.99);
        x1->setSingleStep(0.01);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 70, 31, 21));
        label_19->setStyleSheet(QStringLiteral(""));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(40, 284, 31, 21));
        label_20->setStyleSheet(QStringLiteral(""));
        x10 = new QDoubleSpinBox(centralWidget);
        x10->setObjectName(QStringLiteral("x10"));
        x10->setGeometry(QRect(77, 284, 71, 20));
        x10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x10->setDecimals(6);
        x10->setMinimum(-99.99);
        x10->setSingleStep(0.01);
        fxi4 = new QDoubleSpinBox(centralWidget);
        fxi4->setObjectName(QStringLiteral("fxi4"));
        fxi4->setGeometry(QRect(206, 279, 71, 20));
        fxi4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi4->setDecimals(6);
        fxi4->setMinimum(-99.99);
        fxi4->setSingleStep(0.01);
        fxi5 = new QDoubleSpinBox(centralWidget);
        fxi5->setObjectName(QStringLiteral("fxi5"));
        fxi5->setGeometry(QRect(206, 305, 71, 20));
        fxi5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi5->setDecimals(6);
        fxi5->setMinimum(-99.99);
        fxi5->setSingleStep(0.01);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(153, 305, 47, 21));
        label_21->setStyleSheet(QStringLiteral(""));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(150, 250, 51, 21));
        label_22->setStyleSheet(QStringLiteral(""));
        fxi3 = new QDoubleSpinBox(centralWidget);
        fxi3->setObjectName(QStringLiteral("fxi3"));
        fxi3->setGeometry(QRect(206, 253, 71, 20));
        fxi3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fxi3->setDecimals(6);
        fxi3->setMinimum(-99.99);
        fxi3->setSingleStep(0.01);
        x9 = new QDoubleSpinBox(centralWidget);
        x9->setObjectName(QStringLiteral("x9"));
        x9->setGeometry(QRect(77, 258, 71, 20));
        x9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x9->setDecimals(6);
        x9->setMinimum(-99.99);
        x9->setSingleStep(0.01);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(40, 258, 31, 21));
        label_23->setStyleSheet(QStringLiteral(""));
        x11 = new QDoubleSpinBox(centralWidget);
        x11->setObjectName(QStringLiteral("x11"));
        x11->setGeometry(QRect(77, 310, 71, 20));
        x11->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x11->setDecimals(6);
        x11->setMinimum(-99.99);
        x11->setSingleStep(0.01);
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(150, 280, 51, 21));
        label_24->setStyleSheet(QStringLiteral(""));
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(40, 310, 31, 21));
        label_25->setStyleSheet(QStringLiteral(""));
        Resultado1 = new QLabel(centralWidget);
        Resultado1->setObjectName(QStringLiteral("Resultado1"));
        Resultado1->setGeometry(QRect(290, 250, 321, 121));
        Resultado1->setStyleSheet(QStringLiteral(""));
        Resultado2 = new QLabel(centralWidget);
        Resultado2->setObjectName(QStringLiteral("Resultado2"));
        Resultado2->setGeometry(QRect(290, 380, 321, 121));
        Resultado2->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        derivacion->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(derivacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        derivacion->setStatusBar(statusBar);
        toolBar = new QToolBar(derivacion);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        derivacion->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(derivacion);

        QMetaObject::connectSlotsByName(derivacion);
    } // setupUi

    void retranslateUi(QMainWindow *derivacion)
    {
        derivacion->setWindowTitle(QApplication::translate("derivacion", "derivacion", Q_NULLPTR));
        label->setText(QApplication::translate("derivacion", "Xi-2 =", Q_NULLPTR));
        label_2->setText(QApplication::translate("derivacion", "Xi-1 =", Q_NULLPTR));
        label_3->setText(QApplication::translate("derivacion", "Xi =", Q_NULLPTR));
        label_4->setText(QApplication::translate("derivacion", "Xi+1 =", Q_NULLPTR));
        label_5->setText(QApplication::translate("derivacion", "Xi+2 =", Q_NULLPTR));
        label_6->setText(QApplication::translate("derivacion", "f(Xi-2) =", Q_NULLPTR));
        label_7->setText(QApplication::translate("derivacion", "f(Xi-1) =", Q_NULLPTR));
        label_8->setText(QApplication::translate("derivacion", "f(Xi) =", Q_NULLPTR));
        label_9->setText(QApplication::translate("derivacion", "f(Xi+1) =", Q_NULLPTR));
        label_10->setText(QApplication::translate("derivacion", "f(Xi+2) =", Q_NULLPTR));
        label_11->setText(QApplication::translate("derivacion", "h =", Q_NULLPTR));
        Calcular->setText(QApplication::translate("derivacion", "&Calcular", Q_NULLPTR));
        Borrar->setText(QApplication::translate("derivacion", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("derivacion", "&Salir", Q_NULLPTR));
        label_12->setText(QApplication::translate("derivacion", "METODO DE DIFERENCIACION NUMERICA", Q_NULLPTR));
        label_13->setText(QApplication::translate("derivacion", "RESULTADOS", Q_NULLPTR));
        Resultado->setText(QString());
        label_14->setText(QApplication::translate("derivacion", "f(Xi-3) =", Q_NULLPTR));
        label_15->setText(QApplication::translate("derivacion", "X-3i =", Q_NULLPTR));
        label_16->setText(QApplication::translate("derivacion", "f(Xi-4) =", Q_NULLPTR));
        label_17->setText(QApplication::translate("derivacion", "Xi-5 =", Q_NULLPTR));
        label_18->setText(QApplication::translate("derivacion", "f(Xi-5) =", Q_NULLPTR));
        label_19->setText(QApplication::translate("derivacion", "Xi-4 =", Q_NULLPTR));
        label_20->setText(QApplication::translate("derivacion", "Xi+4 =", Q_NULLPTR));
        label_21->setText(QApplication::translate("derivacion", "f(Xi+5) =", Q_NULLPTR));
        label_22->setText(QApplication::translate("derivacion", "f(Xi+3) =", Q_NULLPTR));
        label_23->setText(QApplication::translate("derivacion", "Xi+3 =", Q_NULLPTR));
        label_24->setText(QApplication::translate("derivacion", "f(Xi+4) =", Q_NULLPTR));
        label_25->setText(QApplication::translate("derivacion", "Xi+5 =", Q_NULLPTR));
        Resultado1->setText(QString());
        Resultado2->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("derivacion", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class derivacion: public Ui_derivacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DERIVACION_H
