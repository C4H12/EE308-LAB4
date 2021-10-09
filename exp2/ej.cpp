#include "ej.h"
#include "ui_ej.h"

ej::ej(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ej)
{
    ui->setupUi(this);
}

ej::~ej()
{
    delete ui;
}

void ej::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
