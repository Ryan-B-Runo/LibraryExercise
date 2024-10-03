#ifndef LIBRARYEXERCISE_PHONENUMBER_H
#define LIBRARYEXERCISE_PHONENUMBER_H
#include <string>
using namespace std;

class PhoneNumber {
private:
    int country_world_code;
    string area_code, phone_number;
public:
    PhoneNumber(int countryWorldCode, const string &areaCode, const string &phoneNumber);

    string pretty_print();
};

PhoneNumber::PhoneNumber(int countryWorldCode, const string &areaCode, const string &phoneNumber) : country_world_code(
        countryWorldCode), area_code(areaCode), phone_number(phoneNumber) {
//    this->phone_number=phoneNumber;
//    this->country_world_code=countryWorldCode;
//    this->area_code=areaCode;
}

#endif //LIBRARYEXERCISE_PHONENUMBER_H
