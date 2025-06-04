/********************************************************************************
** Form generated from reading UI file 'getaverage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETAVERAGE_H
#define UI_GETAVERAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_GetAverage
{
public:

    void setupUi(QDialog *GetAverage)
    {
        if (GetAverage->objectName().isEmpty())
            GetAverage->setObjectName("GetAverage");
        GetAverage->resize(320, 240);
        GetAverage->setStyleSheet(QString::fromUtf8("background-color: #0078D7;"));

        retranslateUi(GetAverage);

        QMetaObject::connectSlotsByName(GetAverage);
    } // setupUi

    void retranslateUi(QDialog *GetAverage)
    {
        GetAverage->setWindowTitle(QCoreApplication::translate("GetAverage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAverage: public Ui_GetAverage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETAVERAGE_H
