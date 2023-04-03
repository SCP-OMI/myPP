/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:19:39 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/03 16:08:09 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

void PhoneBook::SetContact(Contacts contact, int Contact_index){
   this ->contact[Contact_index] = contact;
};
Contacts PhoneBook::GetContact(int i){
   return (this->contact[i]);
};


PhoneBook::PhoneBook(){   
}
PhoneBook::~PhoneBook(){
}