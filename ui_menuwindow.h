/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_staff;
    QPushButton *btn_room;
    QPushButton *btn_empty;
    QPushButton *btn_repair;
    QMenuBar *menubar;

    void setupUi(QMainWindow *menuWindow)
    {
        if (menuWindow->objectName().isEmpty())
            menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuWindow->resize(1069, 562);
        centralwidget = new QWidget(menuWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 211, 401));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_staff = new QPushButton(widget);
        btn_staff->setObjectName(QStringLiteral("btn_staff"));
        btn_staff->setEnabled(true);
        btn_staff->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(btn_staff);

        btn_room = new QPushButton(widget);
        btn_room->setObjectName(QStringLiteral("btn_room"));
        btn_room->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(btn_room);

        btn_empty = new QPushButton(widget);
        btn_empty->setObjectName(QStringLiteral("btn_empty"));
        btn_empty->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(btn_empty);

        btn_repair = new QPushButton(widget);
        btn_repair->setObjectName(QStringLiteral("btn_repair"));
        btn_repair->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(btn_repair);

        menuWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menuWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1069, 26));
        menuWindow->setMenuBar(menubar);

        retranslateUi(menuWindow);

        QMetaObject::connectSlotsByName(menuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *menuWindow)
    {
        menuWindow->setWindowTitle(QApplication::translate("menuWindow", "MainWindow", Q_NULLPTR));
        btn_staff->setText(QApplication::translate("menuWindow", "\346\212\200\346\234\257\344\272\272\345\221\230\344\277\241\346\201\257\350\241\250", Q_NULLPTR));
        btn_room->setText(QApplication::translate("menuWindow", "\346\225\231\345\256\244\344\277\241\346\201\257\350\241\250", Q_NULLPTR));
        btn_empty->setText(QApplication::translate("menuWindow", "\346\237\245\350\257\242\347\251\272\351\227\262\346\225\231\345\256\244", Q_NULLPTR));
        btn_repair->setText(QApplication::translate("menuWindow", "\346\225\231\345\256\244\347\224\263\350\257\267\346\212\245\344\277\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class menuWindow: public Ui_menuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
