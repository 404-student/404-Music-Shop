#ifndef CMAKING_H
#define CMAKING_H

#include <QDialog>

namespace Ui {
class cmaking;
}

class cmaking : public QDialog
{
    Q_OBJECT

public:
    explicit cmaking(QWidget *parent = nullptr);
    ~cmaking();

private slots:
    void on_button_done_clicked();

    void on_button_turn_clicked();

    void on_button_back_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cmaking *ui;
};

#endif // CMAKING_H
