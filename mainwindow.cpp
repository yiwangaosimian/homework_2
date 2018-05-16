#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rectangle.h"
#include <stdio.h>
#include <QTimer>
#include <QPainter>
#include <QMessageBox>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(movedLine()));//timeoutslot()为自定义槽
    timer2->start(500);
    Point p1(100,40), p2(100,60);
    /*Point p3(100,200), p4(200,60);
    Rectangle recta(p3,p4);
    this->setRectangle(recta);*/
    //this->belowLine = new  Line(p1 , p2);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer2;
}

void MainWindow::setLine(Line l){
    this->line = l;
}

/*void MainWindow::setRectangle(Rectangle Rec){
    this->rec = Rec;
}*/

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::white,3));//设置画笔形式
    painter.drawPixmap(rect(), QPixmap("/Users/linhailan1/Desktop/images/background.png"));
    //this->line.show(painter);
    //this->rec.show(painter);
    //this->belowLine->show(painter);
    this->house.show(painter);
    this->boy.show(painter);
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_A)
        {
            this->boy.move(3,1);
        }
        else if(e->key() == Qt::Key_D)
        {
            this->boy.move(4,1);
        }
        else if(e->key() == Qt::Key_W)
        {
            this->boy.move(1,1);
        }
        else if(e->key() == Qt::Key_S)
        {
             this->boy.move(2,1);
        }
        this->repaint();
}


void MainWindow::movedLine()
{
    static int i = 0;
    i = i + 500;
    //Point p1(i,i), p2(i+1,i+1);

    /*if (p1.pong()==true)
    {
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        i = rand()%100;
        //        QMessageBox::about(NULL, "alert", "<font color='red'>go out </font>" + QString::number(i,10));

        p1.setX(i);
        p1.setY(i);
        p2.setX(i+1);
        p2.setY(i+1);
    }*/

    if(i%2000==500)  boy.setchoice(1);
    else if(i%2000==1000) boy.setchoice(2);
    else if(i%2000==1500) boy.setchoice(3);
    else boy.setchoice(4);
    //Line l1(p1,p2);
    //this->setLine(l1);
    this->repaint();
}
