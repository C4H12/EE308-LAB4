#include "wu.h"
#include "ui_wu.h"

wu::wu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::wu)
{
    ui->setupUi(this);
}

wu::~wu()
{
    delete ui;
}

void wu::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
