/********************************************************************************
** Form generated from reading UI file 'staff_dele.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_DELE_H
#define UI_STAFF_DELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staff_dele
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *line_dele;
    QPushButton *btn_yes;
    QMenuBar *menubar;

    void setupUi(QMainWindow *staff_dele)
    {
        if (staff_dele->objectName().isEmpty())
            staff_dele->setObjectName(QStringLiteral("staff_dele"));
        staff_dele->resize(313, 303);
        centralwidget = new QWidget(staff_dele);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 72, 15));
        line_dele = new QLineEdit(centralwidget);
        line_dele->setObjectName(QStringLiteral("line_dele"));
        line_dele->setGeometry(QRect(120, 90, 113, 21));
        btn_yes = new QPushButton(centralwidget);
        btn_yes->setObjectName(QStringLiteral("btn_yes"));
        btn_yes->setGeometry(QRect(90, 180, 93, 28));
        staff_dele->setCentralWidget(centralwidget);
        menubar = new QMenuBar(staff_dele);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 313, 26));
        staff_dele->setMenuBar(menubar);

        retranslateUi(staff_dele);

        QMetaObject::connectSlotsByName(staff_dele);
    } // setupUi

    void retranslateUi(QMainWindow *staff_dele)
    {
        staff_dele->setWindowTitle(QApplication::translate("staff_dele", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("staff_dele", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        btn_yes->setText(QApplication::translate("staff_dele", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staff_dele: public Ui_staff_dele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_DELE_H
