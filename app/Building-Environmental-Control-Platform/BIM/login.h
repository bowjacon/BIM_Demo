#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<QPoint>
#include<QMouseEvent>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT
protected:
void mousePressEvent(QMouseEvent *event);
void mouseMoveEvent(QMouseEvent *event);
void mouseReleaseEvent(QMouseEvent *event);
public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
void on_pushButton_clicked();

void on_pushButton_2_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
