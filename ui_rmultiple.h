/********************************************************************************
** Form generated from reading UI file 'rmultiple.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RMULTIPLE_H
#define UI_RMULTIPLE_H

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

class Ui_rmultiple
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *y5;
    QLabel *Resultado;
    QLabel *label_2;
    QDoubleSpinBox *y4;
    QPushButton *calcular;
    QDoubleSpinBox *y6;
    QPushButton *borrar;
    QDoubleSpinBox *y1;
    QDoubleSpinBox *y3;
    QPushButton *SALIR;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QDoubleSpinBox *y2;
    QLabel *label_5;
    QDoubleSpinBox *x2;
    QDoubleSpinBox *x1;
    QDoubleSpinBox *x3;
    QDoubleSpinBox *x5;
    QDoubleSpinBox *x4;
    QDoubleSpinBox *x6;
    QDoubleSpinBox *x12;
    QDoubleSpinBox *x11;
    QDoubleSpinBox *x13;
    QDoubleSpinBox *x15;
    QDoubleSpinBox *x14;
    QDoubleSpinBox *x16;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rmultiple)
    {
        if (rmultiple->objectName().isEmpty())
            rmultiple->setObjectName(QStringLiteral("rmultiple"));
        rmultiple->resize(595, 470);
        centralWidget = new QWidget(rmultiple);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        y5 = new QDoubleSpinBox(centralWidget);
        y5->setObjectName(QStringLiteral("y5"));
        y5->setGeometry(QRect(150, 164, 53, 20));
        y5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y5->setMinimum(-99);
        y5->setSingleStep(0.5);
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(220, 140, 361, 141));
        Resultado->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 40, 21, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        y4 = new QDoubleSpinBox(centralWidget);
        y4->setObjectName(QStringLiteral("y4"));
        y4->setGeometry(QRect(150, 138, 53, 20));
        y4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y4->setMinimum(-99);
        y4->setSingleStep(0.5);
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setGeometry(QRect(230, 60, 91, 41));
        y6 = new QDoubleSpinBox(centralWidget);
        y6->setObjectName(QStringLiteral("y6"));
        y6->setGeometry(QRect(150, 190, 53, 20));
        y6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y6->setMinimum(-99);
        y6->setSingleStep(0.5);
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(340, 60, 91, 41));
        y1 = new QDoubleSpinBox(centralWidget);
        y1->setObjectName(QStringLiteral("y1"));
        y1->setGeometry(QRect(150, 60, 53, 20));
        y1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y1->setMinimum(-99);
        y1->setSingleStep(0.5);
        y3 = new QDoubleSpinBox(centralWidget);
        y3->setObjectName(QStringLiteral("y3"));
        y3->setGeometry(QRect(150, 112, 53, 20));
        y3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y3->setMinimum(-99);
        y3->setSingleStep(0.5);
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(450, 60, 91, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 120, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 10, 281, 21));
        label_4->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 21, 16));
        label->setFont(font);
        y2 = new QDoubleSpinBox(centralWidget);
        y2->setObjectName(QStringLiteral("y2"));
        y2->setGeometry(QRect(150, 86, 53, 20));
        y2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y2->setMinimum(-99);
        y2->setSingleStep(0.5);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 40, 21, 21));
        label_5->setFont(font);
        x2 = new QDoubleSpinBox(centralWidget);
        x2->setObjectName(QStringLiteral("x2"));
        x2->setGeometry(QRect(10, 86, 53, 20));
        x2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x2->setMinimum(-99);
        x2->setSingleStep(0.5);
        x1 = new QDoubleSpinBox(centralWidget);
        x1->setObjectName(QStringLiteral("x1"));
        x1->setGeometry(QRect(10, 60, 53, 20));
        x1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x1->setMinimum(-99);
        x1->setSingleStep(0.5);
        x3 = new QDoubleSpinBox(centralWidget);
        x3->setObjectName(QStringLiteral("x3"));
        x3->setGeometry(QRect(10, 112, 53, 20));
        x3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x3->setMinimum(-99);
        x3->setSingleStep(0.5);
        x5 = new QDoubleSpinBox(centralWidget);
        x5->setObjectName(QStringLiteral("x5"));
        x5->setGeometry(QRect(10, 164, 53, 20));
        x5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x5->setMinimum(-99);
        x5->setSingleStep(0.5);
        x4 = new QDoubleSpinBox(centralWidget);
        x4->setObjectName(QStringLiteral("x4"));
        x4->setGeometry(QRect(10, 138, 53, 20));
        x4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x4->setMinimum(-99);
        x4->setSingleStep(0.5);
        x6 = new QDoubleSpinBox(centralWidget);
        x6->setObjectName(QStringLiteral("x6"));
        x6->setGeometry(QRect(10, 190, 53, 20));
        x6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x6->setMinimum(-99);
        x6->setSingleStep(0.5);
        x12 = new QDoubleSpinBox(centralWidget);
        x12->setObjectName(QStringLiteral("x12"));
        x12->setGeometry(QRect(80, 86, 53, 20));
        x12->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x12->setMinimum(-99);
        x12->setSingleStep(0.5);
        x11 = new QDoubleSpinBox(centralWidget);
        x11->setObjectName(QStringLiteral("x11"));
        x11->setGeometry(QRect(80, 60, 53, 20));
        x11->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x11->setMinimum(-99);
        x11->setSingleStep(0.5);
        x13 = new QDoubleSpinBox(centralWidget);
        x13->setObjectName(QStringLiteral("x13"));
        x13->setGeometry(QRect(80, 112, 53, 20));
        x13->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x13->setMinimum(-99);
        x13->setSingleStep(0.5);
        x15 = new QDoubleSpinBox(centralWidget);
        x15->setObjectName(QStringLiteral("x15"));
        x15->setGeometry(QRect(80, 164, 53, 20));
        x15->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x15->setMinimum(-99);
        x15->setSingleStep(0.5);
        x14 = new QDoubleSpinBox(centralWidget);
        x14->setObjectName(QStringLiteral("x14"));
        x14->setGeometry(QRect(80, 138, 53, 20));
        x14->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x14->setMinimum(-99);
        x14->setSingleStep(0.5);
        x16 = new QDoubleSpinBox(centralWidget);
        x16->setObjectName(QStringLiteral("x16"));
        x16->setGeometry(QRect(80, 190, 53, 20));
        x16->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x16->setMinimum(-99);
        x16->setSingleStep(0.5);
        rmultiple->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(rmultiple);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rmultiple->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rmultiple);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rmultiple->setStatusBar(statusBar);

        retranslateUi(rmultiple);

        QMetaObject::connectSlotsByName(rmultiple);
    } // setupUi

    void retranslateUi(QMainWindow *rmultiple)
    {
        rmultiple->setWindowTitle(QApplication::translate("rmultiple", "rmultiple", Q_NULLPTR));
        Resultado->setText(QString());
        label_2->setText(QApplication::translate("rmultiple", "Y1", Q_NULLPTR));
        calcular->setText(QApplication::translate("rmultiple", "Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("rmultiple", "Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("rmultiple", "Salir", Q_NULLPTR));
        label_3->setText(QApplication::translate("rmultiple", "RESULTADO", Q_NULLPTR));
        label_4->setText(QApplication::translate("rmultiple", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Metodo de Regresion Multiple</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("rmultiple", "X1", Q_NULLPTR));
        label_5->setText(QApplication::translate("rmultiple", "X2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rmultiple: public Ui_rmultiple {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RMULTIPLE_H
