#include "rectangle.h"

Rectangle::Rectangle(Point &a, Point &b):_a(a),_b(b)
{
    _c.setX(a.getX());  _c.setY(b.getY());
    _d.setX(b.getX());  _d.setY(a.getY());
    l1.setStart(_a);    l1.setEnd(_c);
    l2.setStart(_a);    l2.setEnd(_d);
    l3.setStart(_d);    l3.setEnd(_b);
    l4.setStart(_b);    l4.setEnd(_c);
}

Rectangle::Rectangle(Rectangle &re):_a(re._a),_b(re._b),_c(re._c),_d(re._d){
    l1.setStart(_a);    l1.setEnd(_c);
    l2.setStart(_a);    l2.setEnd(_d);
    l3.setStart(_d);    l3.setEnd(_b);
    l4.setStart(_c);    l4.setEnd(_b);
}

void Rectangle::show(QPainter &painter){
    l1.show(painter);
    l2.show(painter);
    l3.show(painter);
    l4.show(painter);
}
