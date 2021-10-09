#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  
    ui->pushButton->setIcon(QIcon(":/PHOTO/ALL.png"));
    ui->pushButton->setText("开始游戏");
    ui->pushButton_2->setIcon(QIcon(":/PHOTO/DMZ.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
     g=new gamble;
     g->show();
}
