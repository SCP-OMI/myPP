/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:19:39 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 15:48:41 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

void PhoneBook::SetContact(Contacts contact){
   this ->contact[this ->index] = contact;
};
Contacts PhoneBook::GetContact(int i){
   return (this->contact[i]);
};

PhoneBook::PhoneBook(){   
}
PhoneBook::~PhoneBook(){
}