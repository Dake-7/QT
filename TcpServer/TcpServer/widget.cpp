#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);

    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(newConnection_Slot()));  //建立一个信号与槽的连接，用于新的客户端接到服务器
}

void Widget::newConnection_Slot()
{
    tcpSocket = tcpServer->nextPendingConnection(); //获取新的QTcpSocket对象

    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readyRead_Slot()));  //连接readyRead信号到readyRead_Slot槽函数,用以处理接收到的数据
}

void Widget::readyRead_Slot()
{
    QString buf;    //定义变量，存储读取的数据

    buf = tcpSocket->readAll(); //一个QTcpSocket类的方法，将读取所有可用的数据，并将其存储在buf变量中

    ui->receiveEdit->appendPlainText(buf);  //在接收框中显示数据
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    tcpServer->listen(QHostAddress::Any, ui->portEdit->text().toUInt());
}

void Widget::on_closeBt_clicked()
{
    tcpServer->close();
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());    //通过已建立的TCP连接发送数据。
}
