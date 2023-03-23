/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:25:00 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/23 09:31:03 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"

int g_i = 0;
int counter = 0;

void AddContact(Contacts& contact) {
	
	if (g_i < 8)
	{
		//Contacts contact;
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
		g_i++;
		counter++;
		if (g_i++ == 7)
			g_i = 0;
	}
	
	
}


void SearchContact(Contacts& contact) {
	//(void) contact;
	/* You need to show a grid of 4 elements (index, FirstName, LastName, NickName)*/
	std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "FirstName" << "|";
    std::cout << std::setw(10) << "LastName" << "|";
    std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	int i = 0;
	//instead of having a fixed counter 5, you need to have a int counter that tracks the number of contacts you have.
	while (i < counter){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contact.getFirstName() << "|";
		std::cout << std::setw(10) << contact.getLastName() << "|";
		std::cout << std::setw(10) << contact.getNickName() << "|" << std::endl;
		i++;

	}

	
}

/*You will have to make two "structs", one has contact information, called Contacts
	and one which holds up to 8 contacts; called PhoneBook
"*/
int main ()
{
	Contacts contact;
	std::string command = "";

	std::cout << "Please enter a valid command: ";

	while (1)
	{
		std::cout << "Valid commands are ADD-SEARCH-EXIT : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			AddContact(contact);
		else if (command == "SEARCH")
			SearchContact(contact);
		else if (command == "EXIT")
			exit(0);
		// else
		// {
		// 	error :
		// 		std::cout << "NIGGA TYPE GOOD" << std::endl;
				
		// }
	}
}