QT += widgets

CONFIG += c++17 console
CONFIG -= app_bundle

SOURCES += TeamBaseProject.cpp \
           IoTNetwork.cpp \
           MainWindow.cpp \
           addmeasurement.cpp \
           addsensordialog.cpp \
           displaysensor.cpp \
           findsensors.cpp \
           getaverage.cpp \
           removesensor.cpp \
           sortndisplay.cpp \
           undomeasurement.cpp

HEADERS += MainWindow.h \
    IoTNetwork.h \
    addmeasurement.h \
    addsensordialog.h \
    displaysensor.h \
    findsensors.h \
    getaverage.h \
    removesensor.h \
    sortndisplay.h \
    undomeasurement.h

FORMS += mainwindow.ui \
    addmeasurement.ui \
    addsensordialog.ui \
    displaysensor.ui \
    findsensors.ui \
    getaverage.ui \
    removesensor.ui \
    sortndisplay.ui \
    undomeasurement.ui
