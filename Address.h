#ifndef LIBRARYEXERCISE_ADDRESS_H
#define LIBRARYEXERCISE_ADDRESS_H
#include <string>

using namespace std;

class Address {
private:
    string street, city, state, postal_code, country;
public:
    Address(const string &street, const string &city, const string &state, const string &postalCode,
            const string &country);

    string pretty_print();
};

Address::Address(const string &street, const string &city, const string &state, const string &postalCode,
                 const string &country) : street(street), city(city), state(state), postal_code(postalCode),
                                          country(country) {
//    this->street = street;
//    this->country = country;
//    this->postal_code = postalCode;
//    this->city = city;
//    this->state = state;
}

#endif //LIBRARYEXERCISE_ADDRESS_H
