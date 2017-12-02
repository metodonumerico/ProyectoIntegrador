/********************************************************************************
** Form generated from reading UI file 'eliminacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINACION_H
#define UI_ELIMINACION_H

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

class Ui_eliminacion
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *a1;
    QDoubleSpinBox *a2;
    QDoubleSpinBox *a3;
    QDoubleSpinBox *a4;
    QDoubleSpinBox *b1;
    QDoubleSpinBox *c1;
    QDoubleSpinBox *d1;
    QDoubleSpinBox *A;
    QDoubleSpinBox *B;
    QDoubleSpinBox *d2;
    QDoubleSpinBox *b2;
    QDoubleSpinBox *c2;
    QDoubleSpinBox *d3;
    QDoubleSpinBox *C;
    QDoubleSpinBox *b3;
    QDoubleSpinBox *c3;
    QDoubleSpinBox *b4;
    QDoubleSpinBox *c4;
    QDoubleSpinBox *d4;
    QDoubleSpinBox *D;
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
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *calcular;
    QPushButton *borrar;
    QPushButton *SALIR;
    QLabel *Resultado;
    QLabel *label_18;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *eliminacion)
    {
        if (eliminacion->objectName().isEmpty())
            eliminacion->setObjectName(QStringLiteral("eliminacion"));
        eliminacion->resize(590, 359);
        eliminacion->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(eliminacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        a1 = new QDoubleSpinBox(centralWidget);
        a1->setObjectName(QStringLiteral("a1"));
        a1->setGeometry(QRect(30, 78, 53, 20));
        a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a1->setDecimals(3);
        a1->setMinimum(-99);
        a1->setSingleStep(0.1);
        a2 = new QDoubleSpinBox(centralWidget);
        a2->setObjectName(QStringLiteral("a2"));
        a2->setGeometry(QRect(30, 104, 53, 20));
        a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a2->setDecimals(3);
        a2->setMinimum(-99);
        a2->setSingleStep(0.1);
        a3 = new QDoubleSpinBox(centralWidget);
        a3->setObjectName(QStringLiteral("a3"));
        a3->setGeometry(QRect(30, 130, 53, 20));
        a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a3->setDecimals(3);
        a3->setMinimum(-99);
        a3->setSingleStep(0.1);
        a4 = new QDoubleSpinBox(centralWidget);
        a4->setObjectName(QStringLiteral("a4"));
        a4->setGeometry(QRect(30, 156, 53, 20));
        a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a4->setDecimals(3);
        a4->setMinimum(-99);
        a4->setSingleStep(0.1);
        b1 = new QDoubleSpinBox(centralWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(131, 79, 53, 20));
        b1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b1->setDecimals(3);
        b1->setMinimum(-99);
        b1->setSingleStep(0.1);
        c1 = new QDoubleSpinBox(centralWidget);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setGeometry(QRect(220, 80, 53, 20));
        c1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c1->setDecimals(3);
        c1->setMinimum(-99);
        c1->setSingleStep(0.1);
        d1 = new QDoubleSpinBox(centralWidget);
        d1->setObjectName(QStringLiteral("d1"));
        d1->setGeometry(QRect(310, 82, 53, 20));
        d1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d1->setDecimals(3);
        d1->setMinimum(-99);
        d1->setSingleStep(0.1);
        A = new QDoubleSpinBox(centralWidget);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(410, 82, 53, 20));
        A->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        A->setDecimals(3);
        A->setMinimum(-99);
        A->setSingleStep(0.1);
        B = new QDoubleSpinBox(centralWidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(410, 108, 53, 20));
        B->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        B->setDecimals(3);
        B->setMinimum(-99);
        B->setSingleStep(0.1);
        d2 = new QDoubleSpinBox(centralWidget);
        d2->setObjectName(QStringLiteral("d2"));
        d2->setGeometry(QRect(310, 108, 53, 20));
        d2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d2->setDecimals(3);
        d2->setMinimum(-99);
        d2->setSingleStep(0.1);
        b2 = new QDoubleSpinBox(centralWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(131, 105, 53, 20));
        b2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b2->setDecimals(3);
        b2->setMinimum(-99);
        b2->setSingleStep(0.1);
        c2 = new QDoubleSpinBox(centralWidget);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setGeometry(QRect(220, 106, 53, 20));
        c2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c2->setDecimals(3);
        c2->setMinimum(-99);
        c2->setSingleStep(0.1);
        d3 = new QDoubleSpinBox(centralWidget);
        d3->setObjectName(QStringLiteral("d3"));
        d3->setGeometry(QRect(310, 134, 53, 20));
        d3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d3->setDecimals(3);
        d3->setMinimum(-99);
        d3->setSingleStep(0.1);
        C = new QDoubleSpinBox(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(410, 134, 53, 20));
        C->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        C->setDecimals(3);
        C->setMinimum(-99);
        C->setSingleStep(0.1);
        b3 = new QDoubleSpinBox(centralWidget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(131, 131, 53, 20));
        b3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b3->setDecimals(3);
        b3->setMinimum(-99);
        b3->setSingleStep(0.1);
        c3 = new QDoubleSpinBox(centralWidget);
        c3->setObjectName(QStringLiteral("c3"));
        c3->setGeometry(QRect(220, 132, 53, 20));
        c3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c3->setDecimals(3);
        c3->setMinimum(-99);
        c3->setSingleStep(0.1);
        b4 = new QDoubleSpinBox(centralWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(131, 157, 53, 20));
        b4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b4->setDecimals(3);
        b4->setMinimum(-99);
        b4->setSingleStep(0.1);
        c4 = new QDoubleSpinBox(centralWidget);
        c4->setObjectName(QStringLiteral("c4"));
        c4->setGeometry(QRect(220, 158, 53, 20));
        c4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c4->setDecimals(3);
        c4->setMinimum(-99);
        c4->setSingleStep(0.1);
        d4 = new QDoubleSpinBox(centralWidget);
        d4->setObjectName(QStringLiteral("d4"));
        d4->setGeometry(QRect(310, 160, 53, 20));
        d4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d4->setDecimals(3);
        d4->setMinimum(-99);
        d4->setSingleStep(0.1);
        D = new QDoubleSpinBox(centralWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(410, 160, 53, 20));
        D->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        D->setDecimals(3);
        D->setMinimum(-99);
        D->setSingleStep(0.1);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 110, 32, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 160, 32, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 130, 32, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 80, 32, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 190, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 110, 30, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 81, 30, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 160, 30, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 130, 30, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 110, 30, 16));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral(""));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(281, 81, 30, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 160, 30, 16));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 130, 30, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(370, 104, 34, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(370, 78, 34, 16));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral(""));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(370, 160, 34, 16));
        label_16->setFont(font);
        label_16->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(370, 130, 34, 16));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral(""));
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setEnabled(true);
        calcular->setGeometry(QRect(480, 50, 81, 51));
        calcular->setStyleSheet(QStringLiteral(""));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(480, 110, 81, 51));
        borrar->setStyleSheet(QStringLiteral(""));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(480, 170, 81, 51));
        SALIR->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(20, 210, 451, 111));
        Resultado->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(130, 5, 331, 61));
        label_18->setStyleSheet(QStringLiteral(""));
        eliminacion->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(eliminacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        eliminacion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(eliminacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        eliminacion->setStatusBar(statusBar);

        retranslateUi(eliminacion);

        QMetaObject::connectSlotsByName(eliminacion);
    } // setupUi

    void retranslateUi(QMainWindow *eliminacion)
    {
        eliminacion->setWindowTitle(QApplication::translate("eliminacion", "eliminacion", Q_NULLPTR));
        label->setText(QApplication::translate("eliminacion", "X1 +", Q_NULLPTR));
        label_2->setText(QApplication::translate("eliminacion", "X1 +", Q_NULLPTR));
        label_3->setText(QApplication::translate("eliminacion", "X1 +", Q_NULLPTR));
        label_4->setText(QApplication::translate("eliminacion", "X1 +", Q_NULLPTR));
        label_5->setText(QApplication::translate("eliminacion", "Resultado", Q_NULLPTR));
        label_6->setText(QApplication::translate("eliminacion", "x2 +", Q_NULLPTR));
        label_7->setText(QApplication::translate("eliminacion", "x2 +", Q_NULLPTR));
        label_8->setText(QApplication::translate("eliminacion", "x2 +", Q_NULLPTR));
        label_9->setText(QApplication::translate("eliminacion", "x2 +", Q_NULLPTR));
        label_10->setText(QApplication::translate("eliminacion", "x3 +", Q_NULLPTR));
        label_11->setText(QApplication::translate("eliminacion", "x3 +", Q_NULLPTR));
        label_12->setText(QApplication::translate("eliminacion", "x3 +", Q_NULLPTR));
        label_13->setText(QApplication::translate("eliminacion", "x3 +", Q_NULLPTR));
        label_14->setText(QApplication::translate("eliminacion", "x4  =", Q_NULLPTR));
        label_15->setText(QApplication::translate("eliminacion", "x4  =", Q_NULLPTR));
        label_16->setText(QApplication::translate("eliminacion", "x4  =", Q_NULLPTR));
        label_17->setText(QApplication::translate("eliminacion", "x4  =", Q_NULLPTR));
        calcular->setText(QApplication::translate("eliminacion", "&Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("eliminacion", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("eliminacion", "&Salir", Q_NULLPTR));
        Resultado->setText(QString());
        label_18->setText(QApplication::translate("eliminacion", "Metodo de Eliminacion Gaussiana", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class eliminacion: public Ui_eliminacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINACION_H
