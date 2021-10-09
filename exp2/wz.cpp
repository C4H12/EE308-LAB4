#include "wz.h"
#include "ui_wz.h"

wz::wz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wz)
{
    ui->setupUi(this);
}

wz::~wz()
{
    delete ui;
}

void wz::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
