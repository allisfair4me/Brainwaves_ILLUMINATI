#include "empdetails.h"
#include "ui_empdetails.h"

EmpDetails::EmpDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EmpDetails)
{
    ui->setupUi(this);
}

EmpDetails::~EmpDetails()
{
    delete ui;
}

void EmpDetails::on_lineEdit_lostFocus()
{
    ui->lineEdit->setDisabled(true);
}
