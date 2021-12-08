

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <string>
#include <vector>
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
#include "Patron.hpp"


class Library
{
private:
    std::vector<LibraryItem*> holdings;
    std::vector<Patron*> members;
    int currentDate;
public:
    Library();
    void addLibraryItem(LibraryItem*);
    void addPatron(Patron*);
    std::string checkOutLibraryItem(std::string patronID, std::string ItemID);
    std::string returnLibraryItem(std::string ItemID);
    std::string requestLibraryItem(std::string patronID, std::string ItemID);
    std::string payFine(std::string patronID, double payment);
    void incrementCurrentDate();
    Patron* getPatron(std::string patronID);
    LibraryItem* getLibraryItem(std::string ItemID);
};

#endif
