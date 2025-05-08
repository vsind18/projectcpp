#ifndef DIALOGCREATEUSER_H
#define DIALOGCREATEUSER_H

#include <QDialog>

namespace Ui {
class DialogCreateUser;
}

class DialogCreateUser : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCreateUser(const QString &creatorRole, QWidget *parent = nullptr);
    ~DialogCreateUser();

private slots:
    void on_btnCreate_clicked();

    void on_btnCancel_clicked();

private:
    Ui::DialogCreateUser *ui;
    QString m_creatorRole;
};

class UserAccount {
public:
    UserAccount(const QString& username,
                const QString& password,
                const QString& fullName,
                const QString& email,
                const QString& phone,
                const QString& role);

    QString toCSV() const;

private:
    QString m_username;
    QString m_password;
    QString m_fullName;
    QString m_email;
    QString m_phone;
    QString m_role;
};

#endif // DIALOGCREATEUSER_H
