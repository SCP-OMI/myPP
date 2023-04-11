/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:47:22 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 01:24:50 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(){
	std::cout << "Default kitieeeeee has been called" << std::endl;
	this->type = "Cat ";
}

Cat::Cat(std::string name){
	std::cout << "Constructor kitieeeeee has been called" << std::endl;
	this->type = name;
}
Cat::~Cat(){
	std::cout << "Destructor kitieeeeee has been called" << std::endl;
}

Cat& Cat::operator=(const Cat &_Cat){
	this->type = _Cat.type;
	return(*this);
}

Cat::Cat(const Cat &_Cat){
	*this = _Cat;
}

void Cat::makeSound() const{
	std::cout << "Cat go brrrr" << std::endl;
}