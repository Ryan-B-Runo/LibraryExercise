#include "Library.h"
#include <iostream>

string Library::get_phone_number() {
    return phone_number.pretty_print();
}

string Library::print_full_address() {
    return address.pretty_print();
}

void Library::add_book(Book book) {
    available_books.push_back(book);
}

void Library::print_available() {
    for(Book book : available_books){
        cout << book.pretty_print() << "\n";
    }
}
