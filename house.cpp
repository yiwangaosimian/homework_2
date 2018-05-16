#include "house.h"
#include "rectangle.h"
#include "point.h"
#include "line.h"

House::House()
{
    /*Point bld(50,250),bru(150,150);
    Rectangle Body(bld,bru);
    body=Body;
    Point dld(65,250),dru(95,200);
    Rectangle Door(dld,dru);
    door=Door;
    Point wld(110,190),wru(140,160);
    Rectangle Window(wld,wru);
    window=Window;
    Point mwl(110,175),mwr(140,175),mwu(125,160),mwd(125,190);
    Line Winh(mwl,mwr),Winv(mwu,mwd);
    winh=Winh;  winv=Winv;
    Point p1(30,150),p2(170,150),p3(70,100),p4(130,100);
    Line L1(p1,p2),L2(p1,p3),L3(p2,p4),L4(p3,p4);
    roof1=L1;   roof2=L2;   roof3=L3;   roof4=L4;
    Point cld(110,150),cru(130,110);
    Rectangle chi(cld,cru);
    chimney=chi;*/
}

void House::show(QPainter &painter){
    Point bld(50,250),bru(150,150);
    Rectangle Body(bld,bru);
    Point dld(65,250),dru(95,200);
    Rectangle Door(dld,dru);
    Point wld(110,190),wru(140,160);
    Rectangle Window(wld,wru);
    Point mwl(110,175),mwr(140,175),mwu(125,160),mwd(125,190);
    Line Winh(mwl,mwr),Winv(mwu,mwd);
    Point p1(30,150),p2(170,150),p3(65,100),p4(135,100);
    Line L1(p1,p2),L2(p1,p3),L3(p2,p4),L4(p3,p4);
    Point cld(115,100),cru(130,70);
    Rectangle chi(cld,cru);

    Body.show(painter);
    Door.show(painter);
    Window.show(painter);
    Winh.show(painter);
    Winv.show(painter);
    /*roof1.show(painter);
    roof2.show(painter);
    roof3.show(painter);
    roof4.show(painter);*/
    L1.show(painter);
    L2.show(painter);
    L3.show(painter);
    L4.show(painter);
    chi.show(painter);
}
