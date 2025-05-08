#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogcreateuser.h"
#include "dialoguserinterface.h"
#include "dialogadmininterface.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnlogIn_clicked();

    void on_btnCreate_clicked();

private:
    Ui::MainWindow *ui;
    DialogCreateUser *newUser;
    DialogUserInterface *newUserInterface;
    DialogAdminInterface *newAdminInterface;
    QString m_currentUserRole;
};
#endif // MAINWINDOW_H
