#ifndef CSTART_H
#define CSTART_H

#include <QDialog>

namespace Ui {
class cstart;
}

class cstart : public QDialog
{
    Q_OBJECT

public:
    explicit cstart(QWidget *parent = nullptr);
    ~cstart();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cstart *ui;
};

#endif // CSTART_H
