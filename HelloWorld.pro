#-------------------------------------------------
#
# Project created by QtCreator 2016-12-07T08:14:08
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connectdlg.cpp

HEADERS  += mainwindow.h \
    connectdlg.h

FORMS    += mainwindow.ui \
    connectdlg.ui
