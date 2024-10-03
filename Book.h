#ifndef LIBRARYEXERCISE_BOOK_H
#define LIBRARYEXERCISE_BOOK_H
#include <string>

using namespace std;

class Book {
private:
    string title, author;
    bool fiction;
public:
    Book(const string &title, const string &author, bool fiction);

    string pretty_print();
};

Book::Book(const string &title, const string &author, bool fiction) : title(title), author(author), fiction(fiction) {
//    this->title = title;
//    this->fiction = fiction;
//    this->author = author;
}

#endif //LIBRARYEXERCISE_BOOK_H
