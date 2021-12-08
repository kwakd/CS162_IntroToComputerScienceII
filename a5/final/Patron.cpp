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


Patron::Patron(string idn, string n) {
    idNum = idn;
    name = n;
    fineAmount = 0;
}


string Patron::getIdNum() {
    return idNum;
}


string Patron::getName() {
    return name;
}

vector<LibraryItem*> Patron::getCheckedOutItems() {
    return checkedOutItems;
}


void Patron::addLibraryItem(LibraryItem* b) {
    checkedOutItems.push_back(b);
}


void Patron::removeLibraryItem(LibraryItem* b) {
    for (int i=0; i<checkedOutItems.size(); i++) {
        if (checkedOutItems[i] == b) {
            checkedOutItems.erase(checkedOutItems.begin()+i);
        }
    }
}


double Patron::getFineAmount() {
    return fineAmount;
}


void Patron::amendFine(double amount) {
    fineAmount = fineAmount + amount;
}
