/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:56 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 14:36:05 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int _int){
	std::cout << "Int Constructor called" << std::endl;
	this ->Fixed_p = _int << this->Fractional_bits; 
}

Fixed::Fixed(const float _float){
	std::cout << "Float Constructor called" << std::endl;
	this ->Fixed_p = _float << this->Fractional_bits;
}

float Fixed::toFloat(){
	int factor = 1 << 8;
	float _float = (float)(this ->Fixed_p >> this->Fractional_bits) / factor;
	return (_float);
}

int Fixed::toInt(){
	return(this->Fixed_p >> 8);
}

void operator<< (const Fixed &fixed){
	
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}