/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:58:55 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 05:37:05 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default WrongAnimal Constructor has been called" << std::endl;
	this->type = "Default WrongAnimal";
}
WrongAnimal::WrongAnimal(std::string name){
	std::cout << "Parametrized WrongAnimal Constructor has been called" << std::endl;
	this->type = name;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor WrongAnimal has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &_WrongAnimal){
	this->type = _WrongAnimal.type;
	return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal){
	*this = _WrongAnimal;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal go brrrr" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}