#ifndef YX_H
#define YX_H

#include <QMainWindow>

namespace Ui {
class yx;
}

class yx : public QMainWindow
{
    Q_OBJECT

public:
    explicit yx(QWidget *parent = nullptr);
    ~yx();

private slots:
    void on_pushButton_clicked();
signals:
    void sendsignal();
private:
    Ui::yx *ui;
};

#endif // YX_H
