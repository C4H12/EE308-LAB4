#ifndef HLB_H
#define HLB_H

#include <QMainWindow>

namespace Ui {
class hlb;
}

class hlb : public QMainWindow
{
    Q_OBJECT

public:
    explicit hlb(QWidget *parent = nullptr);
    ~hlb();

private slots:
    void on_pushButton_clicked();
signals:
    void sendsignal();
private:
    Ui::hlb *ui;
};

#endif // HLB_H
