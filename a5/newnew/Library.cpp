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


Library::Library() {
    currentDate = 0;
}

void Library::addLibraryItem(LibraryItem* b) {
    b->setLocation(ON_SHELF);
    holdings.push_back(b);
    cout << "Item has been added successfully." << endl;
}


void Library::addPatron(Patron* p) {
    members.push_back(p);
    cout << "Patron has been added successfully." << endl;
}

string Library::checkOutLibraryItem(string patronID, string bookID) {
    int bslot = -1;
    int pslot = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bslot = i;
        }
    }
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            pslot = i;
        }
    }

    if(pslot == -1){
        return "patron not found";
    }
    else if(bslot == -1){
        return "book not found";
    }
    if(holdings[bslot]->getLocation() == 0) {                       //Checks out book if it is on the shelf.
        holdings[bslot]->setCheckedOutBy(members[pslot]);
        holdings[bslot]->setDateCheckedOut(currentDate);
        members[pslot]->addLibraryItem(holdings[bslot]);
        holdings[bslot]->setLocation(CHECKED_OUT);
        return "check out successful";
    }
    else if (holdings[bslot]->getLocation() == 1) {
        if (holdings[bslot]->getRequestedBy() == members[pslot]) {
            holdings[bslot]->setCheckedOutBy(members[pslot]);
            holdings[bslot]->setRequestedBy(NULL);
            holdings[bslot]->setDateCheckedOut(currentDate);
            members[pslot]->addLibraryItem(holdings[bslot]);
            holdings[bslot]->setLocation(CHECKED_OUT);
            return "check out successful";
        }
        else {
            return "book on hold by other patron";
        }
    }
    else {
        return "book already checked out";
    }
}


string Library::returnLibraryItem(string bookID) {
    int bslot = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bslot = i;
        }
    }
    if(bslot == -1){
        return "book not found";
    }
    else if (holdings[bslot]->getCheckedOutBy() == NULL) {
        return "book already in library";
    }
    else {
        if (holdings[bslot]->getRequestedBy() == NULL) {
            holdings[bslot]->setLocation(ON_SHELF);
        }
        else {
            holdings[bslot]->setLocation(ON_HOLD_SHELF);
        }
        for (int i=0; i<members.size(); i++) {
            if (holdings[bslot]->getCheckedOutBy() == members[i]) {
                members[i]->removeLibraryItem(holdings[bslot]);
                holdings[bslot]->setCheckedOutBy(NULL);
                return "return successful";
            }
        }
    }
}

string Library::requestLibraryItem(string patronID, string bookID) {
    int bslot = -1;
    int pslot = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bslot = i;
        }
    }
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            pslot = i;
        }
    }

    if(bslot == -1){
        return "book not found";
    }
    else if(pslot == -1){
        return "patron not found";
    }
    else if(holdings[bslot]->getRequestedBy() == NULL){
        holdings[bslot]->setRequestedBy(members[pslot]);
        if(holdings[bslot]->getLocation() == 0){
            holdings[bslot]->setLocation(ON_HOLD_SHELF);
        }
        return "request successful";
    }
    else {
        return "book on hold by other patron";
    }
}


string Library::payFine(string patronID, double payment) {
    int pslot = -1;
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            pslot = i;
        }
    }
    if(pslot == -1){
        return "patron not found";
    }
    else{
        members[pslot]->amendFine(-1*payment);
        return "payment successful";
    }
}


void Library::incrementCurrentDate() {
    currentDate++;
    for (int i=0; i<holdings.size(); i++) {
        if (holdings[i]->getLocation() == 2) {
            if (holdings[i]->getDateCheckedOut() + holdings[i]->getCheckOutLength() < currentDate) {
                holdings[i]->getCheckedOutBy()->amendFine(.1);
            }
        }
    }
}


Patron* Library::getPatron(string patronID) {
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            return members[i];
        }
    }
    return NULL;
}


LibraryItem* Library::getLibraryItem(string bookID) {
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            return holdings[i];
        }
    }
    return NULL;
}

