#ifndef ALBUM_HPP
#define ALBUM_HPP
#include <iostream>
#include <string>
#include <vector>
//#include "Library.hpp"
#include "LibraryItem.hpp"
//#include "Patron.hpp"
//#include "Book.hpp"
//#include "Album.hpp"
//#include "Movie.hpp"



//enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Album: public LibraryItem
{
private:
    std::string artist;
    /*
    std::string idCode;
    std::string title;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;*/
public:
    static const int CHECK_OUT_LENGTH = 14;
    Album(std::string idc, std::string t, std::string a);
    int getCheckOutLength();

};


#endif


