#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"
#include <QPainter>
#include "line.h"

class Rectangle
{
public:
    Rectangle(){}
    Rectangle(Point &a, Point &b);
    Rectangle(Rectangle &re);
   // ~Rectangle();
    void show(QPainter &painter);    
private:
    Point _a,_b,_c,_d;
    Line l1,l2,l3,l4;

};

#endif // RECTANGLE_H
