/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

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

class Ui_staffWindow
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
    QPushButton *btn_add;
    QPushButton *btn_dele;
    QPushButton *btn_ret;
    QMenuBar *menubar;

    void setupUi(QMainWindow *staffWindow)
    {
        if (staffWindow->objectName().isEmpty())
            staffWindow->setObjectName(QStringLiteral("staffWindow"));
        staffWindow->resize(816, 482);
        centralwidget = new QWidget(staffWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(0, 40, 651, 411));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 342, 43));
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
        widget_2->setGeometry(QRect(650, 40, 171, 321));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_flush = new QPushButton(widget_2);
        btn_flush->setObjectName(QStringLiteral("btn_flush"));

        verticalLayout->addWidget(btn_flush);

        btn_add = new QPushButton(widget_2);
        btn_add->setObjectName(QStringLiteral("btn_add"));

        verticalLayout->addWidget(btn_add);

        btn_dele = new QPushButton(widget_2);
        btn_dele->setObjectName(QStringLiteral("btn_dele"));

        verticalLayout->addWidget(btn_dele);

        btn_ret = new QPushButton(widget_2);
        btn_ret->setObjectName(QStringLiteral("btn_ret"));

        verticalLayout->addWidget(btn_ret);

        staffWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(staffWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 816, 26));
        staffWindow->setMenuBar(menubar);

        retranslateUi(staffWindow);

        QMetaObject::connectSlotsByName(staffWindow);
    } // setupUi

    void retranslateUi(QMainWindow *staffWindow)
    {
        staffWindow->setWindowTitle(QApplication::translate("staffWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("staffWindow", "\346\237\245\346\211\276\357\274\232", Q_NULLPTR));
        combox->clear();
        combox->insertItems(0, QStringList()
         << QApplication::translate("staffWindow", "\345\221\230\345\267\245\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("staffWindow", "\346\200\247\345\210\253", Q_NULLPTR)
         << QApplication::translate("staffWindow", "\345\247\223\345\220\215", Q_NULLPTR)
         << QApplication::translate("staffWindow", "\345\262\227\344\275\215", Q_NULLPTR)
         << QApplication::translate("staffWindow", "\345\267\245\344\275\234\347\212\266\346\200\201", Q_NULLPTR)
        );
        btn_flush->setText(QApplication::translate("staffWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_add->setText(QApplication::translate("staffWindow", "\344\277\256\346\224\271\344\272\272\345\221\230\344\277\241\346\201\257", Q_NULLPTR));
        btn_dele->setText(QApplication::translate("staffWindow", "\345\210\240\351\231\244\344\272\272\345\221\230\344\277\241\346\201\257", Q_NULLPTR));
        btn_ret->setText(QApplication::translate("staffWindow", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staffWindow: public Ui_staffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
