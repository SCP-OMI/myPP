/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:44:00 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/23 08:48:13 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void Contacts::setFirstName(const std::string& firstName) {
    FirstName = firstName;
}

void Contacts::setLastName(const std::string& lastName) {
    LastName = lastName;
}

void Contacts::setNickName(const std::string& nickName) {
    NickName = nickName;
}

void Contacts::setPhoneNumber(const std::string& phoneNumber) {
    PhoneNumber = phoneNumber;
}

void Contacts::setDarkestSecret(const std::string& darkestSecret) {
    DarkestSecret = darkestSecret;
}

std::string Contacts::getFirstName() const {
    return FirstName;
}

std::string Contacts::getLastName() const {
    return LastName;
}

std::string Contacts::getNickName() const {
    return NickName;
}

std::string Contacts::getPhoneNumber() const {
    return PhoneNumber;
}

std::string Contacts::getDarkestSecret() const {
    return DarkestSecret;
}

