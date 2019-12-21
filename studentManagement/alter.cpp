#include "alter.h"
#include "ui_alter.h"
#include <QtWidgets>

alter::alter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::alter)
{
    ui->setupUi(this);
    connect(ui->run,SIGNAL(clicked(bool)),this,SLOT(run()));
}

alter::~alter()
{

}

void alter::run()
{
    QSqlQuery query(db);
    QString savesql = QString("INSERT INTO office_mission");
    savesql += QString(" VALUES('%1','%2',NULL,'%3','%4','%5','%6','%7')").arg(ui->l1->text())
         .arg(ui->l2->text())
         .arg(ui->l3->text())
         .arg(ui->l4->text())
         .arg(ui->l5->text())
         .arg(ui->l6->text())
         .arg(ui->l7->text());
    qDebug()<<savesql;
    bool ok=query.exec(savesql);
    if(ok){
       QMessageBox::about(NULL, "Success", "成功插入数据");
       this->close();
       }
    else{
        QMessageBox::about(NULL, "error", "插入数据失败");
        this->close();
       }

}
