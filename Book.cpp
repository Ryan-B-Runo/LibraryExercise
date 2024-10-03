#include "Book.h"
#include <string>

using namespace std;

string Book::pretty_print() {
    if(fiction){
        return title + " by " + author + " (Fiction)";
    }
    return title + " by " + author + " (Nonfiction)";
}
