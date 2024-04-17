/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPlainTextEdit *receiveEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *portEdit;
    QLabel *label;
    QLineEdit *ipEdit;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(404, 480);
        Widget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(380, 30));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);

        verticalLayout->addWidget(groupBox);

        receiveEdit = new QPlainTextEdit(Widget);
        receiveEdit->setObjectName(QStringLiteral("receiveEdit"));
        receiveEdit->setMinimumSize(QSize(380, 260));
        receiveEdit->setFont(font);
        receiveEdit->setReadOnly(true);

        verticalLayout->addWidget(receiveEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        portEdit = new QLineEdit(Widget);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setMinimumSize(QSize(100, 30));
        portEdit->setMaximumSize(QSize(100, 30));
        QFont font1;
        font1.setPointSize(12);
        portEdit->setFont(font1);

        horizontalLayout_2->addWidget(portEdit);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        ipEdit = new QLineEdit(Widget);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));
        ipEdit->setMinimumSize(QSize(150, 30));
        ipEdit->setMaximumSize(QSize(150, 30));
        ipEdit->setFont(font1);

        horizontalLayout_2->addWidget(ipEdit);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(380, 30));
        groupBox_2->setFont(font);

        verticalLayout->addWidget(groupBox_2);

        sendEdit = new QLineEdit(Widget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setMinimumSize(QSize(380, 30));
        sendEdit->setFont(font);

        verticalLayout->addWidget(sendEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openBt = new QPushButton(Widget);
        openBt->setObjectName(QStringLiteral("openBt"));
        openBt->setMinimumSize(QSize(110, 30));
        openBt->setFont(font1);

        horizontalLayout->addWidget(openBt);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QStringLiteral("closeBt"));
        closeBt->setMinimumSize(QSize(110, 30));
        closeBt->setFont(font1);

        horizontalLayout->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(Widget);
        sendBt->setObjectName(QStringLiteral("sendBt"));
        sendBt->setMinimumSize(QSize(80, 30));
        sendBt->setFont(font1);

        horizontalLayout->addWidget(sendBt);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\346\241\206", nullptr));
        label->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Widget", "IP", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\346\241\206", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\345\256\242\346\210\267\347\253\257", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\345\256\242\346\210\267\347\253\257", nullptr));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
