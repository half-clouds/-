/********************************************************************************
** Form generated from reading UI file 'staff_updatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_UPDATEWINDOW_H
#define UI_STAFF_UPDATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staff_updateWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *staff_updateWindow)
    {
        if (staff_updateWindow->objectName().isEmpty())
            staff_updateWindow->setObjectName(QStringLiteral("staff_updateWindow"));
        staff_updateWindow->resize(800, 600);
        menubar = new QMenuBar(staff_updateWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        staff_updateWindow->setMenuBar(menubar);
        centralwidget = new QWidget(staff_updateWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        staff_updateWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(staff_updateWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        staff_updateWindow->setStatusBar(statusbar);

        retranslateUi(staff_updateWindow);

        QMetaObject::connectSlotsByName(staff_updateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *staff_updateWindow)
    {
        staff_updateWindow->setWindowTitle(QApplication::translate("staff_updateWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staff_updateWindow: public Ui_staff_updateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_UPDATEWINDOW_H
