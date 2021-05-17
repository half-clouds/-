/********************************************************************************
** Form generated from reading UI file 'repairwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIRWINDOW_H
#define UI_REPAIRWINDOW_H

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

class Ui_repairWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_flush;
    QPushButton *btn_repair;
    QPushButton *btn_working;
    QPushButton *btn_infor;
    QWidget *wid_hide;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *combox;
    QLineEdit *Edit_search;
    QMenuBar *menubar;

    void setupUi(QMainWindow *repairWindow)
    {
        if (repairWindow->objectName().isEmpty())
            repairWindow->setObjectName(QStringLiteral("repairWindow"));
        repairWindow->resize(795, 452);
        centralwidget = new QWidget(repairWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 641, 371));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(650, 20, 151, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_flush = new QPushButton(widget);
        btn_flush->setObjectName(QStringLiteral("btn_flush"));

        verticalLayout->addWidget(btn_flush);

        btn_repair = new QPushButton(widget);
        btn_repair->setObjectName(QStringLiteral("btn_repair"));

        verticalLayout->addWidget(btn_repair);

        btn_working = new QPushButton(widget);
        btn_working->setObjectName(QStringLiteral("btn_working"));

        verticalLayout->addWidget(btn_working);

        btn_infor = new QPushButton(widget);
        btn_infor->setObjectName(QStringLiteral("btn_infor"));

        verticalLayout->addWidget(btn_infor);

        wid_hide = new QWidget(centralwidget);
        wid_hide->setObjectName(QStringLiteral("wid_hide"));
        wid_hide->setGeometry(QRect(20, 10, 342, 43));
        horizontalLayout = new QHBoxLayout(wid_hide);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(wid_hide);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        combox = new QComboBox(wid_hide);
        combox->setObjectName(QStringLiteral("combox"));

        horizontalLayout->addWidget(combox);

        Edit_search = new QLineEdit(wid_hide);
        Edit_search->setObjectName(QStringLiteral("Edit_search"));

        horizontalLayout->addWidget(Edit_search);

        repairWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(repairWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 795, 26));
        repairWindow->setMenuBar(menubar);

        retranslateUi(repairWindow);

        QMetaObject::connectSlotsByName(repairWindow);
    } // setupUi

    void retranslateUi(QMainWindow *repairWindow)
    {
        repairWindow->setWindowTitle(QApplication::translate("repairWindow", "MainWindow", Q_NULLPTR));
        btn_flush->setText(QApplication::translate("repairWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_repair->setText(QApplication::translate("repairWindow", "\347\224\263\350\257\267\346\212\245\344\277\256", Q_NULLPTR));
        btn_working->setText(QApplication::translate("repairWindow", "\346\237\245\347\234\213\345\267\245\344\275\234\344\272\272\345\221\230\347\212\266\346\200\201", Q_NULLPTR));
        btn_infor->setText(QApplication::translate("repairWindow", "\347\273\264\344\277\256\346\203\205\345\206\265\350\241\250", Q_NULLPTR));
        label->setText(QApplication::translate("repairWindow", "\346\237\245\346\211\276\357\274\232", Q_NULLPTR));
        combox->clear();
        combox->insertItems(0, QStringList()
         << QApplication::translate("repairWindow", "\345\267\245\344\275\234\347\212\266\346\200\201", Q_NULLPTR)
         << QApplication::translate("repairWindow", "\345\262\227\344\275\215", Q_NULLPTR)
         << QApplication::translate("repairWindow", "\345\221\230\345\267\245\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("repairWindow", "\346\200\247\345\210\253", Q_NULLPTR)
         << QApplication::translate("repairWindow", "\345\247\223\345\220\215", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class repairWindow: public Ui_repairWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIRWINDOW_H
