/********************************************************************************
** Form generated from reading UI file 'dialoguserinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUSERINTERFACE_H
#define UI_DIALOGUSERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogUserInterface
{
public:
    QGroupBox *groupBox;
    QPushButton *btnPerInformation;
    QPushButton *btnChangePassWord;

    void setupUi(QDialog *DialogUserInterface)
    {
        if (DialogUserInterface->objectName().isEmpty())
            DialogUserInterface->setObjectName("DialogUserInterface");
        DialogUserInterface->resize(400, 300);
        groupBox = new QGroupBox(DialogUserInterface);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 351, 231));
        btnPerInformation = new QPushButton(groupBox);
        btnPerInformation->setObjectName("btnPerInformation");
        btnPerInformation->setGeometry(QRect(70, 50, 181, 24));
        btnChangePassWord = new QPushButton(groupBox);
        btnChangePassWord->setObjectName("btnChangePassWord");
        btnChangePassWord->setGeometry(QRect(70, 90, 181, 24));

        retranslateUi(DialogUserInterface);

        QMetaObject::connectSlotsByName(DialogUserInterface);
    } // setupUi

    void retranslateUi(QDialog *DialogUserInterface)
    {
        DialogUserInterface->setWindowTitle(QCoreApplication::translate("DialogUserInterface", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogUserInterface", "User Interface", nullptr));
        btnPerInformation->setText(QCoreApplication::translate("DialogUserInterface", "Personal information", nullptr));
        btnChangePassWord->setText(QCoreApplication::translate("DialogUserInterface", "Change password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogUserInterface: public Ui_DialogUserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUSERINTERFACE_H
