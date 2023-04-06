/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:56 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 16:15:34 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int _int){
	std::cout << "Int Constructor called" << std::endl;
	this ->Fixed_p = _int << this->Fractional_bits; 
}

Fixed::Fixed(){
	std::cout << "Constructor has been called" << std::endl;
}

// Fixed::Fixed(const Fixed& other){
// 	std::cout << "Copy Const has been called" << std::endl;
// }

Fixed::Fixed(const float _float){
	std::cout << "Float Constructor called" << std::endl;
	this ->Fixed_p = (int)_float << this->Fractional_bits;
}

void Fixed::operator= (const Fixed &fixed){
	this->Fixed_p = fixed.Fixed_p;
}


float Fixed::toFloat()const{
	int factor = 1 << this->Fractional_bits;
	float _float = (float)(this ->Fixed_p >> this->Fractional_bits) / factor;
	return (_float);
}

int Fixed::getFixed_p()const{
	return this->Fixed_p;
}

int Fixed::toInt()const{
	int factor = 1 << this->Fractional_bits;
	int _int = (int)(this ->Fixed_p << this->Fractional_bits) * factor;
	return(_int);
}

std::ostream & operator<< (std::ostream &os, const Fixed &fixed){
	os << fixed.getFixed_p() << std::endl;
	return os;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}