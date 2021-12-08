#ifndef PATRON_HPP
#define PATRON_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
#include "LibraryItem.hpp"

//class LibraryItem;

class Patron
{
private:
    std::string idNum;
    std::string name;
    std::vector<LibraryItem*> checkedOutLibraryItem;
    double fineAmount;
public:
    Patron(std::string idn, std::string n);
    std::string getIdNum();
    std::string getName();
    std::vector<LibraryItem*> getCheckedOutLibraryItem();
    void addLibraryItem(LibraryItem* b);
    void removeLibraryItem(LibraryItem* b);
    double getFineAmount();
    void amendFine(double amount);
};

#endif


