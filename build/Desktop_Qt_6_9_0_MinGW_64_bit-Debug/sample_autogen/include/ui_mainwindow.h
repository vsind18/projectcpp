/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupLogIn;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbluserName;
    QLabel *lblpassWord;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditUserName;
    QLineEdit *lineEditPassWord;
    QVBoxLayout *verticalLayout;
    QPushButton *btnlogIn;
    QPushButton *btnCreate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(557, 315);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupLogIn = new QGroupBox(centralwidget);
        groupLogIn->setObjectName("groupLogIn");
        groupLogIn->setGeometry(QRect(270, 40, 251, 201));
        widget = new QWidget(groupLogIn);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 51, 205, 118));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lbluserName = new QLabel(widget);
        lbluserName->setObjectName("lbluserName");

        verticalLayout_2->addWidget(lbluserName);

        lblpassWord = new QLabel(widget);
        lblpassWord->setObjectName("lblpassWord");

        verticalLayout_2->addWidget(lblpassWord);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEditUserName = new QLineEdit(widget);
        lineEditUserName->setObjectName("lineEditUserName");

        verticalLayout_3->addWidget(lineEditUserName);

        lineEditPassWord = new QLineEdit(widget);
        lineEditPassWord->setObjectName("lineEditPassWord");

        verticalLayout_3->addWidget(lineEditPassWord);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnlogIn = new QPushButton(widget);
        btnlogIn->setObjectName("btnlogIn");

        verticalLayout->addWidget(btnlogIn);

        btnCreate = new QPushButton(widget);
        btnCreate->setObjectName("btnCreate");

        verticalLayout->addWidget(btnCreate);


        verticalLayout_4->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 557, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupLogIn->setTitle(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        lbluserName->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        lblpassWord->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEditPassWord->setText(QString());
        btnlogIn->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        btnCreate->setText(QCoreApplication::translate("MainWindow", "Create a new account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
