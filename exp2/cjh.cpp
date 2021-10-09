#include "cjh.h"
#include "ui_cjh.h"

cjh::cjh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cjh)
{
    ui->setupUi(this);
}

cjh::~cjh()
{
    delete ui;
}

void cjh::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
