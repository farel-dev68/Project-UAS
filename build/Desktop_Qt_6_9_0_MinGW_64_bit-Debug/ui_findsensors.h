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

QT_BEGIN_NAMESPACE

class Ui_FindSensors
{
public:

    void setupUi(QDialog *FindSensors)
    {
        if (FindSensors->objectName().isEmpty())
            FindSensors->setObjectName("FindSensors");
        FindSensors->resize(320, 240);
        FindSensors->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(FindSensors);

        QMetaObject::connectSlotsByName(FindSensors);
    } // setupUi

    void retranslateUi(QDialog *FindSensors)
    {
        FindSensors->setWindowTitle(QCoreApplication::translate("FindSensors", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindSensors: public Ui_FindSensors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSENSORS_H
