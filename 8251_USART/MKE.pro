#-------------------------------------------------
#
# Project created by QtCreator 2016-04-03T20:13:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MKE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chip_8251.cpp \
    instruction.cpp

HEADERS  += mainwindow.h \
    chip_8251.h \
    instruction.h

FORMS    += mainwindow.ui
