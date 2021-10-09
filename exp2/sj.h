#ifndef SJ_H
#define SJ_H

#include <QMainWindow>

namespace Ui {
class sj;
}

class sj : public QMainWindow
{
    Q_OBJECT

public:
    explicit sj(QWidget *parent = nullptr);
    ~sj();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::sj *ui;
};

#endif // SJ_H
