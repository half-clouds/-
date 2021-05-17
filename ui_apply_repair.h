/********************************************************************************
** Form generated from reading UI file 'apply_repair.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLY_REPAIR_H
#define UI_APPLY_REPAIR_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_apply_repair
{
public:
    QWidget *centralwidget;
    QWidget *widg_1;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *_compus;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *_addr;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *_ID;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *_problem;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *_time;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_apl;
    QPushButton *btn_job;
    QWidget *widg_2;
    QLineEdit *staff_id;
    QLabel *label_2;
    QPushButton *btn_comfirm;
    QMenuBar *menubar;

    void setupUi(QMainWindow *apply_repair)
    {
        if (apply_repair->objectName().isEmpty())
            apply_repair->setObjectName(QStringLiteral("apply_repair"));
        apply_repair->resize(495, 392);
        centralwidget = new QWidget(apply_repair);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widg_1 = new QWidget(centralwidget);
        widg_1->setObjectName(QStringLiteral("widg_1"));
        widg_1->setGeometry(QRect(90, 20, 360, 265));
        verticalLayout = new QVBoxLayout(widg_1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widg_1);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        _compus = new QLineEdit(widget);
        _compus->setObjectName(QStringLiteral("_compus"));

        horizontalLayout->addWidget(_compus);

        horizontalSpacer = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widg_1);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        _addr = new QLineEdit(widget_2);
        _addr->setObjectName(QStringLiteral("_addr"));

        horizontalLayout_2->addWidget(_addr);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widg_1);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        _ID = new QLineEdit(widget_3);
        _ID->setObjectName(QStringLiteral("_ID"));

        horizontalLayout_3->addWidget(_ID);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget_5 = new QWidget(widg_1);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        _problem = new QLineEdit(widget_5);
        _problem->setObjectName(QStringLiteral("_problem"));

        horizontalLayout_7->addWidget(_problem);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_5);

        widget_9 = new QWidget(widg_1);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(widget_9);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        _time = new QLineEdit(widget_9);
        _time->setObjectName(QStringLiteral("_time"));

        horizontalLayout_9->addWidget(_time);

        horizontalSpacer_9 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(widget_9);

        btn_apl = new QPushButton(centralwidget);
        btn_apl->setObjectName(QStringLiteral("btn_apl"));
        btn_apl->setGeometry(QRect(50, 310, 93, 28));
        btn_job = new QPushButton(centralwidget);
        btn_job->setObjectName(QStringLiteral("btn_job"));
        btn_job->setGeometry(QRect(220, 310, 93, 28));
        widg_2 = new QWidget(centralwidget);
        widg_2->setObjectName(QStringLiteral("widg_2"));
        widg_2->setGeometry(QRect(300, 0, 191, 111));
        staff_id = new QLineEdit(widg_2);
        staff_id->setObjectName(QStringLiteral("staff_id"));
        staff_id->setGeometry(QRect(10, 30, 169, 21));
        label_2 = new QLabel(widg_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 11, 105, 16));
        btn_comfirm = new QPushButton(widg_2);
        btn_comfirm->setObjectName(QStringLiteral("btn_comfirm"));
        btn_comfirm->setGeometry(QRect(30, 60, 91, 31));
        apply_repair->setCentralWidget(centralwidget);
        menubar = new QMenuBar(apply_repair);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 495, 26));
        apply_repair->setMenuBar(menubar);

        retranslateUi(apply_repair);

        QMetaObject::connectSlotsByName(apply_repair);
    } // setupUi

    void retranslateUi(QMainWindow *apply_repair)
    {
        apply_repair->setWindowTitle(QApplication::translate("apply_repair", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("apply_repair", "\346\240\241    \345\214\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("apply_repair", "\345\234\260    \347\202\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("apply_repair", "\346\225\231\345\256\244\347\274\226\345\217\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("apply_repair", "\351\227\256    \351\242\230", Q_NULLPTR));
        label_10->setText(QApplication::translate("apply_repair", "\346\227\266    \351\227\264", Q_NULLPTR));
        btn_apl->setText(QApplication::translate("apply_repair", "\347\224\263\346\212\245", Q_NULLPTR));
        btn_job->setText(QApplication::translate("apply_repair", "\345\210\206\351\205\215\345\267\245\344\275\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("apply_repair", "\345\267\245\344\275\234\344\272\272\345\221\230\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        btn_comfirm->setText(QApplication::translate("apply_repair", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class apply_repair: public Ui_apply_repair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLY_REPAIR_H
