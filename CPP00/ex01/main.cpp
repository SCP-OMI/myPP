/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:25:00 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/28 14:48:35 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"
#include<unistd.h>          
#include <string.h>   
#include "phonebook.hpp"

void AddContact(PhoneBook *phonebook) {
		
	std::string input;
	Contacts tmp_contact;
	bool a = 1;
	//int counter = 0, index = 0;
	while (a)
	{
		 /* Get-Set FirstName */
		std::cout << "FirstName: ";
		std::getline(std::cin,input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty())
			tmp_contact.setFirstName(input);
	
		else
			a = 0;
			/* Get-Set LastName */
		std::cout << "LastName: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty()){
			tmp_contact.setLastName(input);}
		else
			a = 0;
			/* Get-Set NickName */
		std::cout << "NickName: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty())
			tmp_contact.setNickName(input);
		else
			a = 0;
			/* Get-Set PhoneNumber */
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty())
		for (int i = 0; input[i]; i++){
			if (input[i] < '0' || input[i] > '9')
				a = 0;
		}
		//a = 0;
		tmp_contact.setPhoneNumber(input);
			/* Get-Set DarkestSecret */
		std::cout << "DarkestSecret: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.empty())
			tmp_contact.setDarkestSecret(input);
		else 
			a = 0;
		phonebook->SetContact(tmp_contact);
		if (a == 1)
			break;
		a = 1;
		std::cout << "invalid input, please check" << std::endl;
	}

	std::cout << "CONTACT HAS BEEN CREATED SUCCESSFULY !!" << std::endl;
	
	sleep(1);
	phonebook->index++;
	if (phonebook->index > 7)
		phonebook->index = 0;
	if (phonebook->counter < 8)
		phonebook->counter++;
}


// void ContactResize(std::string){
// 	Contacts contact;
	
// 	if (contact.getFirstName().size() > 10)
// 		std::cout << std::setw(10) << contact.getFirstName().substr(0,9) + ".|"; 
// 	if (contact.getLastName().size() > 10)
// 		std::cout << std::setw(10) << contact.getLastName().substr(0,9) + ".|";
// 	if (contact.getNickName().size() > 10)
// 		std::cout << std::setw(10) << contact.getNickName().substr(0,9) + ".|";
// }

void ListContacts(PhoneBook *phonebook){
	
	Contacts contact;
	int i = 0;
	
	std::cout << std::setw(10) << "Index" << "|", std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|", std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	while (i < phonebook->counter)
	{
		contact = phonebook->GetContact(i);
		std::cout << std::setw(10) << i << "|";
		if (contact.getFirstName().size() > 10)
			std::cout << std::setw(10) << contact.getFirstName().substr(0,9) + ".|"; 
		else
			std::cout << std::setw(10) << contact.getFirstName() << "|";
		if (contact.getLastName().size() > 10)
			std::cout << std::setw(10) << contact.getLastName().substr(0,9) + ".|";
		else
			std::cout << std::setw(10) << contact.getLastName() << "|";
		if (contact.getNickName().size() > 10)
			std::cout << std::setw(10) << contact.getNickName().substr(0,9) + ".|" << std::endl;
		else
			std::cout << std::setw(10) << contact.getNickName() << "|" << std::endl;
		i++;
	}
}

void SearchContact(PhoneBook *phonebook) {
	Contacts contact;
	std::string command;
	ListContacts(phonebook);
	if (phonebook->index < 1)
		std::cout << "Your contact list is empty, please use the command ADD to create and store a new contact" << std::endl;
	else
		std::cout << "Please enter the index of the contact you want to expand" << std::endl;
	std::getline(std::cin, command);
	if (std::cin.eof())
		exit(0);
		

	while (phonebook->index > 0)
	{
		int command_index = atoi(command.c_str());
		if (command_index == 0 && command != "0"){
			std::cout << "Please enter a correct index identifier" << std::endl;
			break;}
		else if (command_index <= phonebook->index) {
			contact = phonebook->GetContact(command_index);
			std::cout << "First Name : " << std::cout << contact.getFirstName() << std::endl;
			std::cout << "Last Name : " << contact.getLastName() << std::endl;
			std::cout << "Nick Name : " << contact.getNickName() << std::endl;
			std::cout << "Phone Number : " <<contact.getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret : " <<contact.getDarkestSecret() << std::endl;
			break;}

		else 
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
		if (std::cin.eof())
			exit(0);
		if (command == "ADD")
			AddContact(&phonebook);
		else if (command == "SEARCH")
			SearchContact(&phonebook);
		else if (command == "EXIT"){
			std::cout << "Bye Bye !!" << std::endl;
			sleep(1);
			exit(0);
		}
	}
}