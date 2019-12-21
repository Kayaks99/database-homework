/********************************************************************************
** Form generated from reading UI file 'hall.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALL_H
#define UI_HALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hall
{
public:
    QLabel *kuang;
    QPushButton *stuButton;
    QPushButton *missionButton;
    QPushButton *placeButton;
    QPushButton *organButton;
    QPushButton *deleteBut;
    QPushButton *insertBut;
    QPushButton *equipButton;
    QComboBox *comboBox;
    QTableView *tableView;
    QPushButton *Query;
    QPushButton *f5;

    void setupUi(QWidget *hall)
    {
        if (hall->objectName().isEmpty())
            hall->setObjectName(QStringLiteral("hall"));
        hall->resize(1000, 600);
        kuang = new QLabel(hall);
        kuang->setObjectName(QStringLiteral("kuang"));
        kuang->setGeometry(QRect(10, 10, 221, 581));
        kuang->setStyleSheet(QStringLiteral("QLabel{border:1px solid rgb(0, 0, 0);};"));
        stuButton = new QPushButton(hall);
        stuButton->setObjectName(QStringLiteral("stuButton"));
        stuButton->setGeometry(QRect(10, 10, 221, 40));
        QFont font;
        font.setPointSize(10);
        stuButton->setFont(font);
        stuButton->setCheckable(true);
        stuButton->setAutoExclusive(true);
        missionButton = new QPushButton(hall);
        missionButton->setObjectName(QStringLiteral("missionButton"));
        missionButton->setGeometry(QRect(10, 48, 221, 40));
        missionButton->setFont(font);
        placeButton = new QPushButton(hall);
        placeButton->setObjectName(QStringLiteral("placeButton"));
        placeButton->setGeometry(QRect(10, 164, 221, 41));
        placeButton->setFont(font);
        organButton = new QPushButton(hall);
        organButton->setObjectName(QStringLiteral("organButton"));
        organButton->setGeometry(QRect(10, 86, 221, 41));
        organButton->setFont(font);
        deleteBut = new QPushButton(hall);
        deleteBut->setObjectName(QStringLiteral("deleteBut"));
        deleteBut->setGeometry(QRect(330, 550, 93, 28));
        insertBut = new QPushButton(hall);
        insertBut->setObjectName(QStringLiteral("insertBut"));
        insertBut->setGeometry(QRect(730, 550, 93, 28));
        equipButton = new QPushButton(hall);
        equipButton->setObjectName(QStringLiteral("equipButton"));
        equipButton->setGeometry(QRect(10, 125, 221, 41));
        equipButton->setFont(font);
        comboBox = new QComboBox(hall);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(700, 30, 131, 31));
        comboBox->setFont(font);
        tableView = new QTableView(hall);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(260, 90, 710, 440));
        Query = new QPushButton(hall);
        Query->setObjectName(QStringLiteral("Query"));
        Query->setGeometry(QRect(860, 30, 93, 28));
        f5 = new QPushButton(hall);
        f5->setObjectName(QStringLiteral("f5"));
        f5->setGeometry(QRect(280, 30, 93, 28));

        retranslateUi(hall);

        QMetaObject::connectSlotsByName(hall);
    } // setupUi

    void retranslateUi(QWidget *hall)
    {
        hall->setWindowTitle(QApplication::translate("hall", "hall", Q_NULLPTR));
        kuang->setText(QString());
        stuButton->setText(QApplication::translate("hall", "\345\255\246\347\224\237", Q_NULLPTR));
        missionButton->setText(QApplication::translate("hall", "\344\273\273\345\212\241", Q_NULLPTR));
        placeButton->setText(QApplication::translate("hall", "\345\234\272\345\234\260", Q_NULLPTR));
        organButton->setText(QApplication::translate("hall", "\347\273\204\347\273\207", Q_NULLPTR));
        deleteBut->setText(QApplication::translate("hall", "\345\210\240\351\231\244", Q_NULLPTR));
        insertBut->setText(QApplication::translate("hall", "\346\267\273\345\212\240", Q_NULLPTR));
        equipButton->setText(QApplication::translate("hall", "\350\256\276\345\244\207", Q_NULLPTR));
        Query->setText(QApplication::translate("hall", "\346\237\245\350\257\242", Q_NULLPTR));
        f5->setText(QApplication::translate("hall", "\346\233\264\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hall: public Ui_hall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALL_H
