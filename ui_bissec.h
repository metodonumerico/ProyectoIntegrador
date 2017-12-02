/********************************************************************************
** Form generated from reading UI file 'bissec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BISSEC_H
#define UI_BISSEC_H

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

class Ui_Bissec
{
public:
    QWidget *centralWidget;
    QPushButton *Evaluar;
    QLabel *inicial;
    QLabel *final_2;
    QLabel *error;
    QPushButton *CLOSE;
    QLabel *label;
    QPushButton *Clear;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *Resultado;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Bissec)
    {
        if (Bissec->objectName().isEmpty())
            Bissec->setObjectName(QStringLiteral("Bissec"));
        Bissec->resize(400, 300);
        Bissec->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Bissec);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Evaluar = new QPushButton(centralWidget);
        Evaluar->setObjectName(QStringLiteral("Evaluar"));
        Evaluar->setGeometry(QRect(260, 20, 101, 41));
        Evaluar->setStyleSheet(QStringLiteral(""));
        inicial = new QLabel(centralWidget);
        inicial->setObjectName(QStringLiteral("inicial"));
        inicial->setGeometry(QRect(32, 58, 20, 16));
        final_2 = new QLabel(centralWidget);
        final_2->setObjectName(QStringLiteral("final_2"));
        final_2->setGeometry(QRect(32, 84, 20, 16));
        error = new QLabel(centralWidget);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(32, 110, 24, 16));
        CLOSE = new QPushButton(centralWidget);
        CLOSE->setObjectName(QStringLiteral("CLOSE"));
        CLOSE->setGeometry(QRect(260, 140, 101, 41));
        CLOSE->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(27, 191, 101, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(260, 80, 101, 41));
        Clear->setStyleSheet(QStringLiteral(""));
        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(75, 58, 53, 20));
        doubleSpinBox_3->setStyleSheet(QStringLiteral(""));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(75, 110, 51, 21));
        doubleSpinBox->setStyleSheet(QStringLiteral(""));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(75, 84, 53, 20));
        doubleSpinBox_2->setStyleSheet(QStringLiteral(""));
        Resultado = new QLabel(centralWidget);
        Resultado->setObjectName(QStringLiteral("Resultado"));
        Resultado->setGeometry(QRect(160, 200, 141, 61));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Resultado->setFont(font1);
        Resultado->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0)"));
        Bissec->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Bissec);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Bissec->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Bissec);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Bissec->setStatusBar(statusBar);

        retranslateUi(Bissec);

        QMetaObject::connectSlotsByName(Bissec);
    } // setupUi

    void retranslateUi(QMainWindow *Bissec)
    {
        Bissec->setWindowTitle(QApplication::translate("Bissec", "Bissec", Q_NULLPTR));
        Evaluar->setText(QApplication::translate("Bissec", "&Evaluar", Q_NULLPTR));
        inicial->setText(QApplication::translate("Bissec", "X1=", Q_NULLPTR));
        final_2->setText(QApplication::translate("Bissec", "X2=", Q_NULLPTR));
        error->setText(QApplication::translate("Bissec", "Error", Q_NULLPTR));
        CLOSE->setText(QApplication::translate("Bissec", "&Salir", Q_NULLPTR));
        label->setText(QApplication::translate("Bissec", "Resultado", Q_NULLPTR));
        Clear->setText(QApplication::translate("Bissec", "&Borrar", Q_NULLPTR));
        Resultado->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bissec: public Ui_Bissec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BISSEC_H
