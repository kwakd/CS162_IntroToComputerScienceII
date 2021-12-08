#include <iostream>
#include <string>
#include <vector>
//#include "Library.hpp"
//#include "Patron.hpp"
#include "Book.hpp"
//#include "Album.hpp"
//#include "Movie.hpp"
//#include "LibraryItem.hpp"
using namespace std;


Book::Book(string idc, string t, string a) : LibraryItem(idc, t) {
    idCode = idc;
    title = t;
    checkedOutBy = NULL;
    requestedBy = NULL;
    author = a;

}

int Book::getCheckOutLength(){
    return CHECK_OUT_LENGTH;
}

