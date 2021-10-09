#ifndef EJ_H
#define EJ_H

#include <QMainWindow>

namespace Ui {
class ej;
}

class ej : public QMainWindow
{
    Q_OBJECT

public:
    explicit ej(QWidget *parent = nullptr);
    ~ej();

private slots:
    void on_pushButton_clicked();
    signals:
    void sendsignal();
private:
    Ui::ej *ui;
};

#endif // EJ_H
