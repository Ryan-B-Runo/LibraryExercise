#include <string>
using namespace std;

#include "PhoneNumber.h"

string PhoneNumber::pretty_print() {
    return to_string(country_world_code) + " (" + area_code + ") " + phone_number;
}
