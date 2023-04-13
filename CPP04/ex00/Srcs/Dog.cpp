/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:46:52 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:26:27 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Dog.hpp"

Dog::Dog(){
	std::cout << "Default Doggieeeeee Constructor has been called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string name){
	std::cout << "Constructor Doggieeeeee has been called" << std::endl;
	this->type = name;
}
Dog::~Dog(){
	std::cout << "Destructor Doggieeeeee has been called" << std::endl;
}

Dog& Dog::operator= (const Dog &_Dog){
	this->type = _Dog.type;
	return *this;
}

Dog::Dog(const Dog &_Dog){
	*this = _Dog;
}

void Dog::makeSound() const{
	std::cout << this->type << " goes Haw" << std::endl;
}