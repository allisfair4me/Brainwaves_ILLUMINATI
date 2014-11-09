#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "empinfo.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

 QString EmployeeID, Password;
void MainWindow::on_pushButton_clicked()
{

   // QString EmployeeID, Password;
    EmployeeID = ui->lineEdit->text();
    Password = ui->lineEdit_2->text();



    MainWindow conn1;

   QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("G:\\TrainingCentralNew.sqlite");
    mydb.open();

    QSqlQuery qry2(mydb);

    if(qry2.exec("select * from Login WHERE EmployeeID=\'"+ EmployeeID +"\'AND Password=\'" + Password +"\' "))
    {
        if(qry2.next())
        {
            this->hide();
            EmpInfo empinfo;
            empinfo.setModal(true);
            empinfo.exec();




       }
    }
    else
    {
        //QString qry2 = qry2.lastError().text();
        //ui->lineEdit->setText(qry2);
        ui->lineEdit->setText("WrongUsername/Password");
    }

    mydb.close();
}

void MainWindow::on_lineEdit_returnPressed()
{
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_2->setFocus();
}

void MainWindow::on_lineEdit_2_returnPressed()
{
    ui->pushButton->setEnabled(true);
}


