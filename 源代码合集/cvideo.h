#ifndef CVIDEO_H
#define CVIDEO_H

#include <QDialog>
#include<user.h>

namespace Ui {
class cvideo;
}

class cvideo : public QDialog
{
    Q_OBJECT

public:
    explicit cvideo(QWidget *parent, user* in);
    ~cvideo();

private:
    Ui::cvideo *ui;
    QString fileadd;
};

#endif // CVIDEO_H
