#ifndef EMPDETAILS_H
#define EMPDETAILS_H

#include <QMainWindow>

namespace Ui {
    class EmpDetails;
}

class EmpDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit EmpDetails(QWidget *parent = 0);
    ~EmpDetails();

private slots:
    void on_lineEdit_lostFocus();

private:
    Ui::EmpDetails *ui;
};

#endif // EMPDETAILS_H
