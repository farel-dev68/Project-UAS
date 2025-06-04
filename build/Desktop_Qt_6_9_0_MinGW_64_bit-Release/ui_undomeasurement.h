/********************************************************************************
** Form generated from reading UI file 'undomeasurement.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNDOMEASUREMENT_H
#define UI_UNDOMEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UndoMeasurement
{
public:
    QTextBrowser *textBrowser;
    QPushButton *btnSubmit;
    QLineEdit *lineSensorID;

    void setupUi(QDialog *UndoMeasurement)
    {
        if (UndoMeasurement->objectName().isEmpty())
            UndoMeasurement->setObjectName("UndoMeasurement");
        UndoMeasurement->resize(320, 240);
        UndoMeasurement->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        textBrowser = new QTextBrowser(UndoMeasurement);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 70, 111, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSubmit = new QPushButton(UndoMeasurement);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setGeometry(QRect(120, 180, 80, 24));
        btnSubmit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineSensorID = new QLineEdit(UndoMeasurement);
        lineSensorID->setObjectName("lineSensorID");
        lineSensorID->setGeometry(QRect(170, 70, 113, 31));
        lineSensorID->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(UndoMeasurement);

        QMetaObject::connectSlotsByName(UndoMeasurement);
    } // setupUi

    void retranslateUi(QDialog *UndoMeasurement)
    {
        UndoMeasurement->setWindowTitle(QCoreApplication::translate("UndoMeasurement", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("UndoMeasurement", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ID SENSOR</p></body></html>", nullptr));
        btnSubmit->setText(QCoreApplication::translate("UndoMeasurement", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UndoMeasurement: public Ui_UndoMeasurement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDOMEASUREMENT_H
