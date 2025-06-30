#include "cstart.h"
#include "ui_cstart.h"
#include<clogin.h>
#include<cmaking.h>

cstart::cstart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cstart)
{
    ui->setupUi(this);
    QIcon icon(":/res/icon.png");
    this->setWindowIcon(icon);
    setWindowTitle("404 Music Shop");
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

cstart::~cstart()
{
    delete ui;
}

void cstart::on_pushButton_clicked()
{
    clogin *page1 = new clogin;
    page1->show();
    this->hide();
}


void cstart::on_pushButton_2_clicked()
{
    cmaking *page1 = new cmaking;
    page1->show();
    this->close();
}


void cstart::on_pushButton_3_clicked()
{
    this->close();
}

