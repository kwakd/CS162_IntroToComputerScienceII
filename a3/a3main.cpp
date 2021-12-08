#include <iostream>
#include <vector>
#include <string>
#include "integerset.h"

using namespace std;


int main(){
    vector<int> mv;
    integerset set1;

    cout << "size: ";
    cout << set1.size() << endl;
    cout << "bool" << endl;
    bool check1 = set1.contains(5);
    cout << check1 << endl;
    set1.add(1);
    set1.add(2);
    set1.add(3);
    set1.add(4);
    set1.add(5);
    set1.add(6);
    set1.add(7);
    set1.add(8);
    set1.add(9);
    set1.add(10);
    set1.add(11);
    set1.add(12);
    set1.add(13);
    mv = set1.getasvector(set1.darr, set1.intsize);
    integerset set2(set1);
    integerset set3; //= set1+set2;
    set3 = set1+set2;
    cout << "set3-----------" << endl;
    cout << set3.intsize<< endl;
    for(int i = 0; i < set3.intsize; i++){
        cout << "ARRAY NUM[" << i << "]: ";
        cout << set3.darr[i] << endl;
    }

    integerset set4;
    set4 = set1/set2;

    cout << "set4-----------" << endl;
    for(int i = 0; i < set4.intsize; i++){
        cout << "ARRAY NUM[" << i << "]: ";
        cout << set4.darr[i] << endl;
    }
    integerset set5; //= set1*set2;
    set5 = set1*set2;
    cout << "set5-----------" << endl;
    for(int i = 0; i < set5.intsize; i++){
        cout << "ARRAY NUM[" << i << "]: ";
        cout << set5.darr[i] << endl;
    }
    //for(int i = 0; i < set1.intsize; i++){
    //    cout << "ARRAY NUM[" << i << "]: ";
    //    cout << set3.darr[i] << endl;
    //}
    //cout << set3.intsize << endl;
    return 0;
}
