#-------------------------------------------------
#
# Project created by QtCreator 2018-04-08T06:41:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testGraphic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    line.cpp \
    point.cpp \
    rectangle.cpp \
    house.cpp \
    boy.cpp

HEADERS  += mainwindow.h \
    line.h \
    point.h \
    rectangle.h \
    house.h \
    boy.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
