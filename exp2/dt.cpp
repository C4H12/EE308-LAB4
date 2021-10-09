#include "dt.h"
#include "ui_dt.h"

dt::dt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dt)
{
    ui->setupUi(this);
}

dt::~dt()
{
    delete ui;
}

void dt::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
