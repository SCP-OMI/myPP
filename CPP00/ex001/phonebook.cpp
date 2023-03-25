/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:19:39 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/25 03:58:59 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"


// Contacts PhoneBook::GetContact(PhoneBook);
void PhoneBook::SetContact(Contacts contact){
   this ->contact[0] = contact;
};
Contacts PhoneBook::GetContact(int indexx){
   return (this->contact[indexx]);
};

// void PhoneBook::SetCounter(int counter){
   
// };
