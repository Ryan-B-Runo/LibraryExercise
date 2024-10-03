#include <iostream>
#include "PhoneNumber.h"
#include "Address.h"
#include "Library.h"

int main() {
    PhoneNumber *p = new PhoneNumber(1, "222", "222-2222");
    Address *a = new Address("111 Main St", "town", "IL", "060000", "US");
    Library *l = new Library("The Library", *p, *a);
    Book *book1 = new Book("book1", "john", true);
    Book *book2 = new Book("book2", "jim", false);
    l->add_book(*book1);
    l->add_book(*book2);
    l->print_available();
    return 0;
}
