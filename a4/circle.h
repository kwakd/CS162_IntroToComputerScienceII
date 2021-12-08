#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class circle: public shape
{
    public:
        circle(double);
        void setcircle(double);
        double area();
        double perimeter();

    protected:
        double radius;

};

#endif // CIRCLE_H
