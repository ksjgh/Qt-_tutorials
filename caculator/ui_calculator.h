/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_MemAdd;
    QPushButton *pushButton_4;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ChangeSign;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Substract;
    QPushButton *pushButton_MemClear;
    QPushButton *pushButton_MemGet;
    QPushButton *pushButton_Equal;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(800, 530);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_Divide = new QPushButton(centralwidget);
        pushButton_Divide->setObjectName(QString::fromUtf8("pushButton_Divide"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Divide->sizePolicy().hasHeightForWidth());
        pushButton_Divide->setSizePolicy(sizePolicy);
        pushButton_Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Divide, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_MemAdd = new QPushButton(centralwidget);
        pushButton_MemAdd->setObjectName(QString::fromUtf8("pushButton_MemAdd"));
        sizePolicy.setHeightForWidth(pushButton_MemAdd->sizePolicy().hasHeightForWidth());
        pushButton_MemAdd->setSizePolicy(sizePolicy);
        pushButton_MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_MemAdd, 1, 4, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        sizePolicy.setHeightForWidth(pushButton_Clear->sizePolicy().hasHeightForWidth());
        pushButton_Clear->setSizePolicy(sizePolicy);
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Clear, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_ChangeSign = new QPushButton(centralwidget);
        pushButton_ChangeSign->setObjectName(QString::fromUtf8("pushButton_ChangeSign"));
        sizePolicy.setHeightForWidth(pushButton_ChangeSign->sizePolicy().hasHeightForWidth());
        pushButton_ChangeSign->setSizePolicy(sizePolicy);
        pushButton_ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#C0C0C0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_ChangeSign, 4, 2, 1, 1);

        pushButton_Multiply = new QPushButton(centralwidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        sizePolicy.setHeightForWidth(pushButton_Multiply->sizePolicy().hasHeightForWidth());
        pushButton_Multiply->setSizePolicy(sizePolicy);
        pushButton_Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Multiply, 2, 3, 1, 1);

        pushButton_Add = new QPushButton(centralwidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        sizePolicy.setHeightForWidth(pushButton_Add->sizePolicy().hasHeightForWidth());
        pushButton_Add->setSizePolicy(sizePolicy);
        pushButton_Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Add, 3, 3, 1, 1);

        pushButton_Substract = new QPushButton(centralwidget);
        pushButton_Substract->setObjectName(QString::fromUtf8("pushButton_Substract"));
        sizePolicy.setHeightForWidth(pushButton_Substract->sizePolicy().hasHeightForWidth());
        pushButton_Substract->setSizePolicy(sizePolicy);
        pushButton_Substract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Substract, 4, 3, 1, 1);

        pushButton_MemClear = new QPushButton(centralwidget);
        pushButton_MemClear->setObjectName(QString::fromUtf8("pushButton_MemClear"));
        sizePolicy.setHeightForWidth(pushButton_MemClear->sizePolicy().hasHeightForWidth());
        pushButton_MemClear->setSizePolicy(sizePolicy);
        pushButton_MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_MemClear, 2, 4, 1, 1);

        pushButton_MemGet = new QPushButton(centralwidget);
        pushButton_MemGet->setObjectName(QString::fromUtf8("pushButton_MemGet"));
        sizePolicy.setHeightForWidth(pushButton_MemGet->sizePolicy().hasHeightForWidth());
        pushButton_MemGet->setSizePolicy(sizePolicy);
        pushButton_MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_MemGet, 3, 4, 1, 1);

        pushButton_Equal = new QPushButton(centralwidget);
        pushButton_Equal->setObjectName(QString::fromUtf8("pushButton_Equal"));
        sizePolicy.setHeightForWidth(pushButton_Equal->sizePolicy().hasHeightForWidth());
        pushButton_Equal->setSizePolicy(sizePolicy);
        pushButton_Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: rgb(255, 170, 0);\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	font: 75 18pt \"Arial\";\n"
"	background-color: #A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_Equal, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color:gray;\n"
"	border:1px solid gray;\n"
"	color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_Divide->setText(QApplication::translate("Calculator", "/", nullptr));
        pushButton_7->setText(QApplication::translate("Calculator", "7", nullptr));
        pushButton_1->setText(QApplication::translate("Calculator", "1", nullptr));
        pushButton_8->setText(QApplication::translate("Calculator", "8", nullptr));
        pushButton_9->setText(QApplication::translate("Calculator", "9", nullptr));
        pushButton_MemAdd->setText(QApplication::translate("Calculator", "M+", nullptr));
        pushButton_4->setText(QApplication::translate("Calculator", "4", nullptr));
        pushButton_Clear->setText(QApplication::translate("Calculator", "AC", nullptr));
        pushButton_5->setText(QApplication::translate("Calculator", "5", nullptr));
        pushButton_2->setText(QApplication::translate("Calculator", "2", nullptr));
        pushButton_0->setText(QApplication::translate("Calculator", "0", nullptr));
        pushButton_6->setText(QApplication::translate("Calculator", "6", nullptr));
        pushButton_3->setText(QApplication::translate("Calculator", "3", nullptr));
        pushButton_ChangeSign->setText(QApplication::translate("Calculator", "+/-", nullptr));
        pushButton_Multiply->setText(QApplication::translate("Calculator", "*", nullptr));
        pushButton_Add->setText(QApplication::translate("Calculator", "+", nullptr));
        pushButton_Substract->setText(QApplication::translate("Calculator", "-", nullptr));
        pushButton_MemClear->setText(QApplication::translate("Calculator", "M-", nullptr));
        pushButton_MemGet->setText(QApplication::translate("Calculator", "M", nullptr));
        pushButton_Equal->setText(QApplication::translate("Calculator", "=", nullptr));
        Display->setText(QApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
