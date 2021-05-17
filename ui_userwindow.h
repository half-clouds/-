/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bt_freeroom;
    QMenuBar *menubar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QStringLiteral("userWindow"));
        userWindow->resize(298, 260);
        centralwidget = new QWidget(userWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        bt_freeroom = new QPushButton(centralwidget);
        bt_freeroom->setObjectName(QStringLiteral("bt_freeroom"));
        bt_freeroom->setGeometry(QRect(80, 80, 111, 51));
        userWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 298, 26));
        userWindow->setMenuBar(menubar);

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QApplication::translate("userWindow", "MainWindow", Q_NULLPTR));
        bt_freeroom->setText(QApplication::translate("userWindow", "\346\237\245\350\257\242\347\251\272\351\227\262\346\225\231\345\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
