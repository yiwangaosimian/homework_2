#ifndef HOUSE_H
#define HOUSE_H
#include "rectangle.h"
#include "point.h"
#include "line.h"

class House
{
public:
    House();
   // ~House();
    void show(QPainter &painter);
//private:
    //Rectangle body,door,window;//chimney;
    //Line winh,winv,roof1,roof2,roof3,roof4;
};

#endif // HOUSE_H
