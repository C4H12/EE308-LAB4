#ifndef WZ_H
#define WZ_H

#include <QMainWindow>

namespace Ui {
class wz;
}

class wz : public QMainWindow
{
    Q_OBJECT

public:
    explicit wz(QWidget *parent = nullptr);
    ~wz();

private slots:
    void on_pushButton_clicked();

    signals:
    void sendsignal();
private:
    Ui::wz *ui;
};

#endif // WZ_H
