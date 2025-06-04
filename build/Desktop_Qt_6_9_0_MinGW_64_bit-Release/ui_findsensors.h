/********************************************************************************
** Form generated from reading UI file 'findsensors.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSENSORS_H
#define UI_FINDSENSORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_FindSensors
{
public:
    QTextBrowser *textBrowser_2;
    QLineEdit *lineLocation;
    QPushButton *btnSubmit;

    void setupUi(QDialog *FindSensors)
    {
        if (FindSensors->objectName().isEmpty())
            FindSensors->setObjectName("FindSensors");
        FindSensors->resize(320, 240);
        FindSensors->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        textBrowser_2 = new QTextBrowser(FindSensors);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(40, 80, 111, 31));
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineLocation = new QLineEdit(FindSensors);
        lineLocation->setObjectName("lineLocation");
        lineLocation->setGeometry(QRect(170, 80, 113, 31));
        lineLocation->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSubmit = new QPushButton(FindSensors);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setGeometry(QRect(120, 180, 80, 24));
        btnSubmit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(FindSensors);

        QMetaObject::connectSlotsByName(FindSensors);
    } // setupUi

    void retranslateUi(QDialog *FindSensors)
    {
        FindSensors->setWindowTitle(QCoreApplication::translate("FindSensors", "Dialog", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("FindSensors", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LOKASI SENSOR</p></body></html>", nullptr));
        btnSubmit->setText(QCoreApplication::translate("FindSensors", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindSensors: public Ui_FindSensors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSENSORS_H
