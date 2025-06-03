/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnAddSensor;
    QPushButton *btnRemoveSensor;
    QTextBrowser *textOutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #87CEFA;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnAddSensor = new QPushButton(centralwidget);
        btnAddSensor->setObjectName("btnAddSensor");
        btnAddSensor->setGeometry(QRect(100, 480, 141, 51));
        QFont font;
        font.setItalic(false);
        btnAddSensor->setFont(font);
        btnAddSensor->setAutoFillBackground(false);
        btnAddSensor->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnAddSensor->setIconSize(QSize(16, 16));
        btnAddSensor->setAutoDefault(false);
        btnAddSensor->setFlat(false);
        btnRemoveSensor = new QPushButton(centralwidget);
        btnRemoveSensor->setObjectName("btnRemoveSensor");
        btnRemoveSensor->setGeometry(QRect(330, 480, 141, 51));
        btnRemoveSensor->setFont(font);
        btnRemoveSensor->setAutoFillBackground(false);
        btnRemoveSensor->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnRemoveSensor->setIconSize(QSize(16, 16));
        btnRemoveSensor->setAutoDefault(false);
        btnRemoveSensor->setFlat(false);
        textOutput = new QTextBrowser(centralwidget);
        textOutput->setObjectName("textOutput");
        textOutput->setGeometry(QRect(190, 100, 391, 281));
        textOutput->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btnAddSensor->setDefault(true);
        btnRemoveSensor->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAddSensor->setText(QCoreApplication::translate("MainWindow", "Tambah Sensor", nullptr));
        btnRemoveSensor->setText(QCoreApplication::translate("MainWindow", "Hapus Sensor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
