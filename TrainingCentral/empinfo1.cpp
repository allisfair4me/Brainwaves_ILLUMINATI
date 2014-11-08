#include "empinfo1.h"
#include "ui_empinfo1.h"

empinfo1::empinfo1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::empinfo1)
{
    ui->setupUi(this);
}

empinfo1::~empinfo1()
{
    delete ui;
}
