#ifndef TABLE1_H
#define TABLE1_H

#include <QDialog>

namespace Ui {
    class Table1;
}

class Table1 : public QDialog
{
    Q_OBJECT

public:
    explicit Table1(QWidget *parent = 0);
    ~Table1();

private:
    Ui::Table1 *ui;
};

#endif // TABLE1_H
