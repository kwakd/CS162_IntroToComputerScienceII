#ifndef BOOK_HPP
#define BOOK_HPP
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
class Patron;
class LibraryItem;


//enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Movie: public LibraryItem
{
private:
    string idCode;
    string title;
    string author;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
public:
    static const int CHECK_OUT_LENGTH = 21;
    Movie(string idc, string t, string a);
    int getCheckOutLength();

};


#endif
