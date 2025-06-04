QT += widgets

CONFIG += c++17 console
CONFIG -= app_bundle

SOURCES += TeamBaseProject.cpp \
           IoTNetwork.cpp \
           MainWindow.cpp \
           addmeasurement.cpp \
           addsensordialog.cpp \
           displaymeasurement.cpp \
           findsensors.cpp \
           getaverage.cpp \
           removesensor.cpp \
           testbawa.cpp \
           undomeasurement.cpp

HEADERS += MainWindow.h \
    IoTNetwork.h \
    addmeasurement.h \
    addsensordialog.h \
    displaymeasurement.h \
    findsensors.h \
    getaverage.h \
    removesensor.h \
    testbawa.h \
    undomeasurement.h

FORMS += mainwindow.ui \
    addmeasurement.ui \
    addsensordialog.ui \
    displaymeasurement.ui \
    findsensors.ui \
    getaverage.ui \
    removesensor.ui \
    testbawa.ui \
    undomeasurement.ui
