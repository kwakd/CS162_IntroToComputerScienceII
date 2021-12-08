#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "Album.hpp"
//#include "Movie.hpp"
#include "LibraryItem.hpp"

class LibraryItem;

using namespace std;
//enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Movie: public LibraryItem
{
private:
    string director;

    string idCode;
    string title;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
public:
    static const int CHECK_OUT_LENGTH = 7;
    Movie(string idc, string t, string a);
    int getCheckOutLength();

};


#endif



