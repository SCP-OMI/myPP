/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:56 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 18:39:42 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int _int){
	std::cout << "Int Constructbor called" << std::endl;
	this ->Fixed_p = _int << this->Fractional_bits; 
}

Fixed::Fixed(){
	//std::cout << "Constructor has been called" << std::endl;
}

// Fixed::Fixed(const Fixed& other){
// 	std::cout << "Copy Const has been called" << std::endl;
// }

Fixed::Fixed(const float _float){
	std::cout << "Float Constructor called" << std::endl;
	const int scale_factor = 1 << this->Fractional_bits;
  	this->Fixed_p = _float * scale_factor;
	//std::cout << this->Fixed_p << std::endl;
	this->Fixed_p = (float)(this->Fixed_p / scale_factor);
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
	os << fixed.toFloat() << std::endl;
	return os;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}