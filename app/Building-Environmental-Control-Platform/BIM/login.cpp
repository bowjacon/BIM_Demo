#include "login.h"
#include "ui_login.h"
bool isPressedWidget;
QPoint last;



login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
//    QPixmap pixmap("logo.svg");
//    label->setPixmap(pixmap);
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    setAttribute(Qt::WA_TranslucentBackground);

}

login::~login()
{
    delete ui;

}
void login::mousePressEvent(QMouseEvent *event)
{
    isPressedWidget = true; // 当前鼠标按下的即是QWidget而非界面上布局的其它控件
    last = event->globalPos();
}

void login::mouseMoveEvent(QMouseEvent *event)
{
    if (isPressedWidget)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
            last = event->globalPos();
            move(x()+dx, y()+dy);
        }
}

void login::mouseReleaseEvent(QMouseEvent *event)
{
    int dx = event->globalX() - last.x();
    int dy = event->globalY() - last.y();
    move(x()+dx, y()+dy);
    isPressedWidget = false; // 鼠标松开时，置为false
}

void login::on_pushButton_clicked()
{
 this->showMinimized();
}

void login::on_pushButton_2_clicked()
{
      this->close();
}
