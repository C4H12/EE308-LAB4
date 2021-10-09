#include "yx.h"
#include "ui_yx.h"

yx::yx(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::yx)
{
    ui->setupUi(this);
}

yx::~yx()
{
    delete ui;
}

void yx::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
