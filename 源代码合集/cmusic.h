#ifndef CMUSIC_H
#define CMUSIC_H

#include <QDialog>
#include <QtMultimedia/QMediaPlayer>
#include <QAudioOutput>
#include <QPushButton>
#include <QEvent>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include<user.h>

namespace Ui {
class cmusic;
}

class cmusic : public QDialog
{
    Q_OBJECT

public:
    explicit cmusic(QWidget *parent, user *in);
    ~cmusic();
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void on_cin_clicked();

    void on_song1_clicked();

    void on_btnstop_clicked();

    void on_btnstart_clicked();

    void on_btnadd_clicked();

    void on_btnlower_clicked();

    void on_btnlast_clicked();

    void on_btnnext_clicked();

    void onDurationChanged(qint64 duration);

    void onPositionChanged(qint64 position);

    void on_horizontalSlider_sliderReleased();

    void on_song2_clicked();

    void on_song3_clicked();

    void on_song4_clicked();

    void on_song5_clicked();

    void on_song6_clicked();

    void on_song7_clicked();

    void on_song8_clicked();

    void onMediaStatusChanged(QMediaPlayer::MediaStatus status);

    void playSong(int index);

    void on_del1_clicked();
    void on_del2_clicked();
    void on_del3_clicked();
    void on_del4_clicked();
    void on_del5_clicked();
    void on_del6_clicked();
    void on_del7_clicked();
    void on_del8_clicked();

    void removeSong(int index);

    void rotateRecord();

    void updateRecordImage();

    void onPlaybackStateChanged(QMediaPlayer::PlaybackState state);

    void on_pushButton_2_clicked();

    void getData();

    void on_volumeSlider_valueChanged(int value);

private:
    Ui::cmusic *ui;
    QMediaPlayer *player;
    QAudioOutput *output;
    QString list[8];
    QString durationTime;
    QString positionTime;
    int turn = 0;
    int num = 0;
    QPushButton *delButtons[8];
    int mode_index;
    QLabel *labels[8];
    //唱片旋转
    QTimer *rotationTimer;
    double rotationAngle;
    QPixmap recordPixmap;
    //用户记录
    QString listfile;
};

#endif // CMUSIC_H
