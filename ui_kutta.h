/********************************************************************************
** Form generated from reading UI file 'kutta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUTTA_H
#define UI_KUTTA_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kutta
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QDoubleSpinBox *liminf;
    QDoubleSpinBox *limsup;
    QSpinBox *grado;
    QPushButton *calcular;
    QPushButton *borrar;
    QPushButton *SALIR;
    QTableWidget *tabla;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *paso;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kutta)
    {
        if (kutta->objectName().isEmpty())
            kutta->setObjectName(QStringLiteral("kutta"));
        kutta->resize(641, 439);
        kutta->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(kutta);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 0, 221, 41));
        label->setStyleSheet(QStringLiteral("font: 75 14pt \"MS Shell Dlg 2\";"));
        liminf = new QDoubleSpinBox(centralWidget);
        liminf->setObjectName(QStringLiteral("liminf"));
        liminf->setGeometry(QRect(130, 50, 61, 22));
        liminf->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        liminf->setMinimum(-100);
        liminf->setSingleStep(0.1);
        limsup = new QDoubleSpinBox(centralWidget);
        limsup->setObjectName(QStringLiteral("limsup"));
        limsup->setGeometry(QRect(130, 80, 61, 22));
        limsup->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        limsup->setMinimum(-100);
        limsup->setSingleStep(0.1);
        grado = new QSpinBox(centralWidget);
        grado->setObjectName(QStringLiteral("grado"));
        grado->setGeometry(QRect(150, 140, 42, 22));
        grado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        grado->setMinimum(2);
        grado->setMaximum(4);
        grado->setValue(2);
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setGeometry(QRect(30, 180, 81, 41));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(30, 230, 81, 41));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(30, 280, 81, 41));
        tabla = new QTableWidget(centralWidget);
        tabla->setObjectName(QStringLiteral("tabla"));
        tabla->setGeometry(QRect(230, 50, 381, 271));
        tabla->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 111, 21));
        label_2->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 111, 21));
        label_3->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 140, 51, 21));
        label_4->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 110, 121, 21));
        label_5->setStyleSheet(QStringLiteral("font: 75 12pt \"MS Shell Dlg 2\";"));
        paso = new QDoubleSpinBox(centralWidget);
        paso->setObjectName(QStringLiteral("paso"));
        paso->setGeometry(QRect(141, 110, 51, 22));
        paso->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        paso->setSingleStep(0.1);
        kutta->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(kutta);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        kutta->setStatusBar(statusBar);

        retranslateUi(kutta);

        QMetaObject::connectSlotsByName(kutta);
    } // setupUi

    void retranslateUi(QMainWindow *kutta)
    {
        kutta->setWindowTitle(QApplication::translate("kutta", "kutta", Q_NULLPTR));
        label->setText(QApplication::translate("kutta", "Metodo de Runge Kutta", Q_NULLPTR));
        calcular->setText(QApplication::translate("kutta", "&Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("kutta", "&Borrar", Q_NULLPTR));
        SALIR->setText(QApplication::translate("kutta", "&Salir", Q_NULLPTR));
        label_2->setText(QApplication::translate("kutta", "Limite Inferior", Q_NULLPTR));
        label_3->setText(QApplication::translate("kutta", "Limite Superior", Q_NULLPTR));
        label_4->setText(QApplication::translate("kutta", "Grado", Q_NULLPTR));
        label_5->setText(QApplication::translate("kutta", "Tama\303\261o de Paso", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kutta: public Ui_kutta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUTTA_H
