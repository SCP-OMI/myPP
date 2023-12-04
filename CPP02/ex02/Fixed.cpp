/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:03:52 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/09 01:35:25 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int _int){
	// std::cout << "Int Constructbor called" << std::endl;
	this ->Fixed_p = _int << this->Fractional_bits;
	//std::cout << this->Fixed_p << std::endl;
}

Fixed::Fixed(){
	// std::cout << "Default Constructor has been called" << std::endl;
	this->Fixed_p = 0;
}


Fixed::Fixed(const float _float){
	// std::cout << "Float Constructor called" << std::endl;
  	this->Fixed_p = roundf((float)(_float *  (1 << this->Fractional_bits)));

}

Fixed::Fixed(const Fixed& other){
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
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


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}


std::ostream & operator<< (std::ostream &os, const Fixed &fixed){
	os << fixed.toFloat();
	return os;
}

Fixed & Fixed::operator= (const Fixed &fixed){
	this->Fixed_p = fixed.Fixed_p;
	return (*this);
}


/*Comparision Overloaders*/

bool Fixed::operator> (const Fixed &fixed) const {
	return (this->Fixed_p > fixed.Fixed_p);
}

bool Fixed::operator< (const Fixed &fixed) const{
	return (this->Fixed_p < fixed.Fixed_p);

}

bool Fixed::operator<= (const Fixed &fixed){
	return (this->Fixed_p <= fixed.Fixed_p);

}
 
bool Fixed::operator>= (const Fixed &fixed){
	return (this->Fixed_p >= fixed.Fixed_p);

} 

bool Fixed::operator== (const Fixed &fixed){
	return (this->Fixed_p == fixed.Fixed_p);
} 

bool Fixed::operator!= (const Fixed &fixed){
	return (this->Fixed_p != fixed.Fixed_p);

}

/*Arithmetic Overloaders*/

Fixed Fixed::operator+ (const Fixed &fixed){
	Fixed tmp(this->toFloat() + fixed.toFloat());
	return (tmp);
}
	
Fixed Fixed::operator- (const Fixed &fixed){
	Fixed tmp(this->toFloat() - fixed.toFloat());
	return (tmp);
}

Fixed  Fixed::operator* (const Fixed &fixed){
	Fixed tmp(this->toFloat() * fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator/ (const Fixed &fixed){
	Fixed tmp(this->toFloat() / fixed.toFloat());
	return (tmp);
}

/*Increment Decrement Overloaders*/

Fixed & Fixed::operator++(){
	this->Fixed_p++;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp;
	tmp.Fixed_p++;
	return(tmp);
}

Fixed & Fixed::operator--(){
	this->Fixed_p--;
	return(*this);

}

Fixed Fixed::operator--(int){
	Fixed tmp;
	tmp.Fixed_p--;
	return(tmp);
}

/*Min Max member functions*/

Fixed& Fixed::min(Fixed& fixed_a, Fixed& fixed_b){
	static Fixed min;
	min = (fixed_a < fixed_b) ? fixed_a : fixed_b;
	return min;
}
Fixed& Fixed::max(Fixed& fixed_a, Fixed& fixed_b){
	static Fixed max;
	max = (fixed_a < fixed_b) ? fixed_b : fixed_a;
	return max;
}
Fixed& Fixed::min(const Fixed& fixed_a, const Fixed& fixed_b){
	static Fixed min;
	min = (fixed_a < fixed_b) ? fixed_a : fixed_b;
	return min;
}
Fixed& Fixed::max(const Fixed& fixed_a, const Fixed& fixed_b){
	static Fixed max;
	max = (fixed_a < fixed_b) ? fixed_b : fixed_a;
	return max;
}
	

