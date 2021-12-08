#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class rectangle : public shape
{
    public:
        rectangle(double, double);
        virtual void setl(double);
        virtual void setwi(double);
        double area();
        double perimeter();

    protected:
        double length;
        double width;

    //private:
};

#endif // RECTANGLE_H
