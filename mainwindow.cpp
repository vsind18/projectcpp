#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QFile"
#include <QCryptographicHash>

QString hashPasswordExtract(const QString& password) {
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

void createInitialAdminAccount() {
    QFile file("account_list.csv");
    if (!file.exists()) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            QString adminUsername = "admin";
            QString adminPassword = hashPasswordExtract("admin2025");
            QString adminFullname = "Admin1";
            QString adminEmail = "admin1@gmail.com";
            QString adminPhone = "012345678";
            QString adminRole = "admin";
            out << adminUsername << "," << adminPassword <<  "," << adminFullname  <<"," << adminEmail << "," << adminPhone << "," << adminRole <<"\n" ;
            file.close();
        }
    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEditPassWord->setEchoMode(QLineEdit::Password);
    createInitialAdminAccount();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnlogIn_clicked()
{
    QString username = ui->lineEditUserName->text();
    QString password = hashPasswordExtract(ui->lineEditPassWord->text());
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Missing information", "Please enter complete information.");
        return;
    }

    QFile file("account_list.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,  "Error!!", "Can't open the file.");
        return;
    }

    QTextStream in(&file);
    bool loginSuccess = false;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');

        if (fields.size() >= 6  ) {
            QString fileUsername = fields[0];
            QString filePassword = fields[1];
            QString fileRole = fields[5];

            if (username == fileUsername && password == filePassword) {
                m_currentUserRole = fileRole;
                loginSuccess = true;
                break;
            }
        }
    }

    file.close();

    if (loginSuccess) {
        QMessageBox::information(this, "Login successful.", "Welcome!");
        // TODO: mở giao diện chính, hoặc ẩn login, v.v.
        hide();
        if(m_currentUserRole != "admin"){
            newUserInterface = new DialogUserInterface(m_currentUserRole, this);
            newUserInterface->show();
        } else {
            newAdminInterface = new DialogAdminInterface(m_currentUserRole, this);
            newAdminInterface->show();
        }
    } else {
        QMessageBox::warning(this, "Incorrect information", "Incorrect username or password.");
    }
}


void MainWindow::on_btnCreate_clicked()
{
    newUser = new DialogCreateUser(m_currentUserRole, this);
    newUser->show();
}

