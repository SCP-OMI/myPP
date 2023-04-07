/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:25:28 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/07 02:55:46 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	private :
		int Fixed_p;
		static const int Fractional_bits = 8;
	public :
		Fixed(const int integer);
		Fixed();
		Fixed(const float _float);
		Fixed(const Fixed& other);
		int getFixed_p(void) const;
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		Fixed & operator= (const Fixed &fixed);
		/*Comparision Overloaders*/
		bool operator> (const Fixed &fixed);
		bool operator< (const Fixed &fixed);
		bool operator>= (const Fixed &fixed);
		bool operator<= (const Fixed &fixed);
		bool operator== (const Fixed &fixed);
		bool operator!= (const Fixed &fixed);
		/*Arithmetic Overloaders*/
		Fixed operator+ (const Fixed &fixed);
		Fixed operator- (const Fixed &fixed);
		Fixed operator* (const Fixed &fixed);
		Fixed operator/ (const Fixed &fixed);
		/*Inc/Dec*/
		Fixed & operator++();
		Fixed operator++(int);
		Fixed & operator--();
		Fixed operator--(int);
		
};

		std::ostream & operator<< (std::ostream &os, const Fixed &fixed);
#endif