/********************************************************************************
** Form generated from reading UI file 'empinfo1.ui'
**
** Created: Sat 8. Nov 23:07:25 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPINFO1_H
#define UI_EMPINFO1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_empinfo1
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QFrame *line;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *empinfo1)
    {
        if (empinfo1->objectName().isEmpty())
            empinfo1->setObjectName(QString::fromUtf8("empinfo1"));
        empinfo1->resize(764, 499);
        centralwidget = new QWidget(empinfo1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 231, 38));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 40, 231, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 70, 231, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 120, 731, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(430, 40, 241, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(10, 179, 681, 301));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(horizontalLayoutWidget_7);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_7->addWidget(tableWidget);

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(9, 140, 681, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(430, 70, 241, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        empinfo1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(empinfo1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 764, 20));
        empinfo1->setMenuBar(menubar);
        statusbar = new QStatusBar(empinfo1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        empinfo1->setStatusBar(statusbar);

        retranslateUi(empinfo1);

        QMetaObject::connectSlotsByName(empinfo1);
    } // setupUi

    void retranslateUi(QMainWindow *empinfo1)
    {
        empinfo1->setWindowTitle(QApplication::translate("empinfo1", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("empinfo1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">WELCOME</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("empinfo1", "Employee ID:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("empinfo1", "Skill Sets:      ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("empinfo1", "Department:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("empinfo1", "Course Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("empinfo1", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("empinfo1", "Details", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("empinfo1", "Mandatory Training", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("empinfo1", "Supplementary Training", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("empinfo1", "Project:       ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class empinfo1: public Ui_empinfo1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPINFO1_H
