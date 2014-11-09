#ifndef EMPINFO_H
#define EMPINFO_H

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include <QDialog>

namespace Ui {
    class EmpInfo;
}
class EmpInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EmpInfo(QWidget *parent = 0);

   QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
    }

    bool connOpen();
    ~EmpInfo();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::EmpInfo *ui;

    //QSqlDatabase mydb;
};

#endif // EMPINFO_H
