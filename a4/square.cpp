#include <iostream>
#include "shape.h"
#include "square.h"
#include "rectangle.h"

using namespace std;

square::square(double a): rectangle(a, a)
{
    //setl(a);
    //setwi(a);
}

void square::setl(double a){
    length = width = a;

}

void square::setwi(double a){
    length = width = a;
}
