#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);
}

void Widget::connected_Slot()
{
    //将一个信号（readyRead）连接到一个槽（readyRead_Slot）上
    //当 tcpSocket 有数据可读时，readyRead 信号会被触发，进而调用readyRead_Slot槽函数

    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));

}

void Widget::readyRead_Slot()
{
    //这是一个典型的槽函数操作，通常在响应 readyRead 信号时被调用。
    //用于将从TCP套接字接收到的数据追加到 ui->receiveEdit 接收框控件中。

    ui->receiveEdit->appendPlainText(tcpSocket->readAll());
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    tcpSocket->connectToHost(ui->ipEdit->text(),ui->portEdit->text().toUInt()); //使用QTcpSocket类的connectToHost方法来尝试建立到指定服务器的TCP连接

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot())); //当tcpSocket成功建立连接时，connected信号会被发出，随后connected_Slot函数将被调用
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());
}

void Widget::on_closeBt_clicked()
{
    tcpSocket->close();
}
