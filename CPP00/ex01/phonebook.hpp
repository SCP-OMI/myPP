/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:32:38 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/26 07:41:00 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "contacts.hpp"

class PhoneBook {
	private :
		Contacts contact[8];
	public :
		// PhoneBook();
		// ~PhoneBook();
		int index;
		int counter;
		void SetContact(Contacts contact);
		Contacts GetContact(int indexx);
		void SetCounter(int counter);
		int GetCounter();
	/* You will need to have a function that prints a specefic contact from the phonebook*/	
};
		void SearchContact();
		void AddContact();
		void ListContacts();
#endif