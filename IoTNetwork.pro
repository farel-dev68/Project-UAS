QT += widgets

CONFIG += c++17 console
CONFIG -= app_bundle

SOURCES += TeamBaseProject.cpp \
           IoTNetwork.cpp \
           MainWindow.cpp \
           addsensordialog.cpp

HEADERS += MainWindow.h \
    IoTNetwork.h \
    addsensordialog.h

FORMS += mainwindow.ui \
    addsensordialog.ui
