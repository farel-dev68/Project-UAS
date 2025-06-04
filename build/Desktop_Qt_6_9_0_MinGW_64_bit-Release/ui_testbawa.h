/********************************************************************************
** Form generated from reading UI file 'testbawa.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBAWA_H
#define UI_TESTBAWA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TestBawa
{
public:
    QLineEdit *lineMeasurement;
    QPushButton *btnSample;
    QLineEdit *lineSample;
    QPushButton *btnMeasurement;
    QPushButton *btn1000;

    void setupUi(QDialog *TestBawa)
    {
        if (TestBawa->objectName().isEmpty())
            TestBawa->setObjectName("TestBawa");
        TestBawa->resize(353, 279);
        TestBawa->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));
        lineMeasurement = new QLineEdit(TestBawa);
        lineMeasurement->setObjectName("lineMeasurement");
        lineMeasurement->setGeometry(QRect(190, 130, 131, 31));
        lineMeasurement->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnSample = new QPushButton(TestBawa);
        btnSample->setObjectName("btnSample");
        btnSample->setGeometry(QRect(29, 190, 111, 31));
        btnSample->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        lineSample = new QLineEdit(TestBawa);
        lineSample->setObjectName("lineSample");
        lineSample->setGeometry(QRect(22, 130, 131, 31));
        lineSample->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btnMeasurement = new QPushButton(TestBawa);
        btnMeasurement->setObjectName("btnMeasurement");
        btnMeasurement->setGeometry(QRect(200, 190, 111, 31));
        btnMeasurement->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        btn1000 = new QPushButton(TestBawa);
        btn1000->setObjectName("btn1000");
        btn1000->setGeometry(QRect(140, 50, 80, 31));
        btn1000->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));

        retranslateUi(TestBawa);

        QMetaObject::connectSlotsByName(TestBawa);
    } // setupUi

    void retranslateUi(QDialog *TestBawa)
    {
        TestBawa->setWindowTitle(QCoreApplication::translate("TestBawa", "Dialog", nullptr));
        btnSample->setText(QCoreApplication::translate("TestBawa", "random sample", nullptr));
        btnMeasurement->setText(QCoreApplication::translate("TestBawa", "ran measurement", nullptr));
        btn1000->setText(QCoreApplication::translate("TestBawa", "Test 1000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestBawa: public Ui_TestBawa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBAWA_H
