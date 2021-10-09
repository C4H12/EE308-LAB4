#include "sh.h"
#include "ui_sh.h"

sh::sh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sh)
{
    ui->setupUi(this);
}

sh::~sh()
{
    delete ui;
}

void sh::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
