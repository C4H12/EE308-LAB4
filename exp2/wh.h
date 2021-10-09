#ifndef WH_H
#define WH_H

#include <QMainWindow>

namespace Ui {
class wh;
}

class wh : public QMainWindow
{
    Q_OBJECT

public:
    explicit wh(QWidget *parent = nullptr);
    ~wh();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::wh *ui;
};

#endif // WH_H
