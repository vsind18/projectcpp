#ifndef DIALOGCHANGEPASSWORD_H
#define DIALOGCHANGEPASSWORD_H

#include <QDialog>

namespace Ui {
class DialogChangePassword;
}

class DialogChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChangePassword(QWidget *parent = nullptr);
    ~DialogChangePassword();

private slots:
    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::DialogChangePassword *ui;
};

#endif // DIALOGCHANGEPASSWORD_H
