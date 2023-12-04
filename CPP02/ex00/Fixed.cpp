/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:16:59 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/07 03:41:29 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default Constructor called" << std::endl;
	this ->Fixed_p = 0;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(){
	std::cout << "Desctructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function has been called" << std::endl;
	return (this->Fixed_p);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function has been called" << std::endl;
	this ->Fixed_p = raw;
}

Fixed& Fixed::operator= (const Fixed &fixed){
	std::cout << "Copy assignment operator has been called" << std::endl;
	this->Fixed_p = fixed.getRawBits();
	return *this;
}