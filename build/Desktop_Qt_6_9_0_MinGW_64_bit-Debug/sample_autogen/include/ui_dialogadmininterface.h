/********************************************************************************
** Form generated from reading UI file 'dialogadmininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADMININTERFACE_H
#define UI_DIALOGADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAdminInterface
{
public:
    QGroupBox *groupBox;
    QPushButton *btnAdInformation;
    QPushButton *btnChangePass;

    void setupUi(QDialog *DialogAdminInterface)
    {
        if (DialogAdminInterface->objectName().isEmpty())
            DialogAdminInterface->setObjectName("DialogAdminInterface");
        DialogAdminInterface->resize(400, 300);
        groupBox = new QGroupBox(DialogAdminInterface);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 341, 241));
        btnAdInformation = new QPushButton(groupBox);
        btnAdInformation->setObjectName("btnAdInformation");
        btnAdInformation->setGeometry(QRect(90, 40, 141, 24));
        btnChangePass = new QPushButton(groupBox);
        btnChangePass->setObjectName("btnChangePass");
        btnChangePass->setGeometry(QRect(90, 80, 141, 24));

        retranslateUi(DialogAdminInterface);

        QMetaObject::connectSlotsByName(DialogAdminInterface);
    } // setupUi

    void retranslateUi(QDialog *DialogAdminInterface)
    {
        DialogAdminInterface->setWindowTitle(QCoreApplication::translate("DialogAdminInterface", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogAdminInterface", "Admin Interface", nullptr));
        btnAdInformation->setText(QCoreApplication::translate("DialogAdminInterface", "Information", nullptr));
        btnChangePass->setText(QCoreApplication::translate("DialogAdminInterface", "Change password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdminInterface: public Ui_DialogAdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMININTERFACE_H
