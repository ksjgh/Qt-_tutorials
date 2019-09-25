#include "calculator.h"
#include "ui_calculator.h"
//#include <QDebug>
#include <iostream>

// for screen rotate
#include <QGraphicsScene>
#include <QGraphicsView>

// for mouse rotate
#include <QCursor>
#include <QPixmap>

double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));

    QPushButton* numButtons[10];
    for(int i=0; i<10; ++i){
        QString butName = "pushButton_" + QString::number(i); // In original Tutorial "Button" not "pushButton_"
        numButtons[i] = Calculator::findChild<QPushButton*>(butName);
        connect(numButtons[i],SIGNAL(released()),this,SLOT(NumPressed()));
    }

    connect(ui->pushButton_Add,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->pushButton_Substract,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->pushButton_Multiply,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->pushButton_Divide,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->pushButton_Equal,SIGNAL(released()),this,SLOT(EqualButton()));
    connect(ui->pushButton_ChangeSign,SIGNAL(released()),this,SLOT(ChangeNumberSign()));

    QGraphicsScene *scene = new QGraphicsScene();
    QGraphicsView *view = new QGraphicsView(parent);
    ////
    view->setGeometry(0,0,500,1000); // actual Display size
    ////
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QGraphicsProxyWidget *proxy = scene->addWidget(this);
    view->setScene(scene);
    view->show();
    view->rotate(90); // rotate 90

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){
    QPushButton* button = (QPushButton*)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble()==0) || (displayVal.toDouble()==0.0)){
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal,'g',16));
    }

}

void Calculator::MathButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton* button = (QPushButton*)sender();
    QString butVal = button->text();
    if(QString::compare(butVal,"/",Qt::CaseSensitive)==0){
        divTrigger = true;
    } else if(QString::compare(butVal,"*",Qt::CaseSensitive)==0){
        multTrigger = true;
    } else if(QString::compare(butVal,"+",Qt::CaseSensitive)==0){
        addTrigger = true;
    } else if(QString::compare(butVal,"-",Qt::CaseSensitive)==0){
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else if(divTrigger){
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign(){

    // My solution
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    ui->Display->setText(QString::number(-1*dblDisplayVal));

    // Writer's solution
//    qDebug() << "Inside ChangenubmerSign slot";
//    std::cout << "Inside ChangeNumbersSign" << std::endl;
//    QString displayVal = ui->Display->text();
//    QRegExp reg("[-]?[0-9.]*");
//    if(reg.exactMatch(displayVal)){
//        double dblDisplayVal = displayVal.toDouble();
//        double dblDisplayValSign = -1.0*dblDisplayVal;
//        ui->Display->setText(QString::number(dblDisplayValSign));
//    }
}

