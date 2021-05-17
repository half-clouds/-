/********************************************************************************
** Form generated from reading UI file 'query_empty_room.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_EMPTY_ROOM_H
#define UI_QUERY_EMPTY_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_query_empty_room
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *combox;
    QLineEdit *Edit_search;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_flush;
    QPushButton *btn_free;
    QPushButton *btn_use;
    QMenuBar *menubar;

    void setupUi(QMainWindow *query_empty_room)
    {
        if (query_empty_room->objectName().isEmpty())
            query_empty_room->setObjectName(QStringLiteral("query_empty_room"));
        query_empty_room->resize(729, 578);
        centralwidget = new QWidget(query_empty_room);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 70, 601, 471));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 342, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        combox = new QComboBox(widget);
        combox->setObjectName(QStringLiteral("combox"));

        horizontalLayout->addWidget(combox);

        Edit_search = new QLineEdit(widget);
        Edit_search->setObjectName(QStringLiteral("Edit_search"));

        horizontalLayout->addWidget(Edit_search);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(610, 100, 121, 311));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_flush = new QPushButton(widget_2);
        btn_flush->setObjectName(QStringLiteral("btn_flush"));

        verticalLayout->addWidget(btn_flush);

        btn_free = new QPushButton(widget_2);
        btn_free->setObjectName(QStringLiteral("btn_free"));

        verticalLayout->addWidget(btn_free);

        btn_use = new QPushButton(widget_2);
        btn_use->setObjectName(QStringLiteral("btn_use"));

        verticalLayout->addWidget(btn_use);

        query_empty_room->setCentralWidget(centralwidget);
        menubar = new QMenuBar(query_empty_room);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 729, 26));
        query_empty_room->setMenuBar(menubar);

        retranslateUi(query_empty_room);

        QMetaObject::connectSlotsByName(query_empty_room);
    } // setupUi

    void retranslateUi(QMainWindow *query_empty_room)
    {
        query_empty_room->setWindowTitle(QApplication::translate("query_empty_room", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("query_empty_room", "\346\237\245\346\211\276\357\274\232", Q_NULLPTR));
        combox->clear();
        combox->insertItems(0, QStringList()
         << QApplication::translate("query_empty_room", "\346\240\241\345\214\272", Q_NULLPTR)
         << QApplication::translate("query_empty_room", "\345\234\260\347\202\271", Q_NULLPTR)
         << QApplication::translate("query_empty_room", "\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("query_empty_room", "\347\233\256\345\211\215\346\230\257\345\220\246\345\217\257\347\224\250", Q_NULLPTR)
         << QApplication::translate("query_empty_room", "\346\225\231\345\256\244\347\261\273\345\236\213", Q_NULLPTR)
        );
        btn_flush->setText(QApplication::translate("query_empty_room", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_free->setText(QApplication::translate("query_empty_room", "\346\237\245\347\234\213\347\251\272\351\227\262\346\225\231\345\256\244", Q_NULLPTR));
        btn_use->setText(QApplication::translate("query_empty_room", "\347\224\263\350\257\267\344\275\277\347\224\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class query_empty_room: public Ui_query_empty_room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_EMPTY_ROOM_H
