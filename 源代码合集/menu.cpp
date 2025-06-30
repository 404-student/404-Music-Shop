#include "menu.h"
#include "ui_menu.h"
#include<home.h>
#include<cmusic.h>
#include<cclips.h>
#include<cvideo.h>
#include<QButtonGroup>
#include<QOverload>
#include<QFileInfo>
#include<QDir>
#include<QMessageBox>

Menu::Menu(QWidget *parent, user in)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    in.totalTimes = "0";
    in.sum_song = 0;
    for(int i = 0;i <8;i++)in.list[i] = "";
    in.head = ":/res/beautiful.jpg";
    in.name = "用户";
    in.totalMinutes = 0;

    namefile = in.namefile;
    headfile = in.headfile;
    minfile = in.minfile;
    timefile = in.timefile;
    listfile = in.listfile;

    QFile file(namefile);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "打开文件失败:" << file.errorString();
        if(!createDefaultUserFile(namefile)) {
            qDebug() << "无法创建默认用户文件，使用默认值";
        }
    } else {
        // 文件成功打开，读取数据
        QTextStream textin(&file);
        if(!textin.atEnd()) {
            in.name = textin.readLine(); // 用户名
        } else {
            qDebug() << "文件为空，使用默认值";
        }
        file.close();
    }

    QFile file1(headfile);

    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "打开文件失败:" << file1.errorString();
        if(!createDefaultUserFile(headfile)) {
            qDebug() << "无法创建默认用户文件，使用默认值";
        }
    } else {
        // 文件成功打开，读取数据
        QTextStream textin(&file1);
        if(!textin.atEnd()) {
            in.head = textin.readLine(); // 头像地址
        } else {
            qDebug() << "文件为空，使用默认值";
        }
        file1.close();
    }

    QFile file2(minfile);

    if(!file2.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "打开文件失败:" << file2.errorString();
        if(!createDefaultUserFile(minfile)) {
            qDebug() << "无法创建默认用户文件，使用默认值";
        }
    } else {
        // 文件成功打开，读取数据
        QTextStream textin(&file2);
        if(!textin.atEnd()) {
            in.totalMinutes = textin.readLine().toInt(); // 使用时长
        } else {
            qDebug() << "文件为空，使用默认值";
        }
        file2.close();
    }

    QFile file3(timefile);

    if(!file3.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "打开文件失败:" << file3.errorString();
        if(!createDefaultUserFile(timefile)) {
            qDebug() << "无法创建默认用户文件，使用默认值";
        }
    } else {
        // 文件成功打开，读取数据
        QTextStream textin(&file3);
        if(!textin.atEnd()) {
            in.totalTimes = textin.readLine(); // 音频处理次数
        } else {
            qDebug() << "文件为空，使用默认值";
        }
        file3.close();
    }

    QFile file4(listfile);

    if(!file4.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "打开文件失败:" << file4.errorString();
        if(!createDefaultUserFile(listfile)) {
            qDebug() << "无法创建默认用户文件，使用默认值";
        }
    } else {
        // 文件成功打开，读取数据
        QTextStream textin(&file4);
        if(!textin.atEnd()) {
            QString ss5 = textin.readLine(); // 歌曲总数
            in.sum_song = ss5.toInt();
            for(int i = 0; i < in.sum_song; i++) {
                in.list[i] = textin.readLine();
            }
        } else {
            qDebug() << "文件为空，使用默认值";
        }
        file4.close();
    }

    QIcon icon(":/res/icon.png");
    this->setWindowIcon(icon);
    user* p = &in;
    home *homing = new home(nullptr, p);
    cmusic *music = new cmusic(nullptr, p);
    cclips *clips = new cclips(nullptr, p);
    cvideo *video = new cvideo(nullptr, p);
    ui->stackedWidget->addWidget(homing);
    ui->stackedWidget->addWidget(music);
    ui->stackedWidget->addWidget(clips);
    ui->stackedWidget->addWidget(video);
    QButtonGroup btngroup;
    btngroup.addButton(ui->button1, 0);
    btngroup.addButton(ui->button2, 1);
    btngroup.addButton(ui->button3, 2);
    btngroup.addButton(ui->button4, 3);
    //connect(&btngroup,QOverload<int>::of(&QButtonGroup::idClicked),ui->stackedWidget, &QStackedWidget::setCurrentIndex);
    btngroup.button(0)->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
    setWindowTitle("404 Music Shop");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_button1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Menu::on_button2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Menu::on_button3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Menu::on_button4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

bool Menu::createDefaultUserFile(QString fileadd)
{
    QFile file(fileadd);

    // 确保目录存在
    QFileInfo fileInfo(fileadd);
    QDir dir = fileInfo.absoluteDir();
    if(!dir.exists()) {
        if(!dir.mkpath(".")) {
            qDebug() << "创建目录失败:" << dir.path();
            QMessageBox::critical(this, "错误",
                                  "无法创建用户目录: " + dir.path() +
                                      "\n请检查权限或磁盘空间。");
            return false;
        }
    }

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "创建文件失败:" << file.errorString();
        QMessageBox::critical(this, "错误",
                              "无法创建用户文件: " + fileadd +
                                  "\n错误: " + file.errorString());
        return false;
    }

    QTextStream textout(&file);

    if(textout.status() != QTextStream::Ok) {
        qDebug() << "写入文件失败";
        file.remove(); // 删除无效文件
        return false;
    }

    file.close();
    return true;
}
