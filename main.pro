TEMPLATE = app
SOURCES +=  main.cpp  \
                        aboutdialog.cpp \
                        mainwindow.cpp \
                        helpbrowser.cpp \
                        moduleonedialog.cpp\
                        module/moduleonefunction.cpp


HEADERS +=  about.h aboutdialog.h \
                        window.h mainwindow.h module_one.h\
                        helpbrowser.h \
                        moduleonedialog.h\
                        module/moduleonefunctin.h\


CONFIG += release qt
QT += core gui
TARGET = main

RESOURCES += \
    res.qrc

UI_DIR = uis

OTHER_FILES += \
    doc/index.html \
    doc/two.html \
    doc/three.html \
    doc/one.html \
    doc/index.html \
    doc/four.html \
    doc/five.html
