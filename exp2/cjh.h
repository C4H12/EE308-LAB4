#ifndef CJH_H
#define CJH_H

#include <QMainWindow>

namespace Ui {
class cjh;
}

class cjh : public QMainWindow
{
    Q_OBJECT

public:
    explicit cjh(QWidget *parent = nullptr);
    ~cjh();

private slots:
    void on_pushButton_clicked();
signals:
    void sendsignal();
private:
    Ui::cjh *ui;
};

#endif // CJH_H
