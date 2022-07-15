#-------------------------------------------------
#
# Project created by QtCreator 2016-12-20T20:50:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Rahasa
TEMPLATE = app


SOURCES += main.cpp\
        startup.cpp \
    encryptform.cpp \
    decryptform.cpp \
    core.cpp \
    encryption.cpp

HEADERS  += startup.h \
    encryptform.h \
    decryptform.h \
    core.h \
    encryption.h

FORMS    += startup.ui \
    encryptform.ui \
    decryptform.ui

RESOURCES += \
    raharesources.qrc
