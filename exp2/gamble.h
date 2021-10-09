#ifndef GAMBLE_H
#define GAMBLE_H

#include <QMainWindow>
#include "cjh.h"
#include "bdj.h"
#include "lbh.h"
#include "hlb.h"
#include "wh.h"
#include "wz.h"
#include "sh.h"
#include "sj.h"
#include "dt.h"
#include "yx.h"
#include "ej.h"
#include "sanhong.h"
#include "wu.h"
namespace Ui {
class gamble;
}

class gamble : public QMainWindow
{
    Q_OBJECT

public:
    explicit gamble(QWidget *parent = nullptr);
    ~gamble();

private slots:

    void on_pushButton_clicked();



    void on_pushButton_2_clicked();
    signals:
    void sendsignal();
private:
    Ui::gamble *ui;
    cjh*c;
    bdj*b;
    lbh*l;
    hlb*h;
    wh*w;
    wz*W;
    sh*s11;
    sj*S;
    dt*d;
    yx*y;
    ej*e;
    sanhong*t;
    wu*u;
};

#endif // GAMBLE_H
