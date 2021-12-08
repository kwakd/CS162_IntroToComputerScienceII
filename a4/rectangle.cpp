#include <iostream>
#include "shape.h"
#include "rectangle.h"

using namespace std;

rectangle::rectangle(double a, double b)
{
    setl(a);
    setwi(b);
}

void rectangle::setl(double a){
    length = a;
}

void rectangle::setwi(double b){
    width = b;
}

double rectangle::area(){
    return length * width;
}

double rectangle::perimeter(){
    double totall = 0;
    double totalw = 0;
    double newp = 0;

    totall = length + length;
    totalw = width + width;
    newp = totall + totalw;

    return newp;

}
