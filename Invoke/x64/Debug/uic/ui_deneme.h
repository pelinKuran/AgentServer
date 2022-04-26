/********************************************************************************
** Form generated from reading UI file 'deneme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENEME_H
#define UI_DENEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deneme
{
public:

    void setupUi(QWidget *deneme)
    {
        if (deneme->objectName().isEmpty())
            deneme->setObjectName(QString::fromUtf8("deneme"));
        deneme->resize(400, 300);

        retranslateUi(deneme);

        QMetaObject::connectSlotsByName(deneme);
    } // setupUi

    void retranslateUi(QWidget *deneme)
    {
        deneme->setWindowTitle(QCoreApplication::translate("deneme", "deneme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deneme: public Ui_deneme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENEME_H
