#include <iostream>
#include <stdio.h>
#include <math.h>
#include "point.h"
#include "line.h"

using namespace std;

int main(){
    point p1(1.5, 2);
    point p2(1.4, 3);
    point p3(1.0, 0.2);
    point p4(0.3, 0.5);

    //line line1(p1,p2);
    //line line2(p3,p4);

    double dist = p1.dt(p2);

    cout << "distance from p1 to p2 is: " << dist << endl << endl;

    /*try{
    line line1(p1,p2);
    line line2(p3,p4);
        try{
            cout << "line 1 slope: " << line1.slope() << endl;
            }catch(line::illegalslope ir){
                cout << "undefined slope exception" << endl;
            }
        try{
            cout << "line 2 slope: " << line2.slope() << endl;
        }catch(line::illegalslope ir){
                cout << "undefined slope exception" << endl;s
            }
    }catch(line::illegalline ir){
        cout << "degenerate line exception" << endl;
    }
    */

    try{
    line line1(p1,p2);
    cout << "line 1 slope: " << line1.slope() << endl;
    }catch (line::illegalline ir){
        cout << "line 1: illegal line" << endl;
    }catch (line::illegalslope ir){
        cout << "line1: bad slope" << endl;
    }
    try{
    line line2(p3,p4);
    cout << "line 2 slope: " << line2.slope() << endl << endl;
    }catch (line::illegalline ir){
        cout << "line 2: illegal line" << endl << endl;
    }catch (line::illegalslope ir){
        cout << "line 2: bad slope" << endl << endl;
    }

    /*try{
    line line1(p1,p2);
    line line2(p3,p4);

    }catch (line::illegalslope sr){
        cout << "illegal slope" << endl;
    }

    /*try{
    //line line1(p1,p2);
    line line2(p3,p4);
        try{
            cout << "line 2 slope: " << line2.slope() << endl;
            }catch(line::illegalslopet sr){
                cout << "undefined slope exception" << endl;
            }
    }catch(line::illegallinet sr){
        cout << "degenerate line exception" << endl;
    }*/

    /*try{
    line line2(p3,p4);
    cout << "line 2 slope: " << line2.slope() << endl;
    }catch(line::illegal ir){
        cout << "degenerate line exception" << endl;
    }*/

    try{
    line line1(p1,p2);
    line line2(p3,p4);
    line1.intersectwith(line2);
    //cout << line1.getparallel() << endl;
    if(line1.getparallel() == 0){
        throw(false);
    }
    else if(line1.getparallel() > 0 && 0.00001 >= line1.getparallel()){
        cout << "lines are very nearby each other" << endl;
    }
    cout << "line 1 and line 2 intersect at these points" << endl;
    cout << "x: " << line1.getintersectionx() << " ";
    cout << "y: " << line1.getintersectiony() << endl;
    }catch(...){
        cout << "lines are parallel" << endl;
    }


    return 0;
}
