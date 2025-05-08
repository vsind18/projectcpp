#ifndef DIALOGADMININTERFACE_H
#define DIALOGADMININTERFACE_H

#include <QDialog>

namespace Ui {
class DialogAdminInterface;
}

class DialogAdminInterface : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdminInterface(const QString &creatorRole, QWidget *parent = nullptr);
    ~DialogAdminInterface();

private slots:
    void on_btnAdInformation_clicked();

    void on_btnChangePass_clicked();

private:
    Ui::DialogAdminInterface *ui;
    QString m_creatorRole;
};

#endif // DIALOGADMININTERFACE_H
