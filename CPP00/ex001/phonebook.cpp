/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:19:39 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/26 08:35:44 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"


// Contacts PhoneBook::GetContact(PhoneBook);
void PhoneBook::SetContact(Contacts contact){
   this ->contact[this ->index] = contact;
};
Contacts PhoneBook::GetContact(int i){
   return (this->contact[i]);
};

// void PhoneBook::SetCounter(int counter){
   
// };
