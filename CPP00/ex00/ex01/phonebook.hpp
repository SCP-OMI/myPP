/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 07:16:36 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/23 09:35:42 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include<iostream>

class Contacts {
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    Contacts(){}; /*Constructor*/
    ~Contacts(){}; /*Disctructor*/
    /* Setters */
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickName(const std::string& nickName);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);
    /* Getters */
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};


class Phonebook {
    public:
        Phonebook(); /*Constructor*/
        ~Phonebook(); /*Disctructor*/
    /* Setter */
        void SetContact(Contacts contact);
    /* Getter */
        Contacts GetContact(int index);
    private :
        int count;
        int i;
        Contacts contacts[8];
};

#endif
