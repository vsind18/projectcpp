#include "dialogadmininterface.h"
#include "ui_dialogadmininterface.h"

DialogAdminInterface::DialogAdminInterface(const QString &creatorRole, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogAdminInterface),
     m_creatorRole(creatorRole)
{
    ui->setupUi(this);
}

DialogAdminInterface::~DialogAdminInterface()
{
    delete ui;
}

void DialogAdminInterface::on_btnAdInformation_clicked()
{

}


void DialogAdminInterface::on_btnChangePass_clicked()
{

}

