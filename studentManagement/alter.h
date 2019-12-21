#ifndef ALTER_H
#define ALTER_H

#include <QWidget>
#include <QSqlDatabase>//头文件
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class alter;
}

class alter : public QWidget
{
    Q_OBJECT

public:
    explicit alter(QWidget *parent = nullptr);
    ~alter();
    QSqlDatabase db;

private slots:
    void run();

private:
    Ui::alter *ui;
};

#endif // ALTER_H
