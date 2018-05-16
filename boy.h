#ifndef BOY_H
#define BOY_H
#include "rectangle.h"
#include "point.h"
#include "line.h"
#include <QPainter>

class Boy
{
public:
    Boy();
    void show(QPainter &painter);
    void setchoice(int c)   { choice=c; }
    void move(int ,int );
private:
    int choice;
    Point bodyd;
    Point bodyu;
    Line body;
    QPoint center;
    Point foot1,knee1,foot2,foot3,knee2;
    Point rhand1,lhand1,rhand2,lhand2;
    Line Foot1;
};

#endif // BOY_H
