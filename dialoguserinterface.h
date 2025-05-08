#ifndef DIALOGUSERINTERFACE_H
#define DIALOGUSERINTERFACE_H

#include <QDialog>

namespace Ui {
class DialogUserInterface;
}

class DialogUserInterface : public QDialog
{
    Q_OBJECT

public:
    explicit DialogUserInterface(const QString &creatorRole, QWidget *parent = nullptr);
    ~DialogUserInterface();

private slots:
    void on_btnPerInformation_clicked();

    void on_btnChangePassWord_clicked();

private:
    Ui::DialogUserInterface *ui;
    QString m_creatorRole;
};

#endif // DIALOGUSERINTERFACE_H
