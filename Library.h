#ifndef LIBRARYEXERCISE_LIBRARY_H
#define LIBRARYEXERCISE_LIBRARY_H

#include <string>
#include <vector>
#include <iostream>
#include "PhoneNumber.h"
#include "Address.h"
#include "Book.h"

using namespace std;

class Library {
private:
    string name;
    PhoneNumber phone_number;
    Address address;
    vector<Book> available_books;
public:
    Library(const string &name, const PhoneNumber &phoneNumber, const Address &address);

    string get_phone_number();
    string print_full_address();
    void add_book(Book book);
    void print_available();
};

Library::Library(const string &name, const PhoneNumber &phoneNumber, const Address &address) : name(name), phone_number(
        phoneNumber), address(address) {
//    this->address = address;
//    this->phone_number = phoneNumber;
//    this->name = name;
}


#endif //LIBRARYEXERCISE_LIBRARY_H
