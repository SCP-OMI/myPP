#include "phonebook.hpp"
#include<iostream>

void AddContact(Contacts& contact) {
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
    std::cout << "FirstName: ";
    std::getline(std::cin, firstName);
    contact.setFirstName(firstName);
    std::cout << "LastName: ";
    std::getline(std::cin, lastName);
    contact.setLastName(lastName);
    std::cout << "NickName: ";
    std::getline(std::cin, nickName);
    contact.setNickName(nickName);
    std::cout << "PhoneNumber: ";
    std::getline(std::cin, phoneNumber);
    contact.setPhoneNumber(phoneNumber);
    std::cout << "DarkestSecret: ";
    std::getline(std::cin, darkestSecret);
    contact.setDarkestSecret(darkestSecret);
}




int main() 
{
    Contacts contacts;
    std::string command = "";

    std::cout << "Please enter the command you want to perform: ";
    std::getline(std::cin, command);
    if (command == "ADD"){
        AddContact(contacts);
    }
	else if (command == "SEARCH"){
		goto error;
	}
	else if (command == "EXIT"){
		goto error;
	}
	else
	{
		error :
			std::cout << "NIGGA TYPE GOOD" << std::endl;
	}
    return 0;
}
