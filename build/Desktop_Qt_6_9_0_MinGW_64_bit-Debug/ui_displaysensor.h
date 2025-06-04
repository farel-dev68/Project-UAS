/********************************************************************************
** Form generated from reading UI file 'displaysensor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSENSOR_H
#define UI_DISPLAYSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DisplaySensor
{
public:

    void setupUi(QDialog *DisplaySensor)
    {
        if (DisplaySensor->objectName().isEmpty())
            DisplaySensor->setObjectName("DisplaySensor");
        DisplaySensor->resize(320, 240);
        DisplaySensor->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(DisplaySensor);

        QMetaObject::connectSlotsByName(DisplaySensor);
    } // setupUi

    void retranslateUi(QDialog *DisplaySensor)
    {
        DisplaySensor->setWindowTitle(QCoreApplication::translate("DisplaySensor", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplaySensor: public Ui_DisplaySensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSENSOR_H
