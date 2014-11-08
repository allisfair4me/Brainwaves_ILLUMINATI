/********************************************************************************
** Form generated from reading UI file 'empdetails.ui'
**
** Created: Sat 8. Nov 20:26:01 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPDETAILS_H
#define UI_EMPDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmpDetails
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmpDetails)
    {
        if (EmpDetails->objectName().isEmpty())
            EmpDetails->setObjectName(QString::fromUtf8("EmpDetails"));
        EmpDetails->resize(800, 600);
        centralwidget = new QWidget(EmpDetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 120, 46, 13));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 120, 113, 20));
        EmpDetails->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmpDetails);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        EmpDetails->setMenuBar(menubar);
        statusbar = new QStatusBar(EmpDetails);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EmpDetails->setStatusBar(statusbar);

        retranslateUi(EmpDetails);

        QMetaObject::connectSlotsByName(EmpDetails);
    } // setupUi

    void retranslateUi(QMainWindow *EmpDetails)
    {
        EmpDetails->setWindowTitle(QApplication::translate("EmpDetails", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EmpDetails", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmpDetails: public Ui_EmpDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPDETAILS_H
