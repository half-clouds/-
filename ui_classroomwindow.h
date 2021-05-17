/********************************************************************************
** Form generated from reading UI file 'classroomwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSROOMWINDOW_H
#define UI_CLASSROOMWINDOW_H

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

class Ui_classroomWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_flush;
    QPushButton *btn_add;
    QPushButton *btn_dele;
    QPushButton *btn_ret;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *combox;
    QLineEdit *Edit_search;
    QMenuBar *menubar;

    void setupUi(QMainWindow *classroomWindow)
    {
        if (classroomWindow->objectName().isEmpty())
            classroomWindow->setObjectName(QStringLiteral("classroomWindow"));
        classroomWindow->resize(798, 494);
        centralwidget = new QWidget(classroomWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(-20, 50, 651, 411));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(630, 50, 171, 321));
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

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 342, 43));
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

        classroomWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(classroomWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 26));
        classroomWindow->setMenuBar(menubar);

        retranslateUi(classroomWindow);

        QMetaObject::connectSlotsByName(classroomWindow);
    } // setupUi

    void retranslateUi(QMainWindow *classroomWindow)
    {
        classroomWindow->setWindowTitle(QApplication::translate("classroomWindow", "MainWindow", Q_NULLPTR));
        btn_flush->setText(QApplication::translate("classroomWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        btn_add->setText(QApplication::translate("classroomWindow", "\344\277\256\346\224\271\346\225\231\345\256\244\344\277\241\346\201\257", Q_NULLPTR));
        btn_dele->setText(QApplication::translate("classroomWindow", "\345\210\240\351\231\244\346\225\231\345\256\244\344\277\241\346\201\257", Q_NULLPTR));
        btn_ret->setText(QApplication::translate("classroomWindow", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("classroomWindow", "\346\237\245\346\211\276\357\274\232", Q_NULLPTR));
        combox->clear();
        combox->insertItems(0, QStringList()
         << QApplication::translate("classroomWindow", "\346\240\241\345\214\272", Q_NULLPTR)
         << QApplication::translate("classroomWindow", "\345\234\260\347\202\271", Q_NULLPTR)
         << QApplication::translate("classroomWindow", "\347\274\226\345\217\267", Q_NULLPTR)
         << QApplication::translate("classroomWindow", "\346\225\231\345\256\244\347\261\273\345\236\213", Q_NULLPTR)
         << QApplication::translate("classroomWindow", "\347\233\256\345\211\215\346\230\257\345\220\246\345\217\257\347\224\250", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class classroomWindow: public Ui_classroomWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSROOMWINDOW_H
