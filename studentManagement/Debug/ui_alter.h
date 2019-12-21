/********************************************************************************
** Form generated from reading UI file 'alter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTER_H
#define UI_ALTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alter
{
public:
    QLabel *label;
    QLineEdit *l1;
    QLabel *label_2;
    QLineEdit *l2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *l3;
    QLineEdit *l4;
    QLineEdit *l5;
    QLineEdit *l6;
    QLineEdit *l7;
    QPushButton *run;

    void setupUi(QWidget *alter)
    {
        if (alter->objectName().isEmpty())
            alter->setObjectName(QStringLiteral("alter"));
        alter->resize(399, 302);
        label = new QLabel(alter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 72, 15));
        l1 = new QLineEdit(alter);
        l1->setObjectName(QStringLiteral("l1"));
        l1->setGeometry(QRect(100, 10, 113, 21));
        label_2 = new QLabel(alter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 72, 15));
        l2 = new QLineEdit(alter);
        l2->setObjectName(QStringLiteral("l2"));
        l2->setGeometry(QRect(100, 50, 113, 21));
        label_3 = new QLabel(alter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 81, 16));
        label_4 = new QLabel(alter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 72, 15));
        label_5 = new QLabel(alter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 72, 15));
        label_6 = new QLabel(alter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 220, 72, 15));
        label_7 = new QLabel(alter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 260, 81, 16));
        l3 = new QLineEdit(alter);
        l3->setObjectName(QStringLiteral("l3"));
        l3->setGeometry(QRect(100, 100, 113, 21));
        l4 = new QLineEdit(alter);
        l4->setObjectName(QStringLiteral("l4"));
        l4->setGeometry(QRect(100, 140, 113, 21));
        l5 = new QLineEdit(alter);
        l5->setObjectName(QStringLiteral("l5"));
        l5->setGeometry(QRect(100, 180, 113, 21));
        l6 = new QLineEdit(alter);
        l6->setObjectName(QStringLiteral("l6"));
        l6->setGeometry(QRect(100, 220, 113, 21));
        l7 = new QLineEdit(alter);
        l7->setObjectName(QStringLiteral("l7"));
        l7->setGeometry(QRect(100, 260, 113, 21));
        run = new QPushButton(alter);
        run->setObjectName(QStringLiteral("run"));
        run->setGeometry(QRect(270, 120, 93, 28));

        retranslateUi(alter);

        QMetaObject::connectSlotsByName(alter);
    } // setupUi

    void retranslateUi(QWidget *alter)
    {
        alter->setWindowTitle(QApplication::translate("alter", "insert", Q_NULLPTR));
        label->setText(QApplication::translate("alter", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("alter", "\345\220\215\347\247\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("alter", "\344\270\273\350\246\201\350\264\237\350\264\243\344\272\272", Q_NULLPTR));
        label_4->setText(QApplication::translate("alter", "\346\211\200\351\234\200\344\272\272\346\225\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("alter", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_6->setText(QApplication::translate("alter", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        label_7->setText(QApplication::translate("alter", "\345\275\223\345\211\215\345\256\214\346\210\220\345\272\246", Q_NULLPTR));
        run->setText(QApplication::translate("alter", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class alter: public Ui_alter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTER_H
