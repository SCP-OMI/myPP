#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include<iostream>

class Contacts {
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    Contacts(){};
    ~Contacts(){};
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickName(const std::string& nickName);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

class Phonebook {

	private :
		Contacts[8];
	public :
		
}

#endif