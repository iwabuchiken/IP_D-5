#-------------------------------------------------
#
# Project created by QtCreator 2014-05-16T11:22:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IP_D-5_v-5_0
TEMPLATE = app


SOURCES += main.cpp\
        pngconverter.cpp \
    textedit.cpp \
    assistant.cpp \
    findfiledialog.cpp

HEADERS  += pngconverter.h \
    include/textedit.h \
    include/assistant.h \
    include/findfiledialog.h \
    ui_pngconverter.h

FORMS    += pngconverter.ui

OTHER_FILES += \
    readme.txt
