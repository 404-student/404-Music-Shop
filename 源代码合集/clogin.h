#ifndef CLOGIN_H
#define CLOGIN_H

#include <QDialog>

namespace Ui {
class clogin;
}

class clogin : public QDialog
{
    Q_OBJECT

public:
    explicit clogin(QWidget *parent = nullptr);
    ~clogin();

private slots:
    void on_button_check_clicked();

    void on_button_back_clicked();

    void on_button_turn_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::clogin *ui;
};

#endif // CLOGIN_H
