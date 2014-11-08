#ifndef EMPINFO1_H
#define EMPINFO1_H

#include <QMainWindow>

namespace Ui {
    class empinfo1;
}

class empinfo1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit empinfo1(QWidget *parent = 0);
    ~empinfo1();

private:
    Ui::empinfo1 *ui;
};

#endif // EMPINFO1_H
