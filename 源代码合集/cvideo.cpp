#include "cvideo.h"
#include "ui_cvideo.h"

cvideo::cvideo(QWidget *parent, user* in)
    : QDialog(parent)
    , ui(new Ui::cvideo)
{
    ui->setupUi(this);
}

cvideo::~cvideo()
{
    delete ui;
}
