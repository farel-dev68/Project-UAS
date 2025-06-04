/********************************************************************************
** Form generated from reading UI file 'removesensor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESENSOR_H
#define UI_REMOVESENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_RemoveSensor
{
public:

    void setupUi(QDialog *RemoveSensor)
    {
        if (RemoveSensor->objectName().isEmpty())
            RemoveSensor->setObjectName("RemoveSensor");
        RemoveSensor->resize(320, 240);
        RemoveSensor->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(RemoveSensor);

        QMetaObject::connectSlotsByName(RemoveSensor);
    } // setupUi

    void retranslateUi(QDialog *RemoveSensor)
    {
        RemoveSensor->setWindowTitle(QCoreApplication::translate("RemoveSensor", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveSensor: public Ui_RemoveSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESENSOR_H
