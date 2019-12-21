#ifndef HALL_H
#define HALL_H

#include <QWidget>
#include <QSqlDatabase>//头文件
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>
#include "alter.h"
#include "f5.h"

namespace Ui {
class hall;
}

class hall : public QWidget
{
    Q_OBJECT

public:
    explicit hall(QWidget *parent = nullptr);
    ~hall();
    void giveID(int x);
    int id;
    QSqlDatabase db;

private slots:
    void clickedQuery();
    void clickedStu();
    void clickedMission();
    void clickedPlace();
    void clickedEquip();
    void clickedOrgan();

    void f5();
    void insertI();
    void deleteI();

private:
    alter a;
    class::f5 f;
    Ui::hall *ui;
};

#endif // HALL_H
