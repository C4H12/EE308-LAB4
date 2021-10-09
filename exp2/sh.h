#ifndef SH_H
#define SH_H

#include <QMainWindow>

namespace Ui {
class sh;
}

class sh : public QMainWindow
{
    Q_OBJECT

public:
    explicit sh(QWidget *parent = nullptr);
    ~sh();

private slots:
    void on_pushButton_clicked();

    signals:
    void sendsignal();
private:
    Ui::sh *ui;
};

#endif // SH_H
