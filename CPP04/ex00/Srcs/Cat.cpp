/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:47:22 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:25:35 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Cat.hpp"
#include "../Libs/Animal.hpp"

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
	std::cout << "Cat goes Miaw" << std::endl;
}