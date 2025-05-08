#include "dialogcreateuser.h"
#include "ui_dialogcreateuser.h"
#include "QMessageBox"
#include "QFile"
#include <QCryptographicHash>
#include "QDateTime"
#include "QDir"
#include "QRegularExpression"
#include "QRandomGenerator"

UserAccount::UserAccount(const QString& username,
                         const QString& password,
                         const QString& fullName,
                         const QString& email,
                         const QString& phone,
                         const QString &role)
    : m_username(username),
    m_password(password),
    m_fullName(fullName),
    m_email(email),
    m_phone(phone),
    m_role(role) {}

QString UserAccount::toCSV() const {
    return QString("%1,%2,%3,%4,%5,%6")
    .arg(m_username, m_password, m_fullName, m_email, m_phone, m_role);
}

QString hashPassword(const QString& password) {
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

QString generateRandomPassword(int length = 10) {
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString password;

    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(chars.length());
        password += chars.at(index);
    }

    return password;
}


DialogCreateUser::DialogCreateUser(const QString &creatorRole, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogCreateUser),
    m_creatorRole(creatorRole)
{
    ui->setupUi(this);
    if (m_creatorRole != "admin") {
        ui->comboRole->hide();
        ui->labelRole->hide();
    } else {
        ui->comboRole->clear();
        ui->comboRole->addItem("user");
        ui->comboRole->addItem("admin");
        ui->comboRole->show();
        ui->labelRole->show();
    }
}

DialogCreateUser::~DialogCreateUser()
{
    delete ui;
}

bool backupUserDataWithTimestamp() {
    QString srcFile = "account_list.csv";
    QString backupDir = "backups/";

    QDir dir;
    if (!dir.exists(backupDir)) {
        dir.mkpath(backupDir);
    }

    QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss");
    QString backupFile = backupDir + "users_backup_" + timestamp + ".csv";

    return QFile::copy(srcFile, backupFile);
}

void DialogCreateUser::on_btnCreate_clicked()
{
    QString username = ui->lineUsUserName->text();
    QString password = ui->lineUsPassword->text();
    QString fullname = ui->lineUsFullName->text();
    QString email = ui->lineUsEmail->text();
    QString phone = ui->lineUsPhone->text();
    QString role     = (m_creatorRole == "admin") ? ui->comboRole->currentText() : "user";

    QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@gmail\\.com$");
    if(!emailRegex.match(email).hasMatch()) {
        ui->labelEmailWarning->setText("Invalid Gmail address. Please enter a valid email.");
        ui->labelEmailWarning->setStyleSheet("color: red;");
        return;
    } else {
        ui->labelEmailWarning->clear();
    }

    if (username.isEmpty() || fullname.isEmpty() || email.isEmpty() || phone.isEmpty()) {
        QMessageBox::warning(this, "Missing information", "Please enter complete information.");
        return;
    }

    bool isTempPassword = false;

    if (m_creatorRole != "admin" && password.isEmpty()) {
        QMessageBox::warning(this, "Missing information", "User must provide a password.");
        return;
    }

    if (m_creatorRole == "admin" && password.isEmpty()) {
        password = generateRandomPassword();
        isTempPassword = true;

        QMessageBox::information(this, "Temporary Password Assigned",
                                 QString("Username: %1\nTemporary Password: %2")
                                     .arg(username)
                                     .arg(password));
    }


    UserAccount user(username, hashPassword(password), fullname, email, phone, role);

    QFile file("account_list.csv");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << user.toCSV() << "\n";
        file.close();
        if (backupUserDataWithTimestamp()) {
            QMessageBox::information(this, "Success", "Account created and backup successful.");
        } else {
            QMessageBox::warning(this,"Warning", "Account created successfully but cannot be backed up.");
        }
    } else {
        QMessageBox::critical(this, "Error!!", "Can't open the file.");
    }
    accept();


}


void DialogCreateUser::on_btnCancel_clicked()
{
    reject();
}
