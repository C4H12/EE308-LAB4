#ifndef DT_H
#define DT_H

#include <QMainWindow>

namespace Ui {
class dt;
}

class dt : public QMainWindow
{
    Q_OBJECT

public:
    explicit dt(QWidget *parent = nullptr);
    ~dt();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::dt *ui;
};

#endif // DT_H
