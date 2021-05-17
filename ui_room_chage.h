/********************************************************************************
** Form generated from reading UI file 'room_chage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_CHAGE_H
#define UI_ROOM_CHAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_room_chage
{
public:
    QWidget *centralwidget;
    QPushButton *btn_ret;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radio_add;
    QRadioButton *radio_change;
    QPushButton *btn_add;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_name;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *line_addr;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *line_num;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *line_type;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *line_people;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *line_use;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menubar;

    void setupUi(QMainWindow *room_chage)
    {
        if (room_chage->objectName().isEmpty())
            room_chage->setObjectName(QStringLiteral("room_chage"));
        room_chage->resize(444, 453);
        centralwidget = new QWidget(room_chage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_ret = new QPushButton(centralwidget);
        btn_ret->setObjectName(QStringLiteral("btn_ret"));
        btn_ret->setGeometry(QRect(320, 360, 93, 41));
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(370, 170, 79, 67));
        verticalLayout_2 = new QVBoxLayout(widget_8);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radio_add = new QRadioButton(widget_8);
        radio_add->setObjectName(QStringLiteral("radio_add"));

        verticalLayout_2->addWidget(radio_add);

        radio_change = new QRadioButton(widget_8);
        radio_change->setObjectName(QStringLiteral("radio_change"));

        verticalLayout_2->addWidget(radio_change);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(110, 360, 111, 41));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(30, 30, 331, 331));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_7);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        line_name = new QLineEdit(widget);
        line_name->setObjectName(QStringLiteral("line_name"));

        horizontalLayout->addWidget(line_name);

        horizontalSpacer = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        line_addr = new QLineEdit(widget_2);
        line_addr->setObjectName(QStringLiteral("line_addr"));

        horizontalLayout_2->addWidget(line_addr);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        line_num = new QLineEdit(widget_3);
        line_num->setObjectName(QStringLiteral("line_num"));

        horizontalLayout_3->addWidget(line_num);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        line_type = new QLineEdit(widget_4);
        line_type->setObjectName(QStringLiteral("line_type"));

        horizontalLayout_4->addWidget(line_type);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        line_people = new QLineEdit(widget_5);
        line_people->setObjectName(QStringLiteral("line_people"));

        horizontalLayout_7->addWidget(line_people);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        line_use = new QLineEdit(widget_6);
        line_use->setObjectName(QStringLiteral("line_use"));

        horizontalLayout_8->addWidget(line_use);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(widget_6);

        room_chage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(room_chage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 444, 26));
        room_chage->setMenuBar(menubar);

        retranslateUi(room_chage);

        QMetaObject::connectSlotsByName(room_chage);
    } // setupUi

    void retranslateUi(QMainWindow *room_chage)
    {
        room_chage->setWindowTitle(QApplication::translate("room_chage", "MainWindow", Q_NULLPTR));
        btn_ret->setText(QApplication::translate("room_chage", "\350\277\224\345\233\236", Q_NULLPTR));
        radio_add->setText(QApplication::translate("room_chage", "\346\267\273\345\212\240", Q_NULLPTR));
        radio_change->setText(QApplication::translate("room_chage", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_add->setText(QApplication::translate("room_chage", "\347\241\256\350\256\244", Q_NULLPTR));
        label->setText(QApplication::translate("room_chage", "\346\240\241     \345\214\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("room_chage", "\345\234\260    \347\202\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("room_chage", "\347\274\226    \345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("room_chage", "\346\225\231\345\256\244\347\261\273\345\236\213", Q_NULLPTR));
        label_8->setText(QApplication::translate("room_chage", "\345\256\271\347\272\263\344\272\272\346\225\260", Q_NULLPTR));
        label_9->setText(QApplication::translate("room_chage", "\346\230\257\345\220\246\345\217\257\347\224\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class room_chage: public Ui_room_chage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_CHAGE_H
