/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:52:32 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 05:36:51 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"

Animal::Animal(){
	std::cout << "Default Animal Constructor has been called" << std::endl;
	this->type = "Default Animal";
}
Animal::Animal(std::string name){
	std::cout << "Parametrized Animal Constructor has been called" << std::endl;
	this->type = name;
}
Animal::~Animal(){
	std::cout << "Destructor Animal has been called" << std::endl;
}

Animal& Animal::operator=(const Animal &_Animal){
	this->type = _Animal.type;
	return(*this);
}

Animal::Animal(const Animal &_Animal){
	*this = _Animal;
}

void Animal::makeSound() const{
	std::cout << "Animal go brrrr" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}