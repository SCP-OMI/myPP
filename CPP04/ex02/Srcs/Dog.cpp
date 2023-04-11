/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:46:52 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 08:26:09 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Dog.hpp"

Dog::Dog(){
	std::cout << "Default Doggieeeeee Constructor has been called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(std::string name){
	std::cout << "Constructor Doggieeeeee has been called" << std::endl;
	this->type = name;
}
Dog::~Dog(){
	std::cout << "Destructor Doggieeeeee has been called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator= (const Dog &_Dog){
	this->type = _Dog.type;
	delete this->_brain;
	if (_Dog._brain){
		this->_brain = new Brain();
	}
	else
		this->_brain = NULL;
	return *this;
}

Dog::Dog(const Dog &_Dog){
	*this = _Dog;
}

void Dog::makeSound() const{
	std::cout << this->type << " go brrrr" << std::endl;
}