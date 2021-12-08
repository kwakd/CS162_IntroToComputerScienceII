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


Album::Album(string idc, string t, string a) : LibraryItem(idc, t) {
    artist = a;
    idCode = idc;
    title = t;
    checkedOutBy = NULL;
    requestedBy = NULL;
}

int Album::getCheckOutLength(){
    return CHECK_OUT_LENGTH;
}
