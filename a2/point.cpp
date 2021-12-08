#include <iostream>

#include <stdio.h>
#include <math.h>
#include "point.h"
#include "line.h"
using namespace std;

point::point()
{
    xcoord = 0;
    ycoord = 0;
}
point::point(double x, double y)
{
    xcoord = x;
    ycoord = y;
}

double point::getx(){
    return xcoord;
}
double point::gety(){
    return ycoord;
}


double point::dt(point z){
    double a;
    double b;
    a = z.xcoord - xcoord;
    b = z.ycoord - ycoord;
    a = a*a;
    b = b*b;
    return sqrt(a+b);
}
