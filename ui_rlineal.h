/********************************************************************************
** Form generated from reading UI file 'rlineal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RLINEAL_H
#define UI_RLINEAL_H

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

class Ui_rlineal
{
public:
    QWidget *centralWidget;
    QSpinBox *x1;
    QSpinBox *x2;
    QSpinBox *x3;
    QSpinBox *x4;
    QSpinBox *x5;
    QSpinBox *x6;
    QSpinBox *x7;
    QDoubleSpinBox *y1;
    QDoubleSpinBox *y2;
    QDoubleSpinBox *y3;
    QDoubleSpinBox *y4;
    QDoubleSpinBox *y5;
    QDoubleSpinBox *y6;
    QDoubleSpinBox *y7;
    QLabel *label;
    QLabel *label_2;
    QPushButton *calcular;
    QPushButton *borrar;
    QPushButton *SALIR;
    QLabel *label_3;
    QLabel *Resultado;
    QLabel *label_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rlineal)
    {
        if (rlineal->objectName().isEmpty())
            rlineal->setObjectName(QStringLiteral("rlineal"));
        rlineal->resize(506, 405);
        rlineal->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(rlineal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        x1 = new QSpinBox(centralWidget);
        x1->setObjectName(QStringLiteral("x1"));
        x1->setGeometry(QRect(10, 70, 37, 20));
        x1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x2 = new QSpinBox(centralWidget);
        x2->setObjectName(QStringLiteral("x2"));
        x2->setGeometry(QRect(10, 110, 37, 20));
        x2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x3 = new QSpinBox(centralWidget);
        x3->setObjectName(QStringLiteral("x3"));
        x3->setGeometry(QRect(10, 150, 37, 20));
        x3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x4 = new QSpinBox(centralWidget);
        x4->setObjectName(QStringLiteral("x4"));
        x4->setGeometry(QRect(10, 190, 37, 20));
        x4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x5 = new QSpinBox(centralWidget);
        x5->setObjectName(QStringLiteral("x5"));
        x5->setGeometry(QRect(10, 230, 37, 20));
        x5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x6 = new QSpinBox(centralWidget);
        x6->setObjectName(QStringLiteral("x6"));
        x6->setGeometry(QRect(10, 270, 37, 20));
        x6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x7 = new QSpinBox(centralWidget);
        x7->setObjectName(QStringLiteral("x7"));
        x7->setGeometry(QRect(10, 310, 37, 20));
        x7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y1 = new QDoubleSpinBox(centralWidget);
        y1->setObjectName(QStringLiteral("y1"));
        y1->setGeometry(QRect(70, 70, 53, 20));
        y1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y1->setMinimum(-99);
        y1->setSingleStep(0.5);
        y2 = new QDoubleSpinBox(centralWidget);
        y2->setObjectName(QStringLiteral("y2"));
        y2->setGeometry(QRect(70, 110, 53, 20));
        y2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y2->setMinimum(-99);
        y2->setSingleStep(0.5);
        y3 = new QDoubleSpinBox(centralWidget);
        y3->setObjectName(QStringLiteral("y3"));
        y3->setGeometry(QRect(70, 150, 53, 20));
        y3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y3->setMinimum(-99);
        y3->setSingleStep(0.5);
        y4 = new QDoubleSpinBox(centralWidget);
        y4->setObjectName(QStringLiteral("y4"));
        y4->setGeometry(QRect(70, 190, 53, 20));
        y4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y4->setMinimum(-99);
        y4->setSingleStep(0.5);
        y5 = new QDoubleSpinBox(centralWidget);
        y5->setObjectName(QStringLiteral("y5"));
        y5->setGeometry(QRect(70, 230, 53, 20));
        y5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y5->setMinimum(-99);
        y5->setSingleStep(0.5);
        y6 = new QDoubleSpinBox(centralWidget);
        y6->setObjectName(QStringLiteral("y6"));
        y6->setGeometry(QRect(70, 270, 53, 20));
        y6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y6->setMinimum(-99);
        y6->setSingleStep(0.5);
        y7 = new QDoubleSpinBox(centralWidget);
        y7->setObjectName(QStringLiteral("y7"));
        y7->setGeometry(QRect(70, 310, 53, 20));
        y7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        y7->setMinimum(-99);
        y7->setSingleStep(0.5);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 21, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 40, 21, 21));
        label_2->setFont(font);
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setGeometry(QRect(160, 50, 91, 41));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(280, 50, 91, 41));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(400, 50, 91, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 110, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(140, 150, 341, 121));
        Resultado->setStyleSheet(QLatin1String("font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 0, 0);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 0, 271, 31));
        label_4->setStyleSheet(QStringLiteral(""));
        rlineal->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(rlineal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rlineal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rlineal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rlineal->setStatusBar(statusBar);

        retranslateUi(rlineal);

        QMetaObject::connectSlotsByName(rlineal);
    } // setupUi

    void retranslateUi(QMainWindow *rlineal)
    {
        rlineal->setWindowTitle(QApplication::translate("rlineal", "rlineal", Q_NULLPTR));
        label->setText(QApplication::translate("rlineal", "Xi", Q_NULLPTR));
        label_2->setText(QApplication::translate("rlineal", "Yi", Q_NULLPTR));
        calcular->setText(QApplication::translate("rlineal", "&Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("rlineal", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("rlineal", "Salir", Q_NULLPTR));
        label_3->setText(QApplication::translate("rlineal", "RESULTADO", Q_NULLPTR));
        Resultado->setText(QString());
        label_4->setText(QApplication::translate("rlineal", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Metodo de Regresion Lineal</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rlineal: public Ui_rlineal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RLINEAL_H
