#include <QApplication>
#include <QDialog>
#include"mainwindow.h"
//#include <connection.h>
#include <QSqlDatabase>//头文件
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
QSqlDatabase db;
bool OpenDatabase()
{
    db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    qDebug()<<"ODBC driver?"<<db.isValid();
    QString dsn = QString::fromLocal8Bit("QTsql_server");      //数据源名称
    db.setHostName("localhost");                        //选择本地主机，127.0.1.1
    db.setDatabaseName(dsn);                            //设置数据源名称
    db.setUserName("student");                               //登录用户
    db.setPassword("990413");                           //密码
    if(!db.open())                                      //打开数据库
    {
        qDebug()<<db.lastError().text();
        QMessageBox::critical(0, QObject::tr("Database error"), db.lastError().text());
        return false;                                   //打开失败
    }
    else
        qDebug()<<"database open success!";
    return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    if(!OpenDatabase())
        return 1;
    w.db=db;
    w.show();
    return a.exec();
}
