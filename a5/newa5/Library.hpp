
#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "Album.hpp"
#include "Movie.hpp"
#include "LibraryItem.hpp"

class Library
{
private:
    //std::vector<Book*> holdings;
    std::vector<LibraryItem*> holdings;
    std::vector<Patron*> members;
    int currentDate;
public:
    Library();
    //void addBook(Book*);
    void addLibraryItem(LibraryItem*);
    void addPatron(Patron*);
    std::string checkOutLibraryItem(std::string patronID, std::string bookID);
    //std::string checkOutLibraryItem(std::patronID, std::string ItemID);
    std::string returnLibraryItem(std::string bookID);
    //std::string returnLibraryItem(std::string ItemID);
    std::string requestLibraryItem(std::string patronID, std::string bookID);
    //std::string requestLibraryItem(std::string patronID, std::string ItemID);
    std::string payFine(std::string patronID, double payment);
    //std::string payFine(std::string patronID, double payment);
    void incrementCurrentDate();
    Patron* getPatron(std::string patronID);
    //Patron* getPatron(std::string patronID);
    LibraryItem* getLibraryItem(std::string bookID);
    //LibraryItem* getLibraryItem(std::string ItemID);
};

#endif


