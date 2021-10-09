#ifndef SANHONG_H
#define SANHONG_H

#include <QMainWindow>

namespace Ui {
class sanhong;
}

class sanhong : public QMainWindow
{
    Q_OBJECT

public:
    explicit sanhong(QWidget *parent = nullptr);
    ~sanhong();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::sanhong *ui;
};

#endif // SANHONG_H
