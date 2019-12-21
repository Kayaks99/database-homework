#include "f5.h"
#include "ui_f5.h"
#include <QtWidgets>

f5::f5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::f5)
{
    ui->setupUi(this);
    connect(ui->run,SIGNAL(clicked(bool)),this,SLOT(run()));
}

f5::~f5()
{

}

void f5::run()
{
    QSqlQuery query(db);
    QString savesql = QString("INSERT INTO search");
    savesql += QString(" VALUES('%1',%2)").arg(ui->id->text())
         .arg(ui->time->text());
    qDebug()<<savesql;
    bool ok=query.exec(savesql);
    if(ok){
       QMessageBox::about(NULL, "Success", "成功更新数据");
       this->close();
       }
    else{
        QMessageBox::about(NULL, "error", "更新数据失败");
        this->close();
       }
}
