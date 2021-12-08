#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
#include "LibraryItem.hpp"
using namespace std;


Movie::Movie(string idc, string t, string a) : LibraryItem(idc, t) {
    idCode = idc;
    title = t;
    checkedOutBy = NULL;
    requestedBy = NULL;
    author = a;

}

int Movie::getCheckOutLength(){
    return CHECK_OUT_LENGTH;
}
