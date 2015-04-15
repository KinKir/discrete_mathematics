TEMPLATE = app
SOURCES +=  main.cpp\
    mainwindow.cpp  aboutdialog.cpp  helpbrowser.cpp \
    moduleonedialog.cpp  modulethreedialog.cpp\
    module/moduleonefunction.cpp  module/modulethreefunction.cpp\




HEADERS +=  about.h  window.h \
    module_one.h  module_three.h\
    mainwindow.h  aboutdialog.h  helpbrowser.h \
    moduleonedialog.h  modulethreedialog.h\
    module/moduleonefunction.h  module/modulethreefunction.h\



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
