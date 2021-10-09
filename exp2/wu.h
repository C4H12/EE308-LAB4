#ifndef WU_H
#define WU_H

#include <QMainWindow>

namespace Ui {
class wu;
}

class wu : public QMainWindow
{
    Q_OBJECT

public:
    explicit wu(QWidget *parent = nullptr);
    ~wu();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::wu *ui;
};

#endif // WU_H
