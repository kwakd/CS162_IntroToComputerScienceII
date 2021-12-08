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

LibraryItem::LibraryItem(string idc, string t){
    idCode = idc;
    title = t;
    checkedOutBy = NULL;
    requestedBy = NULL;
}


string LibraryItem::getIdCode() {
    return idCode;
}
string LibraryItem::getTitle() {
    return title;
}

Locale LibraryItem::getLocation() {
    return location;
}
void LibraryItem::setLocation(Locale loc) {
    location = loc;
}
Patron* LibraryItem::getCheckedOutBy() {
    return checkedOutBy;
}
void LibraryItem::setCheckedOutBy(Patron* p) {
    checkedOutBy = p;
}
Patron* LibraryItem::getRequestedBy() {
    return requestedBy;
}
void LibraryItem::setRequestedBy(Patron* p) {
    requestedBy = p;
}
int LibraryItem::getDateCheckedOut() {
    return dateCheckedOut;
}
void LibraryItem::setDateCheckedOut(int d) {
    dateCheckedOut = d;
}
