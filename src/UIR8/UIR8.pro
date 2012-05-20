#-------------------------------------------------
#
# Project created by QtCreator 2012-05-14T13:02:38
#
#-------------------------------------------------

QT       += core gui

TARGET = UIR8
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

unix:!macx:!symbian: LIBS += -L$$PWD/../../../../usr/lib/ -lselinux

INCLUDEPATH += $$PWD/../../../../usr/include
DEPENDPATH += $$PWD/../../../../usr/include
