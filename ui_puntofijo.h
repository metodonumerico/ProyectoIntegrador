/********************************************************************************
** Form generated from reading UI file 'puntofijo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUNTOFIJO_H
#define UI_PUNTOFIJO_H

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

class Ui_puntofijo
{
public:
    QWidget *centralWidget;
    QPushButton *SALIR;
    QPushButton *borrar;
    QPushButton *calcular;
    QDoubleSpinBox *error;
    QDoubleSpinBox *x;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *Resultado;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *puntofijo)
    {
        if (puntofijo->objectName().isEmpty())
            puntofijo->setObjectName(QStringLiteral("puntofijo"));
        puntofijo->resize(604, 313);
        puntofijo->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(puntofijo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(60, 230, 91, 41));
        SALIR->setStyleSheet(QStringLiteral(""));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(60, 180, 91, 41));
        borrar->setStyleSheet(QStringLiteral(""));
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setEnabled(true);
        calcular->setGeometry(QRect(60, 120, 91, 41));
        calcular->setStyleSheet(QStringLiteral(""));
        error = new QDoubleSpinBox(centralWidget);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(100, 90, 53, 20));
        error->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        error->setDecimals(2);
        x = new QDoubleSpinBox(centralWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(100, 60, 53, 20));
        x->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        x->setDecimals(2);
        x->setMinimum(-99);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 41, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 71, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 50, 101, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(260, 100, 301, 181));
        Resultado->setStyleSheet(QLatin1String("color: rgb(0, 85, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 10, 331, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral(""));
        puntofijo->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(puntofijo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        puntofijo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(puntofijo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        puntofijo->setStatusBar(statusBar);

        retranslateUi(puntofijo);

        QMetaObject::connectSlotsByName(puntofijo);
    } // setupUi

    void retranslateUi(QMainWindow *puntofijo)
    {
        puntofijo->setWindowTitle(QApplication::translate("puntofijo", "puntofijo", Q_NULLPTR));
        SALIR->setText(QApplication::translate("puntofijo", "&Salir", Q_NULLPTR));
        borrar->setText(QApplication::translate("puntofijo", "&Borrar", Q_NULLPTR));
        calcular->setText(QApplication::translate("puntofijo", "&Calcular", Q_NULLPTR));
        label->setText(QApplication::translate("puntofijo", "Error", Q_NULLPTR));
        label_2->setText(QApplication::translate("puntofijo", "Valor de X", Q_NULLPTR));
        label_4->setText(QApplication::translate("puntofijo", "RESULTADO", Q_NULLPTR));
        Resultado->setText(QString());
        label_3->setText(QApplication::translate("puntofijo", "METODO ITERACION DE PUNTO FIJO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class puntofijo: public Ui_puntofijo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUNTOFIJO_H
