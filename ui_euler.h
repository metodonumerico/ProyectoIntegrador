/********************************************************************************
** Form generated from reading UI file 'euler.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULER_H
#define UI_EULER_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Euler
{
public:
    QWidget *centralWidget;
    QLabel *label_9;
    QPushButton *metodo;
    QPushButton *limpiar;
    QPushButton *cerrar;
    QLabel *label_18;
    QDoubleSpinBox *h;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *liminf;
    QDoubleSpinBox *limexf;
    QLabel *label_22;
    QTableWidget *tabla;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Euler)
    {
        if (Euler->objectName().isEmpty())
            Euler->setObjectName(QStringLiteral("Euler"));
        Euler->resize(474, 440);
        centralWidget = new QWidget(Euler);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 0, 191, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_9->setFont(font);
        metodo = new QPushButton(centralWidget);
        metodo->setObjectName(QStringLiteral("metodo"));
        metodo->setGeometry(QRect(300, 60, 71, 41));
        limpiar = new QPushButton(centralWidget);
        limpiar->setObjectName(QStringLiteral("limpiar"));
        limpiar->setGeometry(QRect(370, 60, 75, 41));
        cerrar = new QPushButton(centralWidget);
        cerrar->setObjectName(QStringLiteral("cerrar"));
        cerrar->setGeometry(QRect(370, 100, 75, 41));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 100, 21, 21));
        h = new QDoubleSpinBox(centralWidget);
        h->setObjectName(QStringLiteral("h"));
        h->setGeometry(QRect(90, 100, 51, 22));
        h->setDecimals(3);
        h->setMinimum(-1000);
        h->setMaximum(1000);
        h->setSingleStep(0.1);
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 70, 61, 21));
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAutoFillBackground(false);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(150, 70, 71, 21));
        liminf = new QDoubleSpinBox(centralWidget);
        liminf->setObjectName(QStringLiteral("liminf"));
        liminf->setGeometry(QRect(91, 70, 51, 22));
        liminf->setDecimals(3);
        liminf->setMinimum(-1000);
        liminf->setMaximum(1000);
        liminf->setSingleStep(0.1);
        limexf = new QDoubleSpinBox(centralWidget);
        limexf->setObjectName(QStringLiteral("limexf"));
        limexf->setGeometry(QRect(231, 70, 51, 22));
        limexf->setDecimals(3);
        limexf->setMinimum(-1000);
        limexf->setMaximum(1000);
        limexf->setSingleStep(0.1);
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(100, 40, 111, 21));
        tabla = new QTableWidget(centralWidget);
        tabla->setObjectName(QStringLiteral("tabla"));
        tabla->setGeometry(QRect(20, 170, 441, 231));
        tabla->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 150, 21, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 150, 61, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 150, 41, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 150, 51, 16));
        Euler->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Euler);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Euler->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Euler);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Euler->setStatusBar(statusBar);

        retranslateUi(Euler);

        QMetaObject::connectSlotsByName(Euler);
    } // setupUi

    void retranslateUi(QMainWindow *Euler)
    {
        Euler->setWindowTitle(QApplication::translate("Euler", "Euler", Q_NULLPTR));
        label_9->setText(QApplication::translate("Euler", "METODO DE EULER", Q_NULLPTR));
        metodo->setText(QApplication::translate("Euler", "&Calcular", Q_NULLPTR));
        limpiar->setText(QApplication::translate("Euler", "&Borrar", Q_NULLPTR));
        cerrar->setText(QApplication::translate("Euler", "&Salir", Q_NULLPTR));
        label_18->setText(QApplication::translate("Euler", "H=", Q_NULLPTR));
        label_20->setText(QApplication::translate("Euler", "limite inferior", Q_NULLPTR));
        label_21->setText(QApplication::translate("Euler", "limite exterior", Q_NULLPTR));
        label_22->setText(QApplication::translate("Euler", "Tama\303\261o del Intervalo", Q_NULLPTR));
        label->setText(QApplication::translate("Euler", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("Euler", "Y verdadera", Q_NULLPTR));
        label_3->setText(QApplication::translate("Euler", "YEuler", Q_NULLPTR));
        label_4->setText(QApplication::translate("Euler", "Error (%)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Euler: public Ui_Euler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULER_H
