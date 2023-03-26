/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:25:00 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/26 09:23:20 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"
#include<unistd.h>             
#include "phonebook.hpp"

// int counter = 1;
// int index = 0;

void AddContact(PhoneBook *phonebook) {
		
	std::string input;
	Contacts tmp_contact;
	//int counter = 0, index = 0;
		 /* Get-Set FirstName */
	std::cout << "FirstName: ";
	std::getline(std::cin, input);
	tmp_contact.setFirstName(input);
		 /* Get-Set LastName */
	std::cout << "LastName: ";
	std::getline(std::cin, input);
	tmp_contact.setLastName(input);
		 /* Get-Set NickName */
	std::cout << "NickName: ";
	std::getline(std::cin, input);
	tmp_contact.setNickName(input);
		 /* Get-Set PhoneNumber */   
	std::cout << "PhoneNumber: ";
	std::getline(std::cin, input);
	tmp_contact.setPhoneNumber(input);
		 /* Get-Set DarkestSecret */
	std::cout << "DarkestSecret: ";
	std::getline(std::cin, input);
	tmp_contact.setDarkestSecret(input);
	phonebook->SetContact(tmp_contact);
	std::cout << "CONTACT HAS BEEN CREATED SUCCESSFULY !!" << std::endl;
	
	// std::cout << std::setw(10) << phonebook->index << "|";
	// 	std::cout << std::setw(10) << tmp_contact.getFirstName() << "|";
	// 	std::cout << std::setw(10) << tmp_contact.getLastName() << "|";
	// 	std::cout << std::setw(10) << tmp_contact.getNickName() << "|" << std::endl;
		
	sleep(1);
	phonebook->index++;
	if (phonebook->index > 7)
		phonebook->index = 0;
	if (phonebook->counter < 8)
		phonebook->counter++;
}


void ListContacts(PhoneBook *phonebook){
	
	Contacts contact;
	int i = 0;
	
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	while (i < phonebook->counter)
	{
		contact = phonebook->GetContact(i);

		std::cout << std::setw(10) << i << "|";
		//if (contact.getFirstName().size() > 10)
			//contact.getFirstName().substr(10,0);
		std::cout << std::setw(10) << contact.getFirstName() << "|";
		std::cout << std::setw(10) << contact.getLastName() << "|";
		//std::cout << std::setw(10) << contact.getNickName() << "|" << std::endl;
		i++;
	}
}



void SearchContact(PhoneBook *phonebook) {
	Contacts contact;
	std::string command;
	ListContacts(phonebook);

	std::cout << "Please enter the index of the contact you want to expand" << std::endl;

	while (1337)
	{
		std::getline(std::cin, command);
		int command_index = std::stoi(command);
			if (command_index++ > phonebook->index)
				std::cout << "Please enter a correct index identifier" << std::endl;
			}
	
}

int main (){
	PhoneBook phonebook;
	std::string command = "";

	std::cout << "Welcome to your AMAZING PHONEBOOK !!" << std::endl;
	usleep(800);
	phonebook.counter = 0;
	phonebook.index = 0;
	while (1)
	{
		if (command != "ADD" || command != "SEARCH" || command != "EXIT")
			std::cout << "Valid commands are ADD-SEARCH-EXIT : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			AddContact(&phonebook);
		else if (command == "SEARCH")
			SearchContact(&phonebook);
		else if (command == "EXIT")
			exit(0);
	}
}