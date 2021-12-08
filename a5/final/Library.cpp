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
    cout << "item was added" << endl;
    cout << endl;
}


void Library::addPatron(Patron* p) {
    members.push_back(p);
    cout << "patron was added" << endl;
    cout << endl;
}

string Library::checkOutLibraryItem(string patronID, string bookID) {
    int bhold = -1;
    int phold = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bhold = i;
        }
    }
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            phold = i;
        }
    }

    if(phold == -1){
        return "patron was not found";
    }
    else if(bhold == -1){
        return "item was not found";
    }
    if(holdings[bhold]->getLocation() == 0) {
        holdings[bhold]->setCheckedOutBy(members[phold]);
        holdings[bhold]->setDateCheckedOut(currentDate);
        members[phold]->addLibraryItem(holdings[bhold]);
        holdings[bhold]->setLocation(CHECKED_OUT);
        return "check out successful";
    }
    else if (holdings[bhold]->getLocation() == 1) {
        if (holdings[bhold]->getRequestedBy() == members[phold]) {
            holdings[bhold]->setCheckedOutBy(members[phold]);
            holdings[bhold]->setRequestedBy(NULL);
            holdings[bhold]->setDateCheckedOut(currentDate);
            members[phold]->addLibraryItem(holdings[bhold]);
            holdings[bhold]->setLocation(CHECKED_OUT);
            return "check out successful";
        }
        else {
            return "item on hold by other patron";
        }
    }
    else {
        return "item already checked out";
    }
}


string Library::returnLibraryItem(string bookID) {
    int bhold = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bhold = i;
        }
    }
    if(bhold == -1){
        return "item not found";
    }
    else if (holdings[bhold]->getCheckedOutBy() == NULL) {
        return "item already in library";
    }
    else {
        if (holdings[bhold]->getRequestedBy() == NULL) {
            holdings[bhold]->setLocation(ON_SHELF);
        }
        else {
            holdings[bhold]->setLocation(ON_HOLD_SHELF);
        }
        for (int i=0; i<members.size(); i++) {
            if (holdings[bhold]->getCheckedOutBy() == members[i]) {
                members[i]->removeLibraryItem(holdings[bhold]);
                holdings[bhold]->setCheckedOutBy(NULL);
                return "return successful";
            }
        }
    }
}

string Library::requestLibraryItem(string patronID, string bookID) {
    int bhold = -1;
    int phold = -1;
    for (int i=0; i<holdings.size(); i++) {
        if (bookID == holdings[i]->getIdCode()) {
            bhold = i;
        }
    }
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            phold = i;
        }
    }

    if(bhold == -1){
        return "item not found";
    }
    else if(phold == -1){
        return "patron not found";
    }
    else if(holdings[bhold]->getRequestedBy() == NULL){
        holdings[bhold]->setRequestedBy(members[phold]);
        if(holdings[bhold]->getLocation() == 0){
            holdings[bhold]->setLocation(ON_HOLD_SHELF);
        }
        return "request successful";
    }
    else {
        return "item on hold by other patron";
    }
}


string Library::payFine(string patronID, double payment) {
    int phold = -1;
    for (int i=0; i<members.size(); i++) {
        if (patronID == members[i]->getIdNum()) {
            phold = i;
        }
    }
    if(phold == -1){
        return "patron not found";
    }
    else{
        members[phold]->amendFine(-1*payment);
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


