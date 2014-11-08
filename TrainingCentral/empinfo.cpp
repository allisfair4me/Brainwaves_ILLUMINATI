#include "empinfo.h"
#include "ui_empinfo.h"

EmpInfo::EmpInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpInfo)
{
    ui->setupUi(this);
}

EmpInfo::~EmpInfo()
{
    delete ui;
}


void EmpInfo::on_pushButton_clicked()
{

}

void EmpInfo::on_pushButton_2_clicked()
{

}
