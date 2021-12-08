#include "Library.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()

{


      Book b1("123", "War and Peace", "Tolstoy");
      Book b2("234", "Moby Dick", "Melville");
      Book b3("345", "Phantom Tollbooth", "Juster");
      Album a1("456", "hello", "justin");
      //Movie m1("567", "nope", "austin");
      Patron p1("abc", "Felicity");
      Patron p2("bcd", "Waldo");
      Library lib;
      lib.addLibraryItem(&b1);
      lib.addLibraryItem(&b2);
      lib.addLibraryItem(&b3);
      lib.addLibraryItem(&a1);
      lib.addPatron(&p1);
      lib.addPatron(&p2);
      lib.checkOutLibraryItem("bcd", "234");
      for (int i=0; i<7; i++)
         lib.incrementCurrentDate();
      cout << lib.checkOutLibraryItem("bcd", "123") << endl;
      cout << lib.checkOutLibraryItem("abc", "345") << endl;
      for (int i=0; i<24; i++)
         lib.incrementCurrentDate();
      cout << lib.payFine("bcd", 0.4) << endl;
      double p1Fine = p1.getFineAmount();
      double p2Fine = p2.getFineAmount();
      cout << p1Fine << endl;
      //cout << "hello" << endl;

    return 0;

}
