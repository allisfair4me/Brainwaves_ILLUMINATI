#include "mainwindow.h"
#include "ui_mainwindow.h"


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


void MainWindow::on_pushButton_clicked()
{
    this->hide();
    EmpInfo empinfo;
    empinfo.setModal(true);
    empinfo.exec();
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
