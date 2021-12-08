
#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>
#include "LibraryItem.hpp"

class Patron
{
private:
    std::string idNum;
    std::string name;
    std::vector<LibraryItem*> checkedOutItems;
    double fineAmount;
public:
    Patron(std::string idn, std::string n);
    std::string getIdNum();
    std::string getName();
    std::vector<LibraryItem*> getCheckedOutItems();
    void addLibraryItem(LibraryItem* b);
    void removeLibraryItem(LibraryItem* b);
    double getFineAmount();
    void amendFine(double amount);
};

#endif