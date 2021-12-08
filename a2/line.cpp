#include <iostream>
#include <stdio.h>
#include <math.h>
#include "point.h"
#include "line.h"
using namespace std;


line::line(){
        poxcoord = 0;
        poycoord = 0;
        ptxcoord = 0;
        ptycoord = 0;
}

line::line(point po, point pt){
        if(po.getx() == pt.getx() && po.gety()== pt.gety()){
            throw illegalline(false);
        }
        poxcoord = po.getx();
        poycoord = po.gety();
        ptxcoord = pt.getx();
        ptycoord = pt.gety();

}//line

double line::slope(){
    double as;
    double bs;
    as = ptxcoord - poxcoord;
    bs = ptycoord - poycoord;
    slopea = bs/as;
    if (as == 0){
        throw illegalslope(0);
    }
    return slopea;
}

point line::intersectwith(line line2){
     a = linepogetx()*lineptgety()- linepogetx()- lineptgetx();
     b = line2.linepogetx() - line2.lineptgetx();
     c = linepogetx() - lineptgetx();
     d = line2.linepogetx()*line2.lineptgety() - line2.linepogety() * line2.lineptgetx();
     e = line2.linepogety() - line2.lineptgety();
     f = linepogety() - lineptgety();
    double g = a*b - c*d;
    double h = c*e - f*b;
    double i = a*e - f*d;
    double j = c*e - f*b;
    intersectionx = g/h;
    intersectiony = i/j;
}

double line::linepogetx(){
    return poxcoord;
}
double line::linepogety(){
    return poycoord;
}
double line::lineptgetx(){
    return ptxcoord;
}
double line::lineptgety(){
    return ptycoord;
}
double line::getintersectionx(){
    /*if(c*e-f*b == 0){
        throw illegalparallel(0);
    }
    /*else if(c*e-f*b > 0 && 0.00001 >= c*e-f*b){
        throw closeparallel(0);
    }*/
    //else{
    return intersectionx;
    //}
}
double line::getintersectiony(){
    return intersectiony;
}

double line::getparallel(){
    parallel = c*e-f*b;
    return parallel;

}
