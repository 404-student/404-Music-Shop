#include "clogin.h"
#include "ui_clogin.h"
#include<QDebug>
#include<cmaking.h>
#include<QFile>
#include<QTimer>
#include<menu.h>
#include<cstart.h>

clogin::clogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::clogin)
{
    ui->setupUi(this);
    ui->success->setVisible(false);
    ui->wrong->setVisible(false);
    QIcon icon(":/res/icon.png");
    this->setWindowIcon(icon);
    setWindowTitle("404 Music Shop");
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

clogin::~clogin()
{
    delete ui;
}

void clogin::on_button_check_clicked()
{
    ui->success->setVisible(false);
    ui->wrong->setVisible(false);
    QString s1 = ui->cin_id->text();
    QString s2 = ui->cin_answer->text();
    QFile file("username.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "open read file error!";
        return;
    }
    int flag = 0;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString ss1 = in.readLine();
        QString ss2 = in.readLine();
        if(s1 == ss1 && s2 == ss2){
            flag = 1;
            break;
        }
    }
    if(flag == 0)ui->wrong->setVisible(true);
    else if(flag == 1){
        ui->success->setVisible(true);
        QEventLoop loop;
        QTimer::singleShot(1500,&loop,SLOT(quit()));
        loop.exec();
        this->close();
        Menu *m = new Menu(nullptr,user(s1,s2));
        m->show();
    }
    file.close();
}


void clogin::on_button_back_clicked()
{
    cstart *father = new cstart();
    this->close();
    father->show();
}


void clogin::on_button_turn_clicked()
{
    this->close();
    cmaking *son = new cmaking();
    son->show();
}


void clogin::on_pushButton_3_clicked()
{
    this->close();
}

