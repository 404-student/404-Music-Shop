#include "cmaking.h"
#include "ui_cmaking.h"
#include<user.h>
#include<qfile.h>
#include<QDebug>
#include<clogin.h>
#include<cstart.h>

cmaking::cmaking(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cmaking)
{
    ui->setupUi(this);
    ui->answer_len_warning->setVisible(false);
    ui->answer_check_warning->setVisible(false);
    ui->success->setVisible(false);
    ui->id_same_warning->setVisible(false);
    QIcon icon(":/res/icon.png");
    this->setWindowIcon(icon);
    setWindowTitle("404 Music Shop");
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

cmaking::~cmaking()
{
    delete ui;
}

void cmaking::on_button_done_clicked()
{
    ui->answer_len_warning->setVisible(false);
    ui->answer_check_warning->setVisible(false);
    ui->success->setVisible(false);
    ui->id_same_warning->setVisible(false);
    QString s1 = ui->cin_id->text();
    QString s2 = ui->cin_answer->text();
    QString s_check = ui->cin_check_answer->text();
    if(s2 != s_check){
        ui->answer_check_warning->setVisible(true);
    }
    else if(s2.size() <= 6){
        ui->answer_len_warning->setVisible(true);
    }
    else{
        // 未实现：如果账号重复注册怎么办？
        user(s1,s2);
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
            if(s1 == ss1){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            ui->id_same_warning->setVisible(true);
        }
        else{
            QFile file1("username.txt");
            if(!file1.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)){
                qDebug() << "Open File Error!";
                return;
            }
            QTextStream out(&file1);
            out << s1;
            out << "\n";
            out << s2;
            out << "\n";
            file.close();
            ui->success->setVisible(true);
        }
    }
}


void cmaking::on_button_turn_clicked()
{
    clogin *father = new clogin();
    this->close();
    father->show();
}


void cmaking::on_button_back_clicked()
{
    cstart *father = new cstart();
    this->close();
    father->show();
}

void cmaking::on_pushButton_3_clicked()
{
    this->close();
}

