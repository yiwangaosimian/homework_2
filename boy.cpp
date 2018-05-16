#include "boy.h"
#include "point.h"
#include "line.h"
#include "rectangle.h"

Boy::Boy() = default;

void Boy::show(QPainter &painter){
    bodyd.setX(300);bodyd.setY(200);bodyu.setX(300);bodyu.setY(150);
    Line body(bodyd,bodyu);
    body.show(painter);
    QPoint center(300,130);
    painter.drawEllipse(center,20,20);
    Point foot1(300,250),knee1(270,215),foot2(270,240),foot3(285,245),knee2(285,225);
    Point rhand1(265,170),lhand1(320,185),rhand2(280,180),lhand2(310,190);
    Line Foot1(bodyd,foot1);
    Foot1.show(painter);
    if(choice==2){
        Line rh1(rhand1,bodyu),lh1(bodyu,lhand1);
        rh1.show(painter); lh1.show(painter);
        Line kn1(bodyd,knee1),Foot2(knee1,foot2);
        kn1.show(painter); Foot2.show(painter);
    }
    if(choice==1||choice==3){
        Line rh2(rhand2,bodyu),lh2(bodyu,lhand2);
        rh2.show(painter);  lh2.show(painter);
        Line kn2(bodyd,knee2),Foot3(knee2,foot3);
        kn2.show(painter);  Foot3.show(painter);
    }
}

void Boy::move(int direction, int steps){
    switch (direction){
            case 1:
                if(_pos_y-steps>=0)
                this->_pos_y -= steps;
                break;
            case 2:
            if(_pos_y+steps<=26)
                this->_pos_y += steps;
                break;
            case 3:
            if(_pos_x-steps>=0)
                this->_pos_x -= steps;
                break;
            case 4:
            if(_pos_x+steps<=44)
                this->_pos_x += steps;
                break;
}
