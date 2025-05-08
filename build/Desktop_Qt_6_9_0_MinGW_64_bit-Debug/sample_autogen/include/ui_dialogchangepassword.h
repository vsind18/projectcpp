/********************************************************************************
** Form generated from reading UI file 'dialogchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHANGEPASSWORD_H
#define UI_DIALOGCHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogChangePassword
{
public:
    QLabel *labelTitle;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblUsername;
    QLabel *lblCurrentPassword;
    QLabel *lblEnNewPass;
    QLabel *lblConfirmNewPass;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineUserName;
    QLineEdit *lineCurrentPass;
    QLineEdit *lineEnNewPass;
    QLineEdit *lineConfirmNewPass;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *DialogChangePassword)
    {
        if (DialogChangePassword->objectName().isEmpty())
            DialogChangePassword->setObjectName("DialogChangePassword");
        DialogChangePassword->resize(400, 300);
        labelTitle = new QLabel(DialogChangePassword);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setGeometry(QRect(120, 30, 181, 16));
        widget = new QWidget(DialogChangePassword);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 70, 341, 171));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblUsername = new QLabel(widget);
        lblUsername->setObjectName("lblUsername");

        verticalLayout->addWidget(lblUsername);

        lblCurrentPassword = new QLabel(widget);
        lblCurrentPassword->setObjectName("lblCurrentPassword");

        verticalLayout->addWidget(lblCurrentPassword);

        lblEnNewPass = new QLabel(widget);
        lblEnNewPass->setObjectName("lblEnNewPass");

        verticalLayout->addWidget(lblEnNewPass);

        lblConfirmNewPass = new QLabel(widget);
        lblConfirmNewPass->setObjectName("lblConfirmNewPass");

        verticalLayout->addWidget(lblConfirmNewPass);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineUserName = new QLineEdit(widget);
        lineUserName->setObjectName("lineUserName");

        verticalLayout_2->addWidget(lineUserName);

        lineCurrentPass = new QLineEdit(widget);
        lineCurrentPass->setObjectName("lineCurrentPass");
        lineCurrentPass->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineCurrentPass);

        lineEnNewPass = new QLineEdit(widget);
        lineEnNewPass->setObjectName("lineEnNewPass");
        lineEnNewPass->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineEnNewPass);

        lineConfirmNewPass = new QLineEdit(widget);
        lineConfirmNewPass->setObjectName("lineConfirmNewPass");
        lineConfirmNewPass->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineConfirmNewPass);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(DialogChangePassword);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(230, 250, 158, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(widget1);
        btnOK->setObjectName("btnOK");

        horizontalLayout_2->addWidget(btnOK);

        btnCancel = new QPushButton(widget1);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_2->addWidget(btnCancel);


        retranslateUi(DialogChangePassword);

        QMetaObject::connectSlotsByName(DialogChangePassword);
    } // setupUi

    void retranslateUi(QDialog *DialogChangePassword)
    {
        DialogChangePassword->setWindowTitle(QCoreApplication::translate("DialogChangePassword", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("DialogChangePassword", "=====Change password =====", nullptr));
        lblUsername->setText(QCoreApplication::translate("DialogChangePassword", "Enter  username", nullptr));
        lblCurrentPassword->setText(QCoreApplication::translate("DialogChangePassword", "Enter  current password", nullptr));
        lblEnNewPass->setText(QCoreApplication::translate("DialogChangePassword", "Enter  new password", nullptr));
        lblConfirmNewPass->setText(QCoreApplication::translate("DialogChangePassword", "Confirm new password", nullptr));
        lineCurrentPass->setText(QString());
        lineConfirmNewPass->setText(QString());
        btnOK->setText(QCoreApplication::translate("DialogChangePassword", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("DialogChangePassword", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChangePassword: public Ui_DialogChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHANGEPASSWORD_H
