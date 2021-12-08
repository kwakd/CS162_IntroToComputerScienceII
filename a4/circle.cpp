#include <iostream>
#include "shape.h"
#include "circle.h"

circle::circle(double a)
{
    setcircle(a);
}

void circle::setcircle(double a){
    radius = a;

}

double circle::area(){
    return radius * radius * 3.14;
}

double circle::perimeter(){
    return radius * 2 * 3.14;
}
