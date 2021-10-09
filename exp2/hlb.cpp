#include "hlb.h"
#include "ui_hlb.h"

hlb::hlb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hlb)
{
    ui->setupUi(this);
}

hlb::~hlb()
{
    delete ui;
}

void hlb::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
