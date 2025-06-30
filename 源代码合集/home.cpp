#include "home.h"
#include "ui_home.h"
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include <QTime>
#include <QLabel>
#include <QTimer>
#include <QDir>
#include <QFileDialog>
#include <QSettings>
#include <QInputDialog>
#include <QFile>

home::home(QWidget *parent, user* in)
    : QDialog(parent)
    , ui(new Ui::home)
{
    ui->setupUi(this);
    ui->head->setStyleSheet("background: transparent; border: none;");
    ui->label_7->setStyleSheet("background: transparent; border: none;");
    ui->label_8->setStyleSheet("background: transparent; border: none;");
    ui->label_9->setStyleSheet("background: transparent; border: none;");
    headImage = in->head;
    name = in->name;
    updateHeadImage();
    namefile = in->namefile;
    headfile = in->headfile;
    minfile = in->minfile;
    totalMinutes = in->totalMinutes;
    updateWinImage();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &home::updateCurrentTime);
    timer->start(180000);
    updateCurrentTime();

    usageTimer.start();

    // 创建分钟定时器
    minuteTimer = new QTimer(this);
    connect(minuteTimer, &QTimer::timeout, this, &home::updateUsageTime);
    minuteTimer->start(60000);
    updateUsageTime();

    QString times1 = "404 MUSIC SHOP帮助你完成了";
    QString times2 = in->totalTimes;
    if(times2.isEmpty())times2 = "0";
    QString times3 = "次音频处理，快说谢谢404！";
    ui->label_5->setText(times1 + times2 + times3);
}

home::~home()
{
    delete ui;
}

void home::updateHeadImage(){
    if (headImage.isEmpty()) {
        ui->head->setText("头像未加载");
        return;
    }
    QString s = "border-image: url(" + headImage + ");";
    ui->head->setStyleSheet(s);
    QFile file(headfile);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "Open File Error!";
        return;
    }
    QTextStream out(&file);
    out << headImage;
    file.close();
}

void home::updateWinImage(){
    QString s1,s2,s3;
    if(totalMinutes / 60 < 1)s1 = "border-image: url(:/res/lose1.jpg);";
    else s1 = "border-image: url(:/res/win1.jpg);";
    if(totalMinutes / 60 < 10)s2 = "border-image: url(:/res/lose2.jpg);";
    else s2 = "border-image: url(:/res/win2.jpg);";
    if(totalMinutes / 60 < 100)s3 = "border-image: url(:/res/lose3.jpg);";
    else s3 = "border-image: url(:/res/win3.jpg);";
    ui->label_7->setStyleSheet(s1);
    ui->label_8->setStyleSheet(s2);
    ui->label_9->setStyleSheet(s3);
}

void home::on_pushButton_clicked()
{
    QString CurPath = QDir::currentPath();
    QString dlgTitle = "选择图片文件";
    QString filter = "图片文件(*.jpg *.png);;jpg文件(*.jpg);;png文件(*.png);;所有文件(*.*)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,CurPath,filter);
    if(fileList.count() < 1)return;
    for(int i = 0;i < fileList.count();i++){
        QString s = fileList.at(i);
        headImage = s;
        updateHeadImage();
    }
}

void home::updateCurrentTime()
{
    int currentHour = QTime::currentTime().hour();
    if(currentHour >= 6 && currentHour <= 9){
        QString s = "早上好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("一日之计在于晨，让音乐开启新的一天。");
    }
    else if(currentHour >= 10 && currentHour <= 11){
        QString s = "上午好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("音乐说：爱自己比爱别人更重要。");
    }
    else if(currentHour >= 12 && currentHour <= 13){
        QString s = "中午好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("放下手里的工作，好好吃中饭，好好生活。");
    }
    else if(currentHour >= 14 && currentHour <= 18){
        QString s = "下午好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("我花了很多个下午，才把这个程序做出来。累。");
    }
    else if(currentHour >= 19 && currentHour <= 24){
        QString s = "晚上好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("今晚早睡吧！梦里有美好的一切。");
    }
    else if(currentHour >= 0 && currentHour <= 5){
        QString s = "深夜好，" + name;
        ui->label->setText(s);
        ui->label_2->setText("在赶工还是难以入睡？明天会更好。");
    }
}

void home::updateUsageTime()
{
    qint64 sessionMillis = usageTimer.elapsed();
    qint64 sessionMinutes = sessionMillis / 60000;
    totalMinutes += sessionMinutes;
    usageTimer.restart();
    qint64 hours = totalMinutes / 60;
    qint64 minutes = totalMinutes % 60;

    QString timeText;
    if(hours > 0) {
        timeText = QString("404 MUSIC SHOP已经陪伴你度过了%1小时%2分钟。感谢你的认可！").arg(hours).arg(minutes);
    } else {
        timeText = QString("404 MUSIC SHOP已经陪伴你度过了%1分钟。希望你使用愉快！").arg(minutes);
    }
    ui->label_4->setText(timeText);

    QPropertyAnimation *anim = new QPropertyAnimation(ui->label_4, "geometry");
    anim->setDuration(300);
    anim->setStartValue(ui->label_4->geometry().adjusted(0, -5, 0, -5));
    anim->setEndValue(ui->label_4->geometry());
    anim->start(QPropertyAnimation::DeleteWhenStopped);

    QFile file(minfile);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "无法打开分钟数文件:" << minfile;
        return;
    }

    QTextStream out(&file);
    out << totalMinutes;
    file.close();

    updateWinImage();
}

void home::on_pushButton_2_clicked()
{
    QInputDialog dialog(this);
    dialog.setWindowTitle("修改用户名");
    dialog.setLabelText("请输入新的用户名:");
    dialog.setTextValue(name);
    dialog.setStyleSheet(
        "QInputDialog {"
        "   background-color: white;"
        "}"
        "QLabel {"
        "   color: black;"  // 标签文字颜色
        "}"
        "QLineEdit {"
        "   color: black;"  // 输入框文字颜色
        "   background-color: white;"
        "}"
        "QPushButton {"
        "   color: black;"  // 按钮文字颜色
        "}"
        );

    if (dialog.exec() == QDialog::Accepted) {
        QString newName = dialog.textValue();

        if (!newName.isEmpty() && newName != name) {
            name = newName;
            updateCurrentTime();

            QFile file(namefile);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << name;
                file.close();
            }

            QPropertyAnimation *anim = new QPropertyAnimation(ui->label, "geometry");
            anim->setDuration(300);
            anim->setStartValue(ui->label->geometry().adjusted(0, -5, 0, -5));
            anim->setEndValue(ui->label->geometry());
            anim->start(QPropertyAnimation::DeleteWhenStopped);
        }
    }
}
