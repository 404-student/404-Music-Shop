#include "cclips.h"
#include "ui_cclips.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QTimer>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include <QRandomGenerator>
#include <QDateTime>
#include <QStandardPaths>
#include <QStyleFactory>

cclips::cclips(QWidget *parent, user* in)
    : QDialog(parent)
    , ui(new Ui::cclips)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    output = new QAudioOutput(this);
    player->setAudioOutput(output);
    output->setVolume(0.5);
    connect(player, &QMediaPlayer::positionChanged, this, &cclips::onPositionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &cclips::onDurationChanged);
    times = in->totalTimes.toInt();
    song = "";
    duration = 0;

    // 初始化UI状态
    ui->playButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);
    ui->fadeInButton->setEnabled(false);
    ui->fadeOutButton->setEnabled(false);
    ui->saveButton->setEnabled(false);
    ui->positionSlider->setEnabled(false);
    ui->speedSlider->setEnabled(false);
    ui->volumeSlider->setEnabled(false);

    timefile = in->timefile;
}

cclips::~cclips()
{
    delete ui;
}

void cclips::on_cin_clicked()
{
    QString CurPath = QDir::currentPath();
    QString dlgTitle = "选择音频文件";
    QString filter = "音频文件(*.mp3 *.wav *.wma);;mp3文件(*.mp3);;wav文件(*.wav);;wma文件(*.wma);;所有文件(*.*)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,CurPath,filter);
    if(fileList.count() < 1)return;

    for(int i = 0;i < fileList.count();i++){
        QString s = fileList.at(i);
        song = s;
        ui->cin->setText("重新选择");

        // 设置播放器源
        player->setSource(QUrl::fromLocalFile(s));

        // 启用控件
        ui->playButton->setEnabled(true);
        ui->fadeInButton->setEnabled(true);
        ui->fadeOutButton->setEnabled(true);
        ui->saveButton->setEnabled(true);
        ui->positionSlider->setEnabled(true);
        ui->speedSlider->setEnabled(true);
        ui->volumeSlider->setEnabled(true);
    }
}

void cclips::on_playButton_clicked()
{
    if (player->playbackState() == QMediaPlayer::PausedState) {
        player->play();
    } else if (player->playbackState() == QMediaPlayer::StoppedState) {
        player->setPosition(0);
        player->play();
    }

    ui->playButton->setEnabled(false);
    ui->pauseButton->setEnabled(true);
}

void cclips::on_pauseButton_clicked()
{
    player->pause();
    ui->playButton->setEnabled(true);
    ui->pauseButton->setEnabled(false);
}

void cclips::on_speedSlider_valueChanged(int value)
{
    // 速度范围：0.5x 到 2.0x
    double speed = value / 100.0;
    player->setPlaybackRate(speed);
    ui->speedLabel->setText(QString("速度: %1x").arg(speed, 0, 'f', 2));
}

void cclips::on_volumeSlider_valueChanged(int value)
{
    // 音量范围：0% 到 100%
    double volume = value / 100.0;
    output->setVolume(volume);
    ui->volumeLabel->setText(QString("音量: %1%").arg(value));
}

void cclips::on_fadeInButton_clicked()
{
    // 淡入效果
    QPropertyAnimation *fadeIn = new QPropertyAnimation(output, "volume");
    fadeIn->setDuration(2000);
    fadeIn->setStartValue(0.0);
    fadeIn->setEndValue(output->volume());
    fadeIn->start(QAbstractAnimation::DeleteWhenStopped);
}

void cclips::on_fadeOutButton_clicked()
{
    // 淡出效果
    QPropertyAnimation *fadeOut = new QPropertyAnimation(output, "volume");
    fadeOut->setDuration(2000);
    fadeOut->setStartValue(output->volume());
    fadeOut->setEndValue(0.0);
    fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
}

void cclips::on_positionSlider_valueChanged(int value)
{
    // 根据滑块值设置播放位置
    if (!player->isSeekable()) return;
    qint64 position = static_cast<qint64>(value * duration / 100.0);
    player->setPosition(position);
}

void cclips::on_saveButton_clicked()
{
    if (song.isEmpty()) {
        QMessageBox::warning(this, "警告", "没有可保存的音频文件");
        return;
    }
    //获取数据
    times += 1;
    QFile file(timefile);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "Open File Error!";
        return;
    }
    QTextStream out(&file);
    out << times;
    out << "\n";
    file.close();
    // 生成带时间戳的文件名
    QString timestamp = QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss");
    QString defaultName = "processed_audio_" + timestamp;
    QString savePath = QFileDialog::getSaveFileName(
        this,
        "保存处理后的音频",
        QStandardPaths::writableLocation(QStandardPaths::MusicLocation) + "/" + defaultName,
        "音频文件 (*.mp3 *.wav);;所有文件 (*.*)"
        );

    if (savePath.isEmpty()) return;

    if (QFile::copy(song, savePath)) {
        QMessageBox::information(this, "保存成功", "音频文件已保存至: " + savePath);
    } else {
        QMessageBox::warning(this, "保存失败", "无法保存文件");
    }
}

void cclips::onPositionChanged(qint64 position)
{
    // 更新播放位置
    int seconds = position / 1000;
    int minutes = seconds / 60;
    seconds %= 60;
    ui->position->setText(QString("%1:%2").arg(minutes, 2, 10, QChar('0'))
                                   .arg(seconds, 2, 10, QChar('0')));
    if (duration > 0) {
        int progress = static_cast<int>((position * 100) / duration);
        ui->positionSlider->blockSignals(true);
        ui->positionSlider->setValue(progress);
        ui->positionSlider->blockSignals(false);
    }
}

void cclips::onDurationChanged(qint64 newDuration)
{
    // 更新播放时长
    duration = newDuration;
    int seconds = duration / 1000;
    int minutes = seconds / 60;
    seconds %= 60;
    ui->duration->setText(QString("%1:%2").arg(minutes, 2, 10, QChar('0'))
                                   .arg(seconds, 2, 10, QChar('0')));
}
