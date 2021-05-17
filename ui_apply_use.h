/********************************************************************************
** Form generated from reading UI file 'apply_use.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLY_USE_H
#define UI_APPLY_USE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_apply_use
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_aply;
    QLineEdit *line_dele;
    QTextEdit *textEdit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *apply_use)
    {
        if (apply_use->objectName().isEmpty())
            apply_use->setObjectName(QStringLiteral("apply_use"));
        apply_use->resize(326, 279);
        centralwidget = new QWidget(apply_use);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 72, 15));
        btn_aply = new QPushButton(centralwidget);
        btn_aply->setObjectName(QStringLiteral("btn_aply"));
        btn_aply->setGeometry(QRect(100, 100, 93, 28));
        line_dele = new QLineEdit(centralwidget);
        line_dele->setObjectName(QStringLiteral("line_dele"));
        line_dele->setGeometry(QRect(140, 50, 113, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 140, 261, 87));
        apply_use->setCentralWidget(centralwidget);
        menubar = new QMenuBar(apply_use);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 326, 26));
        apply_use->setMenuBar(menubar);

        retranslateUi(apply_use);

        QMetaObject::connectSlotsByName(apply_use);
    } // setupUi

    void retranslateUi(QMainWindow *apply_use)
    {
        apply_use->setWindowTitle(QApplication::translate("apply_use", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("apply_use", "\346\225\231\345\256\244\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        btn_aply->setText(QApplication::translate("apply_use", "\347\224\263\350\257\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class apply_use: public Ui_apply_use {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLY_USE_H
