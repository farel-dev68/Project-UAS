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
    QPushButton *btnAddMeasurement;
    QPushButton *btnGetAverage;
    QPushButton *btnDisplaySensor;
    QPushButton *btnFindSensor;
    QPushButton *btnUndoMeasurement;
    QPushButton *btnSortnDisplay;
    QPushButton *btnTestSensor;
    QTextBrowser *textOutput_2;
    QTextBrowser *textOutput_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(831, 598);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnAddSensor = new QPushButton(centralwidget);
        btnAddSensor->setObjectName("btnAddSensor");
        btnAddSensor->setGeometry(QRect(70, 490, 141, 51));
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
        btnRemoveSensor->setGeometry(QRect(250, 490, 141, 51));
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
        textOutput->setGeometry(QRect(70, 20, 481, 351));
        textOutput->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnAddMeasurement = new QPushButton(centralwidget);
        btnAddMeasurement->setObjectName("btnAddMeasurement");
        btnAddMeasurement->setGeometry(QRect(70, 410, 141, 51));
        btnAddMeasurement->setFont(font);
        btnAddMeasurement->setAutoFillBackground(false);
        btnAddMeasurement->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnAddMeasurement->setIconSize(QSize(16, 16));
        btnAddMeasurement->setAutoDefault(false);
        btnAddMeasurement->setFlat(false);
        btnGetAverage = new QPushButton(centralwidget);
        btnGetAverage->setObjectName("btnGetAverage");
        btnGetAverage->setGeometry(QRect(250, 410, 141, 51));
        btnGetAverage->setFont(font);
        btnGetAverage->setAutoFillBackground(false);
        btnGetAverage->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnGetAverage->setIconSize(QSize(16, 16));
        btnGetAverage->setAutoDefault(false);
        btnGetAverage->setFlat(false);
        btnDisplaySensor = new QPushButton(centralwidget);
        btnDisplaySensor->setObjectName("btnDisplaySensor");
        btnDisplaySensor->setGeometry(QRect(430, 490, 141, 51));
        btnDisplaySensor->setFont(font);
        btnDisplaySensor->setAutoFillBackground(false);
        btnDisplaySensor->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnDisplaySensor->setIconSize(QSize(16, 16));
        btnDisplaySensor->setAutoDefault(false);
        btnDisplaySensor->setFlat(false);
        btnFindSensor = new QPushButton(centralwidget);
        btnFindSensor->setObjectName("btnFindSensor");
        btnFindSensor->setGeometry(QRect(430, 410, 141, 51));
        btnFindSensor->setFont(font);
        btnFindSensor->setAutoFillBackground(false);
        btnFindSensor->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnFindSensor->setIconSize(QSize(16, 16));
        btnFindSensor->setAutoDefault(false);
        btnFindSensor->setFlat(false);
        btnUndoMeasurement = new QPushButton(centralwidget);
        btnUndoMeasurement->setObjectName("btnUndoMeasurement");
        btnUndoMeasurement->setGeometry(QRect(610, 490, 151, 51));
        btnUndoMeasurement->setFont(font);
        btnUndoMeasurement->setAutoFillBackground(false);
        btnUndoMeasurement->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnUndoMeasurement->setIconSize(QSize(16, 16));
        btnUndoMeasurement->setAutoDefault(false);
        btnUndoMeasurement->setFlat(false);
        btnSortnDisplay = new QPushButton(centralwidget);
        btnSortnDisplay->setObjectName("btnSortnDisplay");
        btnSortnDisplay->setGeometry(QRect(610, 410, 151, 51));
        btnSortnDisplay->setFont(font);
        btnSortnDisplay->setAutoFillBackground(false);
        btnSortnDisplay->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnSortnDisplay->setIconSize(QSize(16, 16));
        btnSortnDisplay->setAutoDefault(false);
        btnSortnDisplay->setFlat(false);
        btnTestSensor = new QPushButton(centralwidget);
        btnTestSensor->setObjectName("btnTestSensor");
        btnTestSensor->setGeometry(QRect(610, 330, 151, 51));
        btnTestSensor->setFont(font);
        btnTestSensor->setAutoFillBackground(false);
        btnTestSensor->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;\n"
""));
        btnTestSensor->setIconSize(QSize(16, 16));
        btnTestSensor->setAutoDefault(false);
        btnTestSensor->setFlat(false);
        textOutput_2 = new QTextBrowser(centralwidget);
        textOutput_2->setObjectName("textOutput_2");
        textOutput_2->setGeometry(QRect(600, 80, 181, 151));
        textOutput_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textOutput_3 = new QTextBrowser(centralwidget);
        textOutput_3->setObjectName("textOutput_3");
        textOutput_3->setGeometry(QRect(580, 20, 221, 41));
        textOutput_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 831, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btnAddSensor->setDefault(true);
        btnRemoveSensor->setDefault(true);
        btnAddMeasurement->setDefault(true);
        btnGetAverage->setDefault(true);
        btnDisplaySensor->setDefault(true);
        btnFindSensor->setDefault(true);
        btnUndoMeasurement->setDefault(true);
        btnSortnDisplay->setDefault(true);
        btnTestSensor->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAddSensor->setText(QCoreApplication::translate("MainWindow", "Tambah Sensor", nullptr));
        btnRemoveSensor->setText(QCoreApplication::translate("MainWindow", "Hapus Sensor", nullptr));
        btnAddMeasurement->setText(QCoreApplication::translate("MainWindow", "Tambah Pengukuran", nullptr));
        btnGetAverage->setText(QCoreApplication::translate("MainWindow", "Menghitung rata-rata", nullptr));
        btnDisplaySensor->setText(QCoreApplication::translate("MainWindow", "Tampilkan Sensor", nullptr));
        btnFindSensor->setText(QCoreApplication::translate("MainWindow", "Temukan Sensor", nullptr));
        btnUndoMeasurement->setText(QCoreApplication::translate("MainWindow", "Batalkan Pengukuran", nullptr));
        btnSortnDisplay->setText(QCoreApplication::translate("MainWindow", "Sort & Display", nullptr));
        btnTestSensor->setText(QCoreApplication::translate("MainWindow", "Pengujian 1000 sensor", nullptr));
        textOutput_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700;\">Kelompok</span></h2>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Muhgammad Nur Wicaksono<br />2. Nanda Riamawati<br />3. Adnan Wahyu Anggoro<br />4. Muhammad Rifqy Oktavian<br />5. Dimas Ikhwan Farel S.</p></body></html>", nullptr));
        textOutput_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<h2 style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700;\">Pemantauan sensor IOT</span></h2></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
