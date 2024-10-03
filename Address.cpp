#include "Address.h"
#include <string>

using namespace std;

string Address::pretty_print() {
    return street + "\n" + city + ", " + state + " " + postal_code + " " + country;
}
