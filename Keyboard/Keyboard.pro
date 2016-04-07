#-------------------------------------------------
#
# Project created by QtCreator 2016-04-05T15:58:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Keyboard
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    instruction.cpp

CONFIG += qtestlib

HEADERS  += mainwindow.h \
    instruction.h

FORMS    += mainwindow.ui
