#-------------------------------------------------
#
# Project created by QtCreator 2022-01-17T00:34:51
#
#-------------------------------------------------

QT       += core gui svg
QMAKE_CXXFLAGS += -std=c++0x

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SVGParsing
TEMPLATE = app


SOURCES += main.cpp\
        svgparsing.cpp

HEADERS  += svgparsing.h

FORMS    += svgparsing.ui
