/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:47:22 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 00:45:02 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Cat.hpp"
#include "../Includes/Animal.hpp"

Cat::Cat(){
	std::cout << "Default kitieeeeee has been called" << std::endl;
	this->type = "Cat ";
	this->_brain = new Brain;
}

Cat::Cat(std::string name){
	std::cout << "Constructor kitieeeeee has been called" << std::endl;
	this->type = name;
}
Cat::~Cat(){
	std::cout << "Destructor kitieeeeee has been called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat &_Cat){
	this->type = _Cat.type;
	//delete this->_brain;
	if (_Cat._brain){
	 	this->_brain = new Brain();
	}
	return *this;
}

Cat::Cat(const Cat &_Cat){
	this->_brain = NULL;
	*this = _Cat;
}

void Cat::makeSound() const{
	std::cout << "Cat go brrrr" << std::endl;
}