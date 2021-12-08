#ifndef LIBRARY_ITEM_HPP
#define LIBRARY_ITEM_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "Album.hpp"
//#include "Movie.hpp"
#include "LibraryItem.hpp"

class Patron;

enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};

class LibraryItem{
    private:
        std::string idCode;
        std::string title;
        Locale location;
        Patron* checkedOutBy;
        Patron* requestedBy;
        int dateCheckedOut;
    public:
        static const int CHECK_OUT_LENGTH = 0;
        LibraryItem(std::string idc, std::string t);
        virtual int getCheckOutLength() = 0;
        std::string getIdCode();
        std::string getTitle();
        Locale getLocation();
        void setLocation(Locale);
        Patron* getCheckedOutBy();
        void setCheckedOutBy(Patron*);
        Patron* getRequestedBy();
        void setRequestedBy(Patron*);
        int getDateCheckedOut();
        void setDateCheckedOut(int);





};
#endif // LIBRARY_ITEM_HPP
