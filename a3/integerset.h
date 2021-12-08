#ifndef INTEGERSET_H
#define INTEGERSET_H
using namespace std;


class integerset
{
    public:
        //static int arraysize;
        //vector<int> myvector;
        //int ph;
        //int *darr;
        //int *darr2;
        //int arraysize;
        //int arraysize2;
        //int addcounter = 0;
        //int intsize;
        integerset();
        integerset(const integerset &var);
        ~integerset();
        integerset* operator=(const integerset&);
        integerset operator+(integerset);
        integerset operator*(integerset);
        integerset operator/(integerset);


        int size();
        bool isempty();
        bool contains(int a);
        void add(int a);
        void remove(int a);
    //private:
        //int *newarray;
        int *darr;
        //int *darr2;
        int arraysize;
        int intsize;
        vector<int> getasvector(int *darr, int intsize);
        bool hasintvalue(int num, int *arr);
};

#endif // INTEGERSET_H
