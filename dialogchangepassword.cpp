#include "dialogchangepassword.h"
#include "ui_dialogchangepassword.h"

DialogChangePassword::DialogChangePassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogChangePassword)
{
    ui->setupUi(this);
}

DialogChangePassword::~DialogChangePassword()
{
    delete ui;
}

void DialogChangePassword::on_btnOK_clicked()
{

}


void DialogChangePassword::on_btnCancel_clicked()
{

}

