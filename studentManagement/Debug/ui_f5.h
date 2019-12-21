/********************************************************************************
** Form generated from reading UI file 'f5.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F5_H
#define UI_F5_H

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

class Ui_f5
{
public:
    QLabel *label;
    QLineEdit *time;
    QPushButton *run;
    QLabel *label_2;
    QLineEdit *id;

    void setupUi(QWidget *f5)
    {
        if (f5->objectName().isEmpty())
            f5->setObjectName(QStringLiteral("f5"));
        f5->resize(407, 154);
        label = new QLabel(f5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 100, 72, 15));
        time = new QLineEdit(f5);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(90, 90, 161, 31));
        QFont font;
        font.setPointSize(10);
        time->setFont(font);
        run = new QPushButton(f5);
        run->setObjectName(QStringLiteral("run"));
        run->setGeometry(QRect(290, 90, 93, 28));
        label_2 = new QLabel(f5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 72, 15));
        id = new QLineEdit(f5);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(90, 30, 161, 31));
        id->setFont(font);

        retranslateUi(f5);

        QMetaObject::connectSlotsByName(f5);
    } // setupUi

    void retranslateUi(QWidget *f5)
    {
        f5->setWindowTitle(QApplication::translate("f5", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("f5", "\345\275\223\345\211\215\346\227\245\346\234\237", Q_NULLPTR));
        run->setText(QApplication::translate("f5", "\346\233\264\346\226\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("f5", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class f5: public Ui_f5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F5_H
