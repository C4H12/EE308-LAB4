#include "lbh.h"
#include "ui_lbh.h"

lbh::lbh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lbh)
{
    ui->setupUi(this);
}

lbh::~lbh()
{
    delete ui;
}

void lbh::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
