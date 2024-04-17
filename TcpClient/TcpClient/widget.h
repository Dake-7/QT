#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTcpSocket *tcpSocket;

private slots:
    void on_openBt_clicked();

    void connected_Slot();  //定义槽函数用于客户端于服务器的连接。当一个网络连接建立成功后，这个槽函数会被触发。

    void readyRead_Slot();  //定义槽函数用于读取从服务器接收的数据，当客户端tcpSocket有数据可读时，这个槽函数会被调用。

    void on_sendBt_clicked();

    void on_closeBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
