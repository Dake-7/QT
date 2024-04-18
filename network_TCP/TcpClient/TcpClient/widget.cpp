#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);

    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));

}

void Widget::connected_Slot()
{
    //连接成功后，打印字符串 "Connection successful"
    qDebug("Connection successful");

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
    // 获取用户输入的IP地址和端口号
    QString ipAddress = ui->ipEdit->text();
    QString portString = ui->portEdit->text();

    // 验证端口号是否有效
    int port = portString.toUInt();
    if (port <= 0 || port > 65535) {
        // 如果端口号无效，显示错误消息
        QMessageBox::critical(this, "错误", "请输入一个有效的端口号（1-65535）。");
        return; // 不进行后续操作
    }

    // 尝试连接到服务器
    tcpSocket->connectToHost(ipAddress, port);

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
