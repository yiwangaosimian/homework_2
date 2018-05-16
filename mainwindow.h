#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "line.h"
#include "point.h"
#include<QTime>
#include "house.h"
#include "boy.h"
#include<QKeyEvent>
#include "rectangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLine(Line l);
    //void setLine1(Line l2);
    void setRectangle(Rectangle Rec);
    void keyPressEvent(QKeyEvent *);

protected slots:
    void movedLine();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    Line line;//l3;
    Line *belowLine;
    Boy boy;
    //Rectangle rec;
    House house;
    QTimer *timer2;
};

#endif // MAINWINDOW_H
