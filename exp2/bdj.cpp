#include "bdj.h"
#include "ui_bdj.h"

bdj::bdj(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bdj)
{
    ui->setupUi(this);
}

bdj::~bdj()
{
    delete ui;
}

void bdj::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
