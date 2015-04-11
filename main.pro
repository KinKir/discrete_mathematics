TEMPLATE = app
SOURCES +=  main.cpp  \
                        aboutdialog.cpp \
                        mainwindow.cpp \
                        helpbrowser.cpp

HEADERS +=  about.h aboutdialog.h \
                        window.h mainwindow.h \
                        helpbrowser.h

CONFIG += release qt
QT += core gui
TARGET = main

RESOURCES += \
    res.qrc

OTHER_FILES += \
    doc/index.html \
    doc/two.html \
    doc/three.html \
    doc/one.html \
    doc/index.html \
    doc/four.html \
    doc/five.html
