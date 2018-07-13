
QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mylibrary
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
UI_DIR=./UI

SOURCES += main.cpp\
        mainwindow.cpp \
    register.cpp \
    insert.cpp \
    register.cpp

HEADERS  += mainwindow.h \
    register.h \
    insert.h \
    register.h

FORMS    += mainwindow.ui \
    insert.ui \
    register.ui

RC_ICONS = myico.ico

RESOURCES += \
    image.qrc
