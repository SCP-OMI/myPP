#include "phonebook.hpp"


// Implementation of the setter and getter functions
void Contacts::setFirstName(const std::string& firstName) {
    FirstName = firstName;
}

void Contacts::setLastName(const std::string& lastName) {
    LastName = lastName;
}

void Contacts::setNickName(const std::string& nickName) {
    NickName = nickName;
}

void Contacts::setPhoneNumber(const std::string& phoneNumber) {
    PhoneNumber = phoneNumber;
}

void Contacts::setDarkestSecret(const std::string& darkestSecret) {
    DarkestSecret = darkestSecret;
}

std::string Contacts::getFirstName() const {
    return FirstName;
}

std::string Contacts::getLastName() const {
    return LastName;
}

std::string Contacts::getNickName() const {
    return NickName;
}

std::string Contacts::getPhoneNumber() const {
    return PhoneNumber;
}

std::string Contacts::getDarkestSecret() const {
    return DarkestSecret;
}

void Phonebook::SetContact(Contacts contact){
    Contacts[i] = contact;
    if (count < 8)
        count++;
    if (i < 7)
        i++;
    else
        i = 0;
}