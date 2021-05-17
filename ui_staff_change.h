/********************************************************************************
** Form generated from reading UI file 'staff_change.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_CHANGE_H
#define UI_STAFF_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staff_change
{
public:
    QWidget *centralwidget;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_ID;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *line_name;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *line_sex;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *line_job;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *line_work;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_ret;
    QPushButton *btn_add;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radio_add;
    QRadioButton *radio_change;

    void setupUi(QMainWindow *staff_change)
    {
        if (staff_change->objectName().isEmpty())
            staff_change->setObjectName(QStringLiteral("staff_change"));
        staff_change->resize(477, 371);
        centralwidget = new QWidget(staff_change);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(30, 20, 360, 265));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_7);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        line_ID = new QLineEdit(widget);
        line_ID->setObjectName(QStringLiteral("line_ID"));

        horizontalLayout->addWidget(line_ID);

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

        line_name = new QLineEdit(widget_2);
        line_name->setObjectName(QStringLiteral("line_name"));

        horizontalLayout_2->addWidget(line_name);

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

        line_sex = new QLineEdit(widget_3);
        line_sex->setObjectName(QStringLiteral("line_sex"));

        horizontalLayout_3->addWidget(line_sex);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        line_job = new QLineEdit(widget_5);
        line_job->setObjectName(QStringLiteral("line_job"));

        horizontalLayout_7->addWidget(line_job);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addWidget(widget_5);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(widget_9);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        line_work = new QLineEdit(widget_9);
        line_work->setObjectName(QStringLiteral("line_work"));

        horizontalLayout_9->addWidget(line_work);

        horizontalSpacer_9 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout->addWidget(widget_9);

        btn_ret = new QPushButton(centralwidget);
        btn_ret->setObjectName(QStringLiteral("btn_ret"));
        btn_ret->setGeometry(QRect(260, 310, 93, 41));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(40, 310, 111, 41));
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(390, 130, 79, 67));
        verticalLayout_2 = new QVBoxLayout(widget_8);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radio_add = new QRadioButton(widget_8);
        radio_add->setObjectName(QStringLiteral("radio_add"));

        verticalLayout_2->addWidget(radio_add);

        radio_change = new QRadioButton(widget_8);
        radio_change->setObjectName(QStringLiteral("radio_change"));

        verticalLayout_2->addWidget(radio_change);

        staff_change->setCentralWidget(centralwidget);

        retranslateUi(staff_change);

        QMetaObject::connectSlotsByName(staff_change);
    } // setupUi

    void retranslateUi(QMainWindow *staff_change)
    {
        staff_change->setWindowTitle(QApplication::translate("staff_change", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("staff_change", "\345\267\245    \345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("staff_change", "\345\247\223    \345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("staff_change", "\346\200\247    \345\210\253", Q_NULLPTR));
        label_8->setText(QApplication::translate("staff_change", "\345\262\227    \344\275\215", Q_NULLPTR));
        label_10->setText(QApplication::translate("staff_change", "\345\267\245\344\275\234\347\212\266\346\200\201", Q_NULLPTR));
        btn_ret->setText(QApplication::translate("staff_change", "\350\277\224\345\233\236", Q_NULLPTR));
        btn_add->setText(QApplication::translate("staff_change", "\347\241\256\350\256\244", Q_NULLPTR));
        radio_add->setText(QApplication::translate("staff_change", "\346\267\273\345\212\240", Q_NULLPTR));
        radio_change->setText(QApplication::translate("staff_change", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staff_change: public Ui_staff_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_CHANGE_H
