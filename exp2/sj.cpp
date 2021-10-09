#include "sj.h"
#include "ui_sj.h"

sj::sj(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sj)
{
    ui->setupUi(this);
}

sj::~sj()
{
    delete ui;
}

void sj::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
