/********************************************************************************
** Form generated from reading UI file 'addmeasurement.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEASUREMENT_H
#define UI_ADDMEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddMeasurement
{
public:
    QTextEdit *textEdit_2;
    QLineEdit *lineValue;
    QTextEdit *textEdit;
    QPushButton *btnSubmit;
    QLineEdit *lineSensorID;

    void setupUi(QDialog *AddMeasurement)
    {
        if (AddMeasurement->objectName().isEmpty())
            AddMeasurement->setObjectName("AddMeasurement");
        AddMeasurement->resize(320, 240);
        AddMeasurement->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        textEdit_2 = new QTextEdit(AddMeasurement);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(40, 110, 111, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineValue = new QLineEdit(AddMeasurement);
        lineValue->setObjectName("lineValue");
        lineValue->setGeometry(QRect(170, 110, 113, 31));
        lineValue->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textEdit = new QTextEdit(AddMeasurement);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 60, 111, 31));
        textEdit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSubmit = new QPushButton(AddMeasurement);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setGeometry(QRect(120, 190, 80, 24));
        btnSubmit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineSensorID = new QLineEdit(AddMeasurement);
        lineSensorID->setObjectName("lineSensorID");
        lineSensorID->setGeometry(QRect(170, 60, 113, 31));
        lineSensorID->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(AddMeasurement);

        QMetaObject::connectSlotsByName(AddMeasurement);
    } // setupUi

    void retranslateUi(QDialog *AddMeasurement)
    {
        AddMeasurement->setWindowTitle(QCoreApplication::translate("AddMeasurement", "Dialog", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("AddMeasurement", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">NILAI</p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("AddMeasurement", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ID SENSOR</p></body></html>", nullptr));
        btnSubmit->setText(QCoreApplication::translate("AddMeasurement", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMeasurement: public Ui_AddMeasurement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEASUREMENT_H
