/********************************************************************************
** Form generated from reading UI file 'integracionn.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRACIONN_H
#define UI_INTEGRACIONN_H

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

class Ui_integracionN
{
public:
    QWidget *centralWidget;
    QPushButton *evaluar;
    QPushButton *clear;
    QPushButton *SALIR;
    QLabel *label;
    QLabel *label_2;
    QLabel *Resultado;
    QSpinBox *intervalo;
    QDoubleSpinBox *limext;
    QDoubleSpinBox *liminf;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *integracionN)
    {
        if (integracionN->objectName().isEmpty())
            integracionN->setObjectName(QStringLiteral("integracionN"));
        integracionN->resize(612, 315);
        integracionN->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(integracionN);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        evaluar = new QPushButton(centralWidget);
        evaluar->setObjectName(QStringLiteral("evaluar"));
        evaluar->setEnabled(true);
        evaluar->setGeometry(QRect(210, 50, 101, 41));
        evaluar->setStyleSheet(QStringLiteral(""));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(320, 50, 101, 41));
        clear->setStyleSheet(QStringLiteral(""));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(440, 50, 101, 41));
        SALIR->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 301, 31));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 180, 71, 21));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(180, 120, 371, 111));
        Resultado->setStyleSheet(QLatin1String("color: rgb(170, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        intervalo = new QSpinBox(centralWidget);
        intervalo->setObjectName(QStringLiteral("intervalo"));
        intervalo->setGeometry(QRect(130, 90, 37, 20));
        intervalo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        intervalo->setMinimum(-10000);
        intervalo->setMaximum(10000);
        intervalo->setSingleStep(1);
        limext = new QDoubleSpinBox(centralWidget);
        limext->setObjectName(QStringLiteral("limext"));
        limext->setGeometry(QRect(100, 60, 81, 20));
        limext->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        limext->setDecimals(3);
        limext->setMinimum(-1000);
        limext->setMaximum(1000);
        liminf = new QDoubleSpinBox(centralWidget);
        liminf->setObjectName(QStringLiteral("liminf"));
        liminf->setGeometry(QRect(10, 60, 81, 20));
        liminf->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        liminf->setDecimals(3);
        liminf->setMinimum(-1000);
        liminf->setMaximum(999.99);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 90, 61, 21));
        label_4->setStyleSheet(QLatin1String("font: 75 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(103, 41, 81, 20));
        label_5->setStyleSheet(QLatin1String("font: 75 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 81, 21));
        label_6->setStyleSheet(QLatin1String("font: 75 9pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        integracionN->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(integracionN);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        integracionN->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(integracionN);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        integracionN->setStatusBar(statusBar);

        retranslateUi(integracionN);

        QMetaObject::connectSlotsByName(integracionN);
    } // setupUi

    void retranslateUi(QMainWindow *integracionN)
    {
        integracionN->setWindowTitle(QApplication::translate("integracionN", "integracionN", Q_NULLPTR));
        evaluar->setText(QApplication::translate("integracionN", "&Calcular", Q_NULLPTR));
        clear->setText(QApplication::translate("integracionN", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("integracionN", "&Salir", Q_NULLPTR));
        label->setText(QApplication::translate("integracionN", "METODO DE INTEGRACION NUMERICA", Q_NULLPTR));
        label_2->setText(QApplication::translate("integracionN", "Resultado", Q_NULLPTR));
        Resultado->setText(QString());
        label_4->setText(QApplication::translate("integracionN", "Intervalos", Q_NULLPTR));
        label_5->setText(QApplication::translate("integracionN", "Limite Exterior", Q_NULLPTR));
        label_6->setText(QApplication::translate("integracionN", "Limite Inferior", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class integracionN: public Ui_integracionN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRACIONN_H
