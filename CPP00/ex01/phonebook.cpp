/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 07:16:47 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/23 07:16:48 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include<iostream>
#include <iomanip>

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
};

void SearchContact(){
    std::cout << std::setw(10) << "Index |";
    std::cout << std::setw(10) << "FirstName |";
    std::cout << std::setw(10) << "LastName |";
    std::cout << std::setw(10) << "NickName |";
};




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
		SearchContact();
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
