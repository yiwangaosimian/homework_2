#include "line.h"
#include <QPainter>
#include <cmath>
#include<algorithm>
#include<iostream>
using namespace std;


Line::Line(Point &a, Point &b):_pa(a),_pb(b){
    this->calLength();
}

float Line::getLength(){
    return this->_len;
}

Line::Line (Line &l): _pa(l._pa), _pb(l._pb) {//组合类的复制构造函数
    //cout << "Calling the copy constructor of Line" << endl;
    this->_len = l._len;
}

void Line::show(QPainter & painter){
    painter.drawLine(this->_pa.getX(),this->_pa.getY(),this->_pb.getX(),this->_pb.getY());
}

//只考虑平行状况
void Line::calLength(){
    float result=0;
    if(_pa.getX()==_pb.getX()){
        result=abs(_pa.getY()-_pb.getY());
    }
    if(_pa.getY()==_pb.getY()){
        result=abs(_pa.getX()-_pb.getX());
    }
    else{
        double x=abs(_pa.getX()-_pb.getX());
        double y=abs(_pa.getY()-_pb.getY());
        result=sqrt(x*x+y*y);
    }
    this->_len = result;
}

void Line::setStart(Point &a){
    this->_pa = a;
}
void Line::setEnd(Point &b){
    this->_pb = b;
}

