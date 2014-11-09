#include "empinfo.h"
#include "ui_empinfo.h"
#include "mainwindow.h"

EmpInfo::EmpInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpInfo)
{
    ui->setupUi(this);


}
bool EmpInfo::connOpen()
{
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("G:\\TrainingCentralNew.sqlite");
    bool db_ok=mydb.open();


    if(db_ok)
   {
        ui->lineEdit_5->setText("Connected");
        return false;
    }
   else
    {
        ui->lineEdit_5->setText("Failed");
        return true;
    }
}

EmpInfo::~EmpInfo()
{
    delete ui;
}

void EmpInfo::on_pushButton_2_clicked()
{
    EmpInfo conn;
    QSqlQueryModel *model = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry1 = new QSqlQuery(conn.mydb);

    qry1->prepare("SELECT * from Courses");
    qry1->exec();

    model->setQuery(*qry1);
    ui->tableView->setModel(model);

    conn.connClose();

    qDebug()<<( model->rowCount());
}
/*


void EmpInfo::on_pushButton_clicked()
{

    EmpInfo conn;
    QSqlQueryModel *model2 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry3 = new QSqlQuery(conn.mydb);

    qry3->prepare("SELECT * from Supplementary");
    qry3->exec();

    model2->setQuery(*qry3);
    ui->tableView->setModel(model2);

    conn.connClose();

    qDebug()<<( model2->rowCount());

}*/

void EmpInfo::on_pushButton_3_clicked()
{
    EmpInfo conn;
    QSqlQueryModel *model2 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry3 = new QSqlQuery(conn.mydb);

    qry3->prepare("SELECT * from Supplementary");
    qry3->exec();

    model2->setQuery(*qry3);
    ui->tableView->setModel(model2);

    conn.connClose();

    qDebug()<<( model2->rowCount());
}
