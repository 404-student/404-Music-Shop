#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QElapsedTimer>
#include <QTimer>
#include<user.h>

namespace Ui {
class home;
}

class home : public QDialog
{
    Q_OBJECT

public:
    explicit home(QWidget *parent, user *in);
    ~home();

private slots:
    void on_pushButton_clicked();

    void updateHeadImage();

    void updateCurrentTime();

    void on_pushButton_2_clicked();

    void updateUsageTime();

    void updateWinImage();

private:
    Ui::home *ui;
    QString headImage;
    QElapsedTimer usageTimer; // 高精度计时器
    QTimer *minuteTimer;      // 每分钟触发一次的定时器
    qint64 totalMinutes = 0;  // 总使用时长（分钟）
    QString namefile;
    QString headfile;
    QString minfile;
    QString name;
};

#endif // HOME_H
