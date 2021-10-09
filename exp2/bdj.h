#ifndef BDJ_H
#define BDJ_H

#include <QMainWindow>

namespace Ui {
class bdj;
}

class bdj : public QMainWindow
{
    Q_OBJECT

public:
    explicit bdj(QWidget *parent = nullptr);
    ~bdj();

private slots:
    void on_pushButton_clicked();
signals:
    void sendsignal();
private:
    Ui::bdj *ui;
};

#endif // BDJ_H
