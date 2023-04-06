/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:56 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 23:25:56 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int _int){
	std::cout << "Int Constructbor called" << std::endl;
	this ->Fixed_p = _int << this->Fractional_bits; 
}

Fixed::Fixed(){
	std::cout << "Constructor has been called" << std::endl;
}


Fixed::Fixed(const float _float){
	std::cout << "Float Constructor called" << std::endl;
  	this->Fixed_p = roundf((float)(_float *  (1 << this->Fractional_bits)));
	std::cout << this->Fixed_p << std::endl;
}

void Fixed::operator= (const Fixed &fixed){
	this->Fixed_p = fixed.Fixed_p;
}


float Fixed::toFloat() const {
	int factor = 1 << this->Fractional_bits;
	float _float = (float)(this ->Fixed_p) / factor;
	return (_float);
}

int Fixed::getFixed_p() const {
	return this->Fixed_p;
}

int Fixed::toInt()const{
	int factor = 1 << this->Fractional_bits;
	int _int = (int)(this ->Fixed_p) / factor;
	return(_int);
}

std::ostream & operator<< (std::ostream &os, const Fixed &fixed){
	os << fixed.toFloat();
	return os;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}