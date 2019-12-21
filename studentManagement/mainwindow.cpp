#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);
    connect(ui->logIn,SIGNAL(clicked(bool)),this,SLOT(logIn()));
    connect(ui->Register,SIGNAL(clicked(bool)),this,SLOT(Register()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::logIn()
{
//    h.db=db;
//    h.show();
    if(ui->name->text().isEmpty())
    {
        QMessageBox::information(this, "warning", "用户名不能为空");
        return;
    }
    if(ui->password->text().isEmpty())
    {
        QMessageBox::information(this, "warning", "密码不能为空");
        return;
    }
    QSqlQuery query(db);
    QString showsql=QString("SELECT * from users WHERE Name = '%1' and password = '%2' and id = '%3'")
            .arg(ui->name->text())
            .arg(ui->password->text())
            .arg(ui->comboBox->currentIndex());
    qDebug()<<showsql;
    query.exec(showsql);
    if(query.next()){
        QMessageBox::information(this, "success", "登陆成功！");      
        h.db=db;
        h.giveID(ui->comboBox->currentIndex());
        h.show();
        this->close();
    }
    else{
        QMessageBox::information(this, "warning", "用户名或密码错误");
    }
}

void MainWindow::Register()
{
    if(ui->name->text().isEmpty())
    {
        QMessageBox::information(this, "warning", "用户名不能为空");
        return;
    }
    if(ui->password->text().isEmpty())
    {
        QMessageBox::information(this, "warning", "密码不能为空");
        return;
    }
    QSqlQuery query(db);
    QString showsql=QString("SELECT * from users WHERE Name = '%1'").arg(ui->name->text());
    //qDebug()<<showsql;
    query.exec(showsql);
    //qDebug()<<query.next();
    if(!query.next()){
        QString savesql = QString("INSERT INTO users(Name,password,id)");
        savesql += QString(" VALUES('%1','%2','%3')").arg(ui->name->text())
                .arg(ui->password->text()).arg(ui->comboBox->currentIndex());
        qDebug()<<savesql;
        bool ok=query.exec(savesql);
        if(ok){
              QMessageBox::about(NULL, "success", "用户名创建成功！");
              }
          else{
               QMessageBox::about(NULL, "error", "用户名创建失败");
              }
    }
    else{
        QMessageBox::information(this, "warning", "用户名已存在");
    }
}
