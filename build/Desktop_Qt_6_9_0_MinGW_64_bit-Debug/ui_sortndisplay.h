/********************************************************************************
** Form generated from reading UI file 'sortndisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTNDISPLAY_H
#define UI_SORTNDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SortnDisplay
{
public:

    void setupUi(QDialog *SortnDisplay)
    {
        if (SortnDisplay->objectName().isEmpty())
            SortnDisplay->setObjectName("SortnDisplay");
        SortnDisplay->resize(320, 240);
        SortnDisplay->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(SortnDisplay);

        QMetaObject::connectSlotsByName(SortnDisplay);
    } // setupUi

    void retranslateUi(QDialog *SortnDisplay)
    {
        SortnDisplay->setWindowTitle(QCoreApplication::translate("SortnDisplay", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortnDisplay: public Ui_SortnDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTNDISPLAY_H
