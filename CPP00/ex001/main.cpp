/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:25:00 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/25 03:58:44 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"
#include "phonebook.hpp"

// int counter = 1;
// int index = 0;

void AddContact(PhoneBook *phonebook) {
		
	std::string input;
	Contacts tmp_contact;
	int counter = 0, index = 0;
	/* Get-Set FirstName */
	std::cout << "FirstName: ";
	std::getline(std::cin, input);
	tmp_contact.setFirstName(input);
	// /* Get-Set LastName */
	std::cout << "LastName: ";
	std::getline(std::cin, input);
	tmp_contact.setLastName(input);
	// /* Get-Set NickName */
	std::cout << "NickName: ";
	std::getline(std::cin, input);
	tmp_contact.setNickName(input);
	// /* Get-Set PhoneNumber */   
	std::cout << "PhoneNumber: ";
	std::getline(std::cin, input);
	tmp_contact.setPhoneNumber(input);
	// /* Get-Set DarkestSecret */
	std::cout << "DarkestSecret: ";
	std::getline(std::cin, input);
	tmp_contact.setDarkestSecret(input);
	phonebook->SetContact(tmp_contact);
	index++;
	if (index > 7)
		index = 0;
	if (counter < 8)
		counter++;
}


void SearchContact(PhoneBook *phonebook) {
	Contacts contact;
	contact = phonebook->GetContact(0);
	/* You need to show a grid of 4 elements (index, FirstName, LastName, NickName)*/
	std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "FirstName" << "|";
    std::cout << std::setw(10) << "LastName" << "|";
    std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	int i = 0;
	//printf("%d\n", counter);
	//printf("%d\n", g_i);
	//instead of having a fixed counter 5, you need to have a int counter that tracks the number of contacts you have.
	std::cout << std::setw(10) << i << "|";
	std::cout << std::setw(10) << contact.getFirstName() << "|";
	std::cout << std::setw(10) << contact.getLastName() << "|";
	std::cout << std::setw(10) << contact.getNickName() << "|" << std::endl;
	i++;

}

/*You will have to make two "structs", one has contact information, called Contacts
	and one which holds up to 8 contacts; called PhoneBook
"*/
int main (){
	PhoneBook phonebook;
	std::string command = "";

	std::cout << "Please enter a valid command: ";

	while (1)
	{
		std::cout << "Valid commands are ADD-SEARCH-EXIT : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			// phonebook.contact[index] = AddContact();
			AddContact(&phonebook);
		else if (command == "SEARCH")
			SearchContact(&phonebook);
		// else if (command == "EXIT")
		// 	exit(0);
		// else
		// {
		// 	error :
		// 		std::cout << "NIGGA TYPE GOOD" << std::endl;
				
		// }
	}
}