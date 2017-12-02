/********************************************************************************
** Form generated from reading UI file 'seidel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEIDEL_H
#define UI_SEIDEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seidel
{
public:
    QWidget *centralWidget;
    QLabel *label_12;
    QDoubleSpinBox *d1;
    QDoubleSpinBox *c2;
    QLabel *label_18;
    QLabel *label_9;
    QDoubleSpinBox *D;
    QDoubleSpinBox *d3;
    QDoubleSpinBox *b3;
    QPushButton *calcular;
    QDoubleSpinBox *b1;
    QLabel *label_2;
    QDoubleSpinBox *a2;
    QDoubleSpinBox *d2;
    QLabel *label_15;
    QLabel *label_10;
    QDoubleSpinBox *C;
    QLabel *Resultado;
    QDoubleSpinBox *a1;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_3;
    QDoubleSpinBox *d4;
    QLabel *label_8;
    QDoubleSpinBox *a3;
    QDoubleSpinBox *c4;
    QDoubleSpinBox *A;
    QDoubleSpinBox *B;
    QDoubleSpinBox *b2;
    QLabel *label_7;
    QLabel *label_6;
    QDoubleSpinBox *a4;
    QDoubleSpinBox *b4;
    QPushButton *borrar;
    QLabel *label_16;
    QLabel *label_5;
    QLabel *label;
    QDoubleSpinBox *c3;
    QPushButton *salir;
    QDoubleSpinBox *c1;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *label_11;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_19;
    QLabel *label_20;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *seidel)
    {
        if (seidel->objectName().isEmpty())
            seidel->setObjectName(QStringLiteral("seidel"));
        seidel->resize(643, 397);
        seidel->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(seidel);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(279, 129, 30, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral(""));
        d1 = new QDoubleSpinBox(centralWidget);
        d1->setObjectName(QStringLiteral("d1"));
        d1->setGeometry(QRect(309, 51, 53, 20));
        d1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d1->setDecimals(3);
        d1->setMinimum(-99);
        d1->setSingleStep(0.1);
        c2 = new QDoubleSpinBox(centralWidget);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setGeometry(QRect(219, 75, 53, 20));
        c2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c2->setDecimals(3);
        c2->setMinimum(-99);
        c2->setSingleStep(0.1);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(270, 10, 241, 31));
        label_18->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(189, 99, 30, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral(""));
        D = new QDoubleSpinBox(centralWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(409, 129, 53, 20));
        D->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        D->setDecimals(3);
        D->setMinimum(-99);
        D->setSingleStep(0.1);
        d3 = new QDoubleSpinBox(centralWidget);
        d3->setObjectName(QStringLiteral("d3"));
        d3->setGeometry(QRect(309, 103, 53, 20));
        d3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d3->setDecimals(3);
        d3->setMinimum(-99);
        d3->setSingleStep(0.1);
        b3 = new QDoubleSpinBox(centralWidget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(130, 100, 53, 20));
        b3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b3->setDecimals(3);
        b3->setMinimum(-99);
        b3->setSingleStep(0.1);
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setEnabled(false);
        calcular->setGeometry(QRect(30, 150, 81, 51));
        calcular->setStyleSheet(QStringLiteral(""));
        b1 = new QDoubleSpinBox(centralWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(130, 48, 53, 20));
        b1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b1->setDecimals(3);
        b1->setMinimum(-99);
        b1->setSingleStep(0.1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(89, 129, 32, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        a2 = new QDoubleSpinBox(centralWidget);
        a2->setObjectName(QStringLiteral("a2"));
        a2->setGeometry(QRect(29, 73, 53, 20));
        a2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a2->setDecimals(3);
        a2->setMinimum(-99);
        a2->setSingleStep(0.1);
        d2 = new QDoubleSpinBox(centralWidget);
        d2->setObjectName(QStringLiteral("d2"));
        d2->setGeometry(QRect(309, 77, 53, 20));
        d2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d2->setDecimals(3);
        d2->setMinimum(-99);
        d2->setSingleStep(0.1);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(369, 47, 34, 16));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(279, 79, 30, 16));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral(""));
        C = new QDoubleSpinBox(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(409, 103, 53, 20));
        C->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        C->setDecimals(3);
        C->setMinimum(-99);
        C->setSingleStep(0.1);
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(240, 160, 391, 141));
        Resultado->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        a1 = new QDoubleSpinBox(centralWidget);
        a1->setObjectName(QStringLiteral("a1"));
        a1->setGeometry(QRect(29, 47, 53, 20));
        a1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a1->setDecimals(3);
        a1->setMinimum(-99);
        a1->setSingleStep(0.1);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(369, 73, 34, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(279, 99, 30, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(89, 99, 32, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        d4 = new QDoubleSpinBox(centralWidget);
        d4->setObjectName(QStringLiteral("d4"));
        d4->setGeometry(QRect(309, 129, 53, 20));
        d4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        d4->setDecimals(3);
        d4->setMinimum(-99);
        d4->setSingleStep(0.1);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(189, 129, 30, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral(""));
        a3 = new QDoubleSpinBox(centralWidget);
        a3->setObjectName(QStringLiteral("a3"));
        a3->setGeometry(QRect(29, 99, 53, 20));
        a3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a3->setDecimals(3);
        a3->setMinimum(-99);
        a3->setSingleStep(0.1);
        c4 = new QDoubleSpinBox(centralWidget);
        c4->setObjectName(QStringLiteral("c4"));
        c4->setGeometry(QRect(219, 127, 53, 20));
        c4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c4->setDecimals(3);
        c4->setMinimum(-99);
        c4->setSingleStep(0.1);
        A = new QDoubleSpinBox(centralWidget);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(409, 51, 53, 20));
        A->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        A->setDecimals(3);
        A->setMinimum(-99);
        A->setSingleStep(0.1);
        B = new QDoubleSpinBox(centralWidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(409, 77, 53, 20));
        B->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        B->setDecimals(3);
        B->setMinimum(-99);
        B->setSingleStep(0.1);
        b2 = new QDoubleSpinBox(centralWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(130, 74, 53, 20));
        b2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b2->setDecimals(3);
        b2->setMinimum(-99);
        b2->setSingleStep(0.1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(189, 50, 30, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(189, 79, 30, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));
        a4 = new QDoubleSpinBox(centralWidget);
        a4->setObjectName(QStringLiteral("a4"));
        a4->setGeometry(QRect(29, 125, 53, 20));
        a4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a4->setDecimals(3);
        a4->setMinimum(-99);
        a4->setSingleStep(0.1);
        b4 = new QDoubleSpinBox(centralWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(130, 126, 53, 20));
        b4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b4->setDecimals(3);
        b4->setMinimum(-99);
        b4->setSingleStep(0.1);
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(30, 210, 81, 51));
        borrar->setStyleSheet(QStringLiteral(""));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(369, 129, 34, 16));
        label_16->setFont(font);
        label_16->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 230, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(89, 79, 32, 16));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        c3 = new QDoubleSpinBox(centralWidget);
        c3->setObjectName(QStringLiteral("c3"));
        c3->setGeometry(QRect(219, 101, 53, 20));
        c3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c3->setDecimals(3);
        c3->setMinimum(-99);
        c3->setSingleStep(0.1);
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(30, 270, 81, 51));
        salir->setStyleSheet(QStringLiteral(""));
        c1 = new QDoubleSpinBox(centralWidget);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setGeometry(QRect(219, 49, 53, 20));
        c1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        c1->setDecimals(3);
        c1->setMinimum(-99);
        c1->setSingleStep(0.1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(89, 49, 32, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(369, 99, 34, 16));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral(""));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 50, 30, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral(""));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(571, 50, 61, 22));
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setMaximum(999);
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(570, 100, 62, 22));
        doubleSpinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        doubleSpinBox->setDecimals(5);
        doubleSpinBox->setSingleStep(0.1);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(480, 50, 61, 20));
        label_19->setStyleSheet(QStringLiteral(""));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(480, 100, 81, 21));
        label_20->setStyleSheet(QStringLiteral(""));
        seidel->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(seidel);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        seidel->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(seidel);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        seidel->setStatusBar(statusBar);

        retranslateUi(seidel);

        QMetaObject::connectSlotsByName(seidel);
    } // setupUi

    void retranslateUi(QMainWindow *seidel)
    {
        seidel->setWindowTitle(QApplication::translate("seidel", "seidel", Q_NULLPTR));
        label_12->setText(QApplication::translate("seidel", "x3 +", Q_NULLPTR));
        label_18->setText(QApplication::translate("seidel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Metodo de Gauss-Seidel</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("seidel", "x2 +", Q_NULLPTR));
        calcular->setText(QApplication::translate("seidel", "&Calcular", Q_NULLPTR));
        label_2->setText(QApplication::translate("seidel", "X1 +", Q_NULLPTR));
        label_15->setText(QApplication::translate("seidel", "x4  =", Q_NULLPTR));
        label_10->setText(QApplication::translate("seidel", "x3 +", Q_NULLPTR));
        Resultado->setText(QString());
        label_14->setText(QApplication::translate("seidel", "x4  =", Q_NULLPTR));
        label_13->setText(QApplication::translate("seidel", "x3 +", Q_NULLPTR));
        label_3->setText(QApplication::translate("seidel", "X1 +", Q_NULLPTR));
        label_8->setText(QApplication::translate("seidel", "x2 +", Q_NULLPTR));
        label_7->setText(QApplication::translate("seidel", "x2 +", Q_NULLPTR));
        label_6->setText(QApplication::translate("seidel", "x2 +", Q_NULLPTR));
        borrar->setText(QApplication::translate("seidel", "&Borrar", Q_NULLPTR));
        label_16->setText(QApplication::translate("seidel", "x4  =", Q_NULLPTR));
        label_5->setText(QApplication::translate("seidel", "Resultado", Q_NULLPTR));
        label->setText(QApplication::translate("seidel", "X1 +", Q_NULLPTR));
        salir->setText(QApplication::translate("seidel", "&Salir", Q_NULLPTR));
        label_4->setText(QApplication::translate("seidel", "X1 +", Q_NULLPTR));
        label_17->setText(QApplication::translate("seidel", "x4  =", Q_NULLPTR));
        label_11->setText(QApplication::translate("seidel", "x3 +", Q_NULLPTR));
        label_19->setText(QApplication::translate("seidel", "Iteraciones", Q_NULLPTR));
        label_20->setText(QApplication::translate("seidel", "Margen de error", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class seidel: public Ui_seidel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEIDEL_H
