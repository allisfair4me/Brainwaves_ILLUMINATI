#include "table1.h"
#include "ui_table1.h"

Table1::Table1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Table1)
{
    ui->setupUi(this);
}

Table1::~Table1()
{
    delete ui;
}
