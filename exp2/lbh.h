#ifndef LBH_H
#define LBH_H

#include <QMainWindow>

namespace Ui {
class lbh;
}

class lbh : public QMainWindow
{
    Q_OBJECT

public:
    explicit lbh(QWidget *parent = nullptr);
    ~lbh();
private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::lbh *ui;
};

#endif // LBH_H
