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

QT_BEGIN_NAMESPACE

class Ui_UndoMeasurement
{
public:

    void setupUi(QDialog *UndoMeasurement)
    {
        if (UndoMeasurement->objectName().isEmpty())
            UndoMeasurement->setObjectName("UndoMeasurement");
        UndoMeasurement->resize(320, 240);
        UndoMeasurement->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(UndoMeasurement);

        QMetaObject::connectSlotsByName(UndoMeasurement);
    } // setupUi

    void retranslateUi(QDialog *UndoMeasurement)
    {
        UndoMeasurement->setWindowTitle(QCoreApplication::translate("UndoMeasurement", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UndoMeasurement: public Ui_UndoMeasurement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDOMEASUREMENT_H
