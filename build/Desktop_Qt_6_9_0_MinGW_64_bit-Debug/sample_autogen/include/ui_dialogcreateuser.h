/********************************************************************************
** Form generated from reading UI file 'dialogcreateuser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEUSER_H
#define UI_DIALOGCREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCreateUser
{
public:
    QGroupBox *groupInformationUser;
    QLabel *labelEmailWarning;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCreate;
    QPushButton *btnCancel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblUserName;
    QLabel *lblPassWord;
    QLabel *lblFullName;
    QLabel *lblEmail;
    QLabel *lblPhone;
    QLabel *labelRole;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineUsUserName;
    QLineEdit *lineUsPassword;
    QLineEdit *lineUsFullName;
    QLineEdit *lineUsEmail;
    QLineEdit *lineUsPhone;
    QComboBox *comboRole;

    void setupUi(QDialog *DialogCreateUser)
    {
        if (DialogCreateUser->objectName().isEmpty())
            DialogCreateUser->setObjectName("DialogCreateUser");
        DialogCreateUser->resize(400, 300);
        groupInformationUser = new QGroupBox(DialogCreateUser);
        groupInformationUser->setObjectName("groupInformationUser");
        groupInformationUser->setGeometry(QRect(10, 10, 381, 281));
        labelEmailWarning = new QLabel(groupInformationUser);
        labelEmailWarning->setObjectName("labelEmailWarning");
        labelEmailWarning->setGeometry(QRect(40, 230, 321, 16));
        widget = new QWidget(groupInformationUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 250, 158, 31));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnCreate = new QPushButton(widget);
        btnCreate->setObjectName("btnCreate");

        horizontalLayout_2->addWidget(btnCreate);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout_2->addWidget(btnCancel);

        widget1 = new QWidget(groupInformationUser);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 22, 321, 201));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblUserName = new QLabel(widget1);
        lblUserName->setObjectName("lblUserName");

        verticalLayout->addWidget(lblUserName);

        lblPassWord = new QLabel(widget1);
        lblPassWord->setObjectName("lblPassWord");

        verticalLayout->addWidget(lblPassWord);

        lblFullName = new QLabel(widget1);
        lblFullName->setObjectName("lblFullName");

        verticalLayout->addWidget(lblFullName);

        lblEmail = new QLabel(widget1);
        lblEmail->setObjectName("lblEmail");

        verticalLayout->addWidget(lblEmail);

        lblPhone = new QLabel(widget1);
        lblPhone->setObjectName("lblPhone");

        verticalLayout->addWidget(lblPhone);

        labelRole = new QLabel(widget1);
        labelRole->setObjectName("labelRole");

        verticalLayout->addWidget(labelRole);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineUsUserName = new QLineEdit(widget1);
        lineUsUserName->setObjectName("lineUsUserName");

        verticalLayout_2->addWidget(lineUsUserName);

        lineUsPassword = new QLineEdit(widget1);
        lineUsPassword->setObjectName("lineUsPassword");

        verticalLayout_2->addWidget(lineUsPassword);

        lineUsFullName = new QLineEdit(widget1);
        lineUsFullName->setObjectName("lineUsFullName");

        verticalLayout_2->addWidget(lineUsFullName);

        lineUsEmail = new QLineEdit(widget1);
        lineUsEmail->setObjectName("lineUsEmail");

        verticalLayout_2->addWidget(lineUsEmail);

        lineUsPhone = new QLineEdit(widget1);
        lineUsPhone->setObjectName("lineUsPhone");

        verticalLayout_2->addWidget(lineUsPhone);

        comboRole = new QComboBox(widget1);
        comboRole->setObjectName("comboRole");

        verticalLayout_2->addWidget(comboRole);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(DialogCreateUser);

        QMetaObject::connectSlotsByName(DialogCreateUser);
    } // setupUi

    void retranslateUi(QDialog *DialogCreateUser)
    {
        DialogCreateUser->setWindowTitle(QCoreApplication::translate("DialogCreateUser", "Dialog", nullptr));
        groupInformationUser->setTitle(QCoreApplication::translate("DialogCreateUser", "Information", nullptr));
        labelEmailWarning->setText(QString());
        btnCreate->setText(QCoreApplication::translate("DialogCreateUser", "Create", nullptr));
        btnCancel->setText(QCoreApplication::translate("DialogCreateUser", "Cancel", nullptr));
        lblUserName->setText(QCoreApplication::translate("DialogCreateUser", "Username", nullptr));
        lblPassWord->setText(QCoreApplication::translate("DialogCreateUser", "Password", nullptr));
        lblFullName->setText(QCoreApplication::translate("DialogCreateUser", "Full name", nullptr));
        lblEmail->setText(QCoreApplication::translate("DialogCreateUser", "Email", nullptr));
        lblPhone->setText(QCoreApplication::translate("DialogCreateUser", "Phone", nullptr));
        labelRole->setText(QCoreApplication::translate("DialogCreateUser", "Role", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCreateUser: public Ui_DialogCreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEUSER_H
