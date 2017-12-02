#-------------------------------------------------
#
# Project created by QtCreator 2017-10-15T12:50:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proyectointegrador
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    bissec.cpp \
    eliminacion.cpp \
    interpolacion.cpp \
    main.cpp \
    metodosnumericos.cpp \
    newton.cpp \
    puntofijo.cpp \
    rlineal.cpp \
    rmultiple.cpp \
    seidel.cpp \
    derivacion.cpp \
    integracionn.cpp \
    euler.cpp \
    kutta.cpp

HEADERS += \
    bissec.h \
    eliminacion.h \
    interpolacion.h \
    metodosnumericos.h \
    newton.h \
    puntofijo.h \
    rlineal.h \
    rmultiple.h \
    seidel.h \
    derivacion.h \
    integracionn.h \
    euler.h \
    kutta.h

FORMS += \
    bissec.ui \
    eliminacion.ui \
    interpolacion.ui \
    metodosnumericos.ui \
    newton.ui \
    puntofijo.ui \
    rlineal.ui \
    rmultiple.ui \
    seidel.ui \
    derivacion.ui \
    integracionn.ui \
    euler.ui \
    kutta.ui

SUBDIRS += \
    proyectointegrador.pro
