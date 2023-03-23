/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 07:16:47 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/23 08:14:25 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include<iostream>
#include <iomanip>

void AddContact(Phonebook *phonebook) {
    
    Contacts contact;
    std::string input;
    /* Get-Set FirstName */
    std::cout << "FirstName: ";
    std::getline(std::cin, input);
    contact.setFirstName(input);
    /* Get-Set LastName */
    std::cout << "LastName: ";
    std::getline(std::cin, input);
    contact.setLastName(input);
    /* Get-Set NickName */
    std::cout << "NickName: ";
    std::getline(std::cin, input);
    contact.setNickName(input);
    /* Get-Set PhoneNumber */   
    std::cout << "PhoneNumber: ";
    std::getline(std::cin, input);
    contact.setPhoneNumber(input);
    /* Get-Set DarkestSecret */
    std::cout << "DarkestSecret: ";
    std::getline(std::cin, input);
    contact.setDarkestSecret(input);

    
};

void SearchContact(){
    std::cout << std::setw(10) << "Index | ";
    std::cout << std::setw(10) << "FirstName | ";
    std::cout << std::setw(10) << "LastName | ";
    std::cout << std::setw(10) << "NickName | ";
};




int main() 
{
    Contacts contacts;
    std::string command = "";

    while (command != "EXIT")
    {
        std::cout << "Please enter the command you want to perform: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            AddContact(contacts);
        else if (command == "SEARCH")
            SearchContact();
        else if (command == "EXIT")
            goto error;
        else
        {
            error :
                std::cout << "NIGGA TYPE GOOD" << std::endl;
        }
    }
        return 0;
}
