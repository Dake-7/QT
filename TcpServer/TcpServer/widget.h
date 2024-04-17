#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;

private slots:
    void on_openBt_clicked();

    void newConnection_Slot();  //定义槽函数用于处理新的连接。当tcpServer接受到新的客户端连接时，这个槽函数会被触发。

    void readyRead_Slot();      //定义槽函数用于读取从客户端接收的数据，当tcpSocket有数据可读时，这个槽函数会被调用。

    void on_closeBt_clicked();

    void on_sendBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
