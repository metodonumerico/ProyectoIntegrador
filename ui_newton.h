/********************************************************************************
** Form generated from reading UI file 'newton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTON_H
#define UI_NEWTON_H

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

class Ui_newton
{
public:
    QWidget *centralWidget;
    QPushButton *SALIR;
    QPushButton *calcular;
    QPushButton *borrar;
    QDoubleSpinBox *x;
    QDoubleSpinBox *error;
    QSpinBox *iteracion;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Resultado;
    QLabel *label_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *newton)
    {
        if (newton->objectName().isEmpty())
            newton->setObjectName(QStringLiteral("newton"));
        newton->resize(522, 300);
        newton->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(newton);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SALIR = new QPushButton(centralWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(410, 40, 91, 31));
        SALIR->setStyleSheet(QStringLiteral(""));
        calcular = new QPushButton(centralWidget);
        calcular->setObjectName(QStringLiteral("calcular"));
        calcular->setEnabled(false);
        calcular->setGeometry(QRect(224, 40, 81, 31));
        calcular->setStyleSheet(QLatin1String("background-color: rgb(85, 170, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";"));
        calcular->setAutoExclusive(true);
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(310, 40, 81, 31));
        borrar->setStyleSheet(QStringLiteral(""));
        x = new QDoubleSpinBox(centralWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(50, 40, 62, 22));
        x->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        x->setDecimals(2);
        x->setMinimum(-99);
        x->setSingleStep(0.5);
        error = new QDoubleSpinBox(centralWidget);
        error->setObjectName(QStringLiteral("error"));
        error->setEnabled(true);
        error->setGeometry(QRect(150, 40, 62, 22));
        error->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        error->setDecimals(4);
        error->setMinimum(-99);
        error->setSingleStep(0.001);
        iteracion = new QSpinBox(centralWidget);
        iteracion->setObjectName(QStringLiteral("iteracion"));
        iteracion->setGeometry(QRect(170, 80, 42, 22));
        iteracion->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        iteracion->setMinimum(0);
        iteracion->setMaximum(1000);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 21, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 40, 31, 21));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 80, 91, 21));
        label_3->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(20, 120, 431, 141));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Resultado->setFont(font);
        Resultado->setStyleSheet(QStringLiteral("color: rgb(0, 85, 0);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 10, 251, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        newton->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(newton);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        newton->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(newton);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        newton->setStatusBar(statusBar);

        retranslateUi(newton);
        QObject::connect(SALIR, SIGNAL(clicked()), newton, SLOT(close()));

        QMetaObject::connectSlotsByName(newton);
    } // setupUi

    void retranslateUi(QMainWindow *newton)
    {
        newton->setWindowTitle(QApplication::translate("newton", "newton", Q_NULLPTR));
        SALIR->setText(QApplication::translate("newton", "&Salir", Q_NULLPTR));
        calcular->setText(QApplication::translate("newton", "&Calcular", Q_NULLPTR));
        borrar->setText(QApplication::translate("newton", "&Borrar", Q_NULLPTR));
        label->setText(QApplication::translate("newton", "X0=", Q_NULLPTR));
        label_2->setText(QApplication::translate("newton", "Error", Q_NULLPTR));
        label_3->setText(QApplication::translate("newton", "Iteracion maxima", Q_NULLPTR));
        Resultado->setText(QString());
        label_4->setText(QApplication::translate("newton", "Metodo Newton-Raphson", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class newton: public Ui_newton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTON_H
