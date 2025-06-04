/********************************************************************************
** Form generated from reading UI file 'addsensordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSENSORDIALOG_H
#define UI_ADDSENSORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddSensorDialog
{
public:
    QLineEdit *lineSensorID;
    QLineEdit *lineLocation;
    QLineEdit *lineType;
    QPushButton *btnSubmit;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;

    void setupUi(QDialog *AddSensorDialog)
    {
        if (AddSensorDialog->objectName().isEmpty())
            AddSensorDialog->setObjectName("AddSensorDialog");
        AddSensorDialog->resize(320, 240);
        AddSensorDialog->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        lineSensorID = new QLineEdit(AddSensorDialog);
        lineSensorID->setObjectName("lineSensorID");
        lineSensorID->setGeometry(QRect(160, 40, 113, 31));
        lineSensorID->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineLocation = new QLineEdit(AddSensorDialog);
        lineLocation->setObjectName("lineLocation");
        lineLocation->setGeometry(QRect(160, 90, 113, 31));
        lineLocation->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineType = new QLineEdit(AddSensorDialog);
        lineType->setObjectName("lineType");
        lineType->setGeometry(QRect(160, 140, 113, 31));
        lineType->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSubmit = new QPushButton(AddSensorDialog);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setGeometry(QRect(110, 190, 80, 24));
        btnSubmit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textBrowser = new QTextBrowser(AddSensorDialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 40, 111, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textEdit_2 = new QTextEdit(AddSensorDialog);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 90, 111, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textEdit_3 = new QTextEdit(AddSensorDialog);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 140, 111, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(AddSensorDialog);

        QMetaObject::connectSlotsByName(AddSensorDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSensorDialog)
    {
        AddSensorDialog->setWindowTitle(QCoreApplication::translate("AddSensorDialog", "Dialog", nullptr));
        btnSubmit->setText(QCoreApplication::translate("AddSensorDialog", "SUBMIT", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("AddSensorDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ID SENSOR</p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("AddSensorDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LOKASI SENSOR</p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("AddSensorDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TIPE SENSOR</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSensorDialog: public Ui_AddSensorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSENSORDIALOG_H
