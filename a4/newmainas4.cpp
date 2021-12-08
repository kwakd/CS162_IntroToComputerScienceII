#include <iostream>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

using namespace std;


double averagearea(vector<double> &mv){
    double average = 0;
    for(int i = 0; i < mv.size(); i++){
        average += mv[i];
    }


    return average / mv.size();
    //cout << endl;


}

int main(){

    vector<double> mv;

    circle c(5);
    shape *cir = &c;
    cout << "circle area: " << cir-> area() << endl;
    cout << "circle perimeter: " << cir-> perimeter() << endl;
    mv.push_back(cir-> area());
    //cout << mv[0] << endl;

    cout << endl << endl;

    rectangle r(5,8);
    shape *rec = &r;
    cout << "rectangle area: " << rec-> area() << endl;
    cout << "rectangle perimeter: " << rec-> perimeter() << endl;
    mv.push_back(rec -> area());

    cout << endl << endl;

    square s(5);
    shape *sq = &s;
    cout << "square area: " << sq-> area() << endl;
    cout << "square perimeter: " << sq-> perimeter() << endl;
    mv.push_back(sq -> area());

    //cout << mv.size() << endl;
    cout << endl << endl;

    cout << "average area: " << averagearea(mv) << endl;










    return 0;
}


