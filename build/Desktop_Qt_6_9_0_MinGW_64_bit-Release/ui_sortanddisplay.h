/********************************************************************************
** Form generated from reading UI file 'sortanddisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTANDDISPLAY_H
#define UI_SORTANDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SortAndDisplay
{
public:
    QLineEdit *lineSortBy;
    QTextBrowser *textBrowser;
    QPushButton *btnSubmit;

    void setupUi(QDialog *SortAndDisplay)
    {
        if (SortAndDisplay->objectName().isEmpty())
            SortAndDisplay->setObjectName("SortAndDisplay");
        SortAndDisplay->resize(320, 240);
        SortAndDisplay->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        lineSortBy = new QLineEdit(SortAndDisplay);
        lineSortBy->setObjectName("lineSortBy");
        lineSortBy->setGeometry(QRect(170, 60, 113, 31));
        lineSortBy->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        textBrowser = new QTextBrowser(SortAndDisplay);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 60, 111, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSubmit = new QPushButton(SortAndDisplay);
        btnSubmit->setObjectName("btnSubmit");
        btnSubmit->setGeometry(QRect(120, 170, 80, 24));
        btnSubmit->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(SortAndDisplay);

        QMetaObject::connectSlotsByName(SortAndDisplay);
    } // setupUi

    void retranslateUi(QDialog *SortAndDisplay)
    {
        SortAndDisplay->setWindowTitle(QCoreApplication::translate("SortAndDisplay", "Dialog", nullptr));
        lineSortBy->setText(QCoreApplication::translate("SortAndDisplay", "id/lokasi/tipe", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("SortAndDisplay", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Urutkan berdasar</p></body></html>", nullptr));
        btnSubmit->setText(QCoreApplication::translate("SortAndDisplay", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortAndDisplay: public Ui_SortAndDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTANDDISPLAY_H
