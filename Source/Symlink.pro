#-------------------------------------------------
#
# Project created by QtCreator 2017-05-31T18:39:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Symlink
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    finished.cpp \
    mkdirectory.cpp \
    dirresult.cpp \
    manlinkname.cpp \
    error.cpp

HEADERS  += mainwindow.h \
    finished.h \
    mkdirectory.h \
    dirresult.h \
    manlinkname.h \
    error.h

FORMS    += mainwindow.ui \
    finished.ui \
    mkdirectory.ui \
    dirresult.ui \
    manlinkname.ui \
    error.ui
