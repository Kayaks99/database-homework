#ifndef F5_H
#define F5_H

#include <QWidget>
#include <QSqlDatabase>//头文件
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class f5;
}

class f5 : public QWidget
{
    Q_OBJECT

public:
    explicit f5(QWidget *parent = nullptr);
    ~f5();
    QSqlDatabase db;

private slots:
    void run();

private:
    Ui::f5 *ui;
};

#endif // F5_H
