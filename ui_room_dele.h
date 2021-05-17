/********************************************************************************
** Form generated from reading UI file 'room_dele.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_DELE_H
#define UI_ROOM_DELE_H

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

class Ui_room_dele
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_yes;
    QLineEdit *line_dele;
    QMenuBar *menubar;

    void setupUi(QMainWindow *room_dele)
    {
        if (room_dele->objectName().isEmpty())
            room_dele->setObjectName(QStringLiteral("room_dele"));
        room_dele->resize(312, 257);
        centralwidget = new QWidget(room_dele);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 72, 15));
        btn_yes = new QPushButton(centralwidget);
        btn_yes->setObjectName(QStringLiteral("btn_yes"));
        btn_yes->setGeometry(QRect(90, 130, 93, 28));
        line_dele = new QLineEdit(centralwidget);
        line_dele->setObjectName(QStringLiteral("line_dele"));
        line_dele->setGeometry(QRect(130, 60, 113, 21));
        room_dele->setCentralWidget(centralwidget);
        menubar = new QMenuBar(room_dele);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 312, 26));
        room_dele->setMenuBar(menubar);

        retranslateUi(room_dele);

        QMetaObject::connectSlotsByName(room_dele);
    } // setupUi

    void retranslateUi(QMainWindow *room_dele)
    {
        room_dele->setWindowTitle(QApplication::translate("room_dele", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("room_dele", "\346\225\231\345\256\244\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        btn_yes->setText(QApplication::translate("room_dele", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class room_dele: public Ui_room_dele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_DELE_H
