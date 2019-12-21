#include "hall.h"
#include "ui_hall.h"
#include <QtWidgets>

int stu;
int mission;
int place;
int equip;
int organ;
hall::hall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hall)
{
    ui->setupUi(this);
    stu=0;
    mission=0;
    place=0;
    equip=0;
    organ=0;
    connect(ui->stuButton,SIGNAL(clicked(bool)),this,SLOT(clickedStu()));
    connect(ui->missionButton,SIGNAL(clicked(bool)),this,SLOT(clickedMission()));
    connect(ui->placeButton,SIGNAL(clicked(bool)),this,SLOT(clickedPlace()));
    connect(ui->equipButton,SIGNAL(clicked(bool)),this,SLOT(clickedEquip()));
    connect(ui->organButton,SIGNAL(clicked(bool)),this,SLOT(clickedOrgan()));
    connect(ui->Query,SIGNAL(clicked(bool)),this,SLOT(clickedQuery()));

    connect(ui->deleteBut,SIGNAL(clicked(bool)),this,SLOT(deleteI()));
    connect(ui->insertBut,SIGNAL(clicked(bool)),this,SLOT(insertI()));
    connect(ui->f5,SIGNAL(clicked(bool)),this,SLOT(f5()));
}

hall::~hall()
{

}

void hall::f5()
{
    f.db=db;
    f.show();
}

void hall::insertI()
{
    if(id==0)
    {
        QMessageBox::information(this, "error", "没有对应权限");
        return;
    }
    a.db=db;
    a.show();
}

void hall::deleteI()
{
    if(id==0)
    {
        QMessageBox::information(this, "error", "没有对应权限");
        return;
    }
    int curRow=ui->tableView->currentIndex().row();//选中行
    QAbstractItemModel *modessl = ui->tableView->model();
    QModelIndex indextemp = modessl->index(curRow,0);//遍历第一行的所有列
    QVariant datatemp = modessl->data(indextemp);
    int temp=datatemp.toInt();

    QSqlQuery deletequery(db);
    QString deletesql;
    if(stu==1)
        deletesql = QString("DELETE FROM students WHERE ID='%1'").arg(QString::number(temp));
    else if(place==1)
        deletesql = QString("DELETE FROM place WHERE ID='%1'").arg(QString::number(temp));
    else if(equip==1)
        deletesql = QString("DELETE FROM equipment WHERE ID='%1'").arg(QString::number(temp));
    else if(mission==1)
        deletesql = QString("DELETE FROM office_mission WHERE ID='%1'").arg(QString::number(temp));
    else if(organ==1)
        deletesql = QString("DELETE FROM organization WHERE ID='%1'").arg(QString::number(temp));
    bool ok=deletequery.exec(deletesql);
    if(ok)
    {
      QMessageBox::about(NULL, "Reset", "成功删除数据");
      QSqlQueryModel *model = new QSqlQueryModel;
      if(stu==1)
          model->setQuery("select * from dbo.students");
      else if(place==1)
          model->setQuery("select * from dbo.place");
      else if(equip==1)
          model->setQuery("select * from dbo.equip");
      else if(mission==1)
          model->setQuery("select * from dbo.mission");
      else if(organ==1)
          model->setQuery("select * from dbo.organ");
      ui->tableView->setModel(model);
    }
    else
    {
       QMessageBox::about(NULL, "Reset", "error reset database");
    }
}

void hall::clickedQuery()
{
    if(stu == 1)
    {
        if(ui->comboBox->currentIndex()==0)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.students");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==1)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.office_people");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==2)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.photo_people");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==3)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.shiguang_people");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==4)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.tv_people");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==5)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.wechat_people");
            ui->tableView->setModel(model);
        }
    }
    else if(mission == 1) {
        if(ui->comboBox->currentIndex()==0)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.office_mission");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==1)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.photo_mission");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==2)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.shiguang_mission");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==3)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.tv_mission");
            ui->tableView->setModel(model);
        }
        else if(ui->comboBox->currentIndex()==4)
        {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery("select * from dbo.wechat_mission");
            ui->tableView->setModel(model);
        }
    }
}

void hall::clickedStu()
{
    stu=1;
    mission=0;
    place=0;
    equip=0;
    organ=0;
    ui->stuButton->setDown(true);
    ui->placeButton->setDown(false);
    ui->missionButton->setDown(false);
    ui->organButton->setDown(false);
    ui->equipButton->setDown(false);

    ui->comboBox->clear();
    ui->comboBox->addItem("ALL");
    ui->comboBox->addItem("办公室");
    ui->comboBox->addItem("宣传部");
    ui->comboBox->addItem("实践部");
    ui->comboBox->addItem("新媒体部门");
    ui->comboBox->addItem("外联部");

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from dbo.students");
    ui->tableView->setModel(model);
}

void hall::clickedMission()
{
    stu=0;
    mission=1;
    place=0;
    equip=0;
    organ=0;
    ui->stuButton->setDown(false);
    ui->placeButton->setDown(false);
    ui->missionButton->setDown(true);
    ui->organButton->setDown(false);
    ui->equipButton->setDown(false);

    ui->comboBox->clear();
    ui->comboBox->addItem("办公室");
    ui->comboBox->addItem("宣传部");
    ui->comboBox->addItem("实践部");
    ui->comboBox->addItem("新媒体部门");
    ui->comboBox->addItem("外联部");

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from dbo.office_mission");
    ui->tableView->setModel(model);
}

void hall::clickedPlace()
{
    stu=0;
    mission=0;
    place=1;
    equip=0;
    organ=0;
    ui->stuButton->setDown(false);
    ui->placeButton->setDown(true);
    ui->missionButton->setDown(false);
    ui->organButton->setDown(false);
    ui->equipButton->setDown(false);

    ui->comboBox->clear();

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from dbo.place");
    ui->tableView->setModel(model);
}

void hall::clickedOrgan()
{
    stu=0;
    mission=0;
    place=1;
    equip=0;
    organ=0;
    ui->stuButton->setDown(false);
    ui->placeButton->setDown(false);
    ui->missionButton->setDown(false);
    ui->organButton->setDown(true);
    ui->equipButton->setDown(false);

    ui->comboBox->clear();

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from dbo.organization");
    ui->tableView->setModel(model);
}

void hall::clickedEquip()
{
    stu=0;
    mission=0;
    place=1;
    equip=0;
    organ=0;
    ui->stuButton->setDown(false);
    ui->placeButton->setDown(false);
    ui->missionButton->setDown(false);
    ui->organButton->setDown(false);
    ui->equipButton->setDown(true);

    ui->comboBox->clear();

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from dbo.equipment");
    ui->tableView->setModel(model);
}

void hall::giveID(int x)
{
    id=x;
}
