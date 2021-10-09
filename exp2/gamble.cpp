#include "gamble.h"
#include "ui_gamble.h"
#include <QTimer>
#include <QList>
#include <QChar>
#include <QColor>
#include <QString>
#include <QTime>
#include <QtGlobal>
#include <QDebug>
#include <QMessageBox>
#include <QMainWindow>
    gamble::gamble(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamble)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon(":/PHOTO/RYJ.png"));
    ui->pushButton->setText("搏一搏，单车变摩托!");
}

gamble::~gamble()
{
    delete ui;
}
void gamble::on_pushButton_clicked()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int fun;
    int n8=0;
    QList<int> bobing_list;
    qsrand(QTime(1,1,1).secsTo(QTime::currentTime()));
    bobing_list.append(qrand()%6);
    for(int i=0;i<6;i++){

        bobing_list.append(qrand()%6);
        if (bobing_list[i]==0){
            bobing_list[i]+=1;
        }
        }
    n1=bobing_list[0];
    n2=bobing_list[1];
    n3=bobing_list[2];
    n4=bobing_list[3];
    n5=bobing_list[4];
    n6=bobing_list[5];
    QString s = QString::number(n1);
    ui->textEdit->append(s);
    QString s2 = QString::number(n2);
    ui->textEdit_2->append(s2);
    QString s3 = QString::number(n3);
    ui->textEdit_3->append(s3);
    QString s4 = QString::number(n4);
    ui->textEdit_4->append(s4);
    QString s5 = QString::number(n5);
    ui->textEdit_5->append(s5);
    QString s6 = QString::number(n6);
    ui->textEdit_6->append(s6);
    for(int j=0;j<6;j++){
        if(bobing_list[j]==4){
            n8+=1;
        }
        else{
            n8+=0;
        }
    }
    fun=(n1+n2+n3+n4+n5+n6)*(n1*n2*n3*n4*n5*n6);
    if((n1+n2+n3+n4+n5+n6)==18&&(n1*n2*n3*n4*n5*n6)==256){//插金花
        c=new cjh;
        c->show();
    }
    else if (n1==4&&n2==4&&n3==4&&n4==4&&n5==4&&n6==4){//六杯红
       l=new lbh;
       l->show();
    }
    else if (n1==1&&n2==1&&n3==1&&n4==1&&n5==1&&n6==1){//遍地锦
         b=new bdj;
         c->show();
    }
    else if (n1==2&&n2==2&&n3==2&&n4==2&&n5==2&&n6==2){//黑六勃
         h=new hlb;
         h->show();
    }
    else if(fun==21504||fun==70656||fun==12800||fun==159744||fun==45056){//五红
        w=new wh;
        w->show();
    }
    else if(fun==352||fun==1248||fun==1792||fun==2400||fun==3072){//五子
        W=new wz;
        W->show();
    }
    else if(fun==4608||fun==9728||fun==15360||fun==28160||fun==35328||fun==20480||fun==32256||fun==58880||fun==73728||fun==50688||fun==92160||fun==115200||fun==1280000||fun==159744||fun==166400||fun==207360||fun==258048) {//四红
       s11=new sh;
       s11->show();

    }
    else if(fun==160||fun==576||fun==832||fun==1120||fun==1440||fun==2016||fun==2880||fun==3840||fun==4896||fun==4096||fun==5440||fun==6912||fun==7200||fun==9120||fun==11520) {//四进
         S=new sj;
         S->show();
    }
    else if(n8==3){//三红
        t=new sanhong;
        t->show();
    }
    else if(n8==2){//二进
        e=new ej;
        e->show();
    }
    else if(fun==15120){//对堂
         d=new dt;
         d->show();
    }
    else if(n1==4||n2==4||n3==4||n4==4||n5==4||n6==4){//一秀
         y=new yx;
         y->show();
    }
    else if(1)
    {
    u=new wu;
    u->show();
    }
}


void gamble::on_pushButton_2_clicked()
{
  emit sendsignal();
    this->close();
}
