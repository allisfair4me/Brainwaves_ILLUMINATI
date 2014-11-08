#ifndef EMPINFO_H
#define EMPINFO_H

#include <QDialog>

namespace Ui {
    class EmpInfo;
}

class EmpInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EmpInfo(QWidget *parent = 0);
    ~EmpInfo();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EmpInfo *ui;
};

#endif // EMPINFO_H
