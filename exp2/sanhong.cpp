#include "sanhong.h"
#include "ui_sanhong.h"

sanhong::sanhong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sanhong)
{
    ui->setupUi(this);
}

sanhong::~sanhong()
{
    delete ui;
}

void sanhong::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
