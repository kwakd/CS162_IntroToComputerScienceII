#ifndef ALBUM_HPP
#define ALBUM_HPP
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
//enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Album: public LibraryItem
{
private:
    string artist;
    string idCode;
    string title;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
public:
    static const int CHECK_OUT_LENGTH = 14;
    Album(string idc, string t, string a);
    int getCheckOutLength();

};


#endif


