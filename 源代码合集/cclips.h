#ifndef CCLIPS_H
#define CCLIPS_H

#include <QDialog>
#include "user.h"
#include <QtMultimedia/QMediaPlayer>
#include <QAudioOutput>
#include <QPushButton>
#include <QEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QSlider>

namespace Ui {
class cclips;
}

class cclips : public QDialog
{
    Q_OBJECT

public:
    explicit cclips(QWidget *parent, user *in);
    ~cclips();

private slots:
    void on_cin_clicked();
    void on_playButton_clicked();
    void on_pauseButton_clicked();
    void on_speedSlider_valueChanged(int value);
    void on_volumeSlider_valueChanged(int value);
    void on_fadeInButton_clicked();
    void on_fadeOutButton_clicked();
    void on_positionSlider_valueChanged(int value);
    void on_saveButton_clicked();
    void onPositionChanged(qint64 position);
    void onDurationChanged(qint64 duration);

private:
    Ui::cclips *ui;
    QMediaPlayer *player;
    QAudioOutput *output;
    int times;
    QString song;
    qint64 duration; // 存储音频总时长
    QString timefile;
    QString styleSheet;
};

#endif // CCLIPS_H
