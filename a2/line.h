#ifndef LINE_H
#define LINE_H



using namespace std;

class point;

class line
{
    private:
    double poxcoord;
    double poycoord;
    double ptxcoord;
    double ptycoord;
    double slopea;
    double intersectionx;
    double intersectiony;
    double parallel;

    public:
    double a,b,c,d,e,f;
    class illegalline{
        public:
            bool badline;
            illegalline(bool l) {badline = l;}
    };
    class illegalslope{
        public:
            int badslope;
            illegalslope(int s) {badslope = s;}
    };
        /*class illegalparallel{
        public:
            double badparallel;
            illegalparallel(double p) {badparallel = p;}
    };*/

    line();
    line(point po, point pt);
    double slope();
    point intersectwith(line line2);
    double linepogetx();
    double linepogety();
    double lineptgetx();
    double lineptgety();
    double getintersectionx();
    double getintersectiony();
    double getparallel();

};

#endif // LINE_H
