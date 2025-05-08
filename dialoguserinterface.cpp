#include "dialoguserinterface.h"
#include "ui_dialoguserinterface.h"

DialogUserInterface::DialogUserInterface(const QString &creatorRole, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogUserInterface),
     m_creatorRole(creatorRole)
{
    ui->setupUi(this);
}

DialogUserInterface::~DialogUserInterface()
{
    delete ui;
}

void DialogUserInterface::on_btnPerInformation_clicked()
{

}


void DialogUserInterface::on_btnChangePassWord_clicked()
{

}

