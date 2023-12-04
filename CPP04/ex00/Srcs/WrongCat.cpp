/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 02:02:49 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:26:53 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Default WrongCat Constructor has been called" << std::endl;
	this->type = "Default WrongCat";
}
WrongCat::WrongCat(std::string name){
	std::cout << "Parametrized WrongCat Constructor has been called" << std::endl;
	this->type = name;
}
WrongCat::~WrongCat(){
	std::cout << "Destructor WrongCat has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &_WrongCat){
	this->type = _WrongCat.type;
	return(*this);
}

WrongCat::WrongCat(const WrongCat &_WrongCat){
	*this = _WrongCat;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat go brrrr" << std::endl;
}

std::string WrongCat::getType() const {
	return (this->type);
}