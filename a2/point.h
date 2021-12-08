#ifndef POINT_H
#define POINT_H


using namespace std;

class point
{
    private:
    double xcoord;
    double ycoord;

    public:
        point();
        point(double x, double y);
        double getx();
        double gety();
        double dt(point p2);

};

#endif // POINT_H
