#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "empinfo.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QSqlDatabase mydb;void connClose()
    {
        mydb.close();
    }
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_selectionChanged();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    //QSqlDatabase mydb;
};

#endif // MAINWINDOW_H
