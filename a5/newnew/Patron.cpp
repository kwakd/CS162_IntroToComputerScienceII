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

vector<LibraryItem*> Patron::getCheckedOutLibraryItem() {
    return checkedOutLibraryItem;
}


void Patron::addLibraryItem(LibraryItem* b) {
    checkedOutLibraryItem.push_back(b);
}


void Patron::removeLibraryItem(LibraryItem* b) {
    for (int i=0; i<checkedOutLibraryItem.size(); i++) {
        if (checkedOutLibraryItem[i] == b) {
            checkedOutLibraryItem.erase(checkedOutLibraryItem.begin()+i);
        }
    }
}


double Patron::getFineAmount() {
    return fineAmount;
}


void Patron::amendFine(double amount) {
    fineAmount = fineAmount + amount;
}
