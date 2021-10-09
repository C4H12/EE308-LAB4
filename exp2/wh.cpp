#include "wh.h"
#include "ui_wh.h"

wh::wh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wh)
{
    ui->setupUi(this);
}

wh::~wh()
{
    delete ui;
}

void wh::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
