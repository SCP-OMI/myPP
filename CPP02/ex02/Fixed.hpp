/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:25:28 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/07 17:02:09 by mcharouh         ###   ########.fr       */
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
		Fixed();
		Fixed(const int integer);
		Fixed(const float _float);
		/*Getter*/
		int getFixed_p(void) const;
		/*Fixed Operations*/
		float toFloat(void) const;
		int toInt(void) const;
		/*Connonical form needs*/
		Fixed(const Fixed& other);
		Fixed & operator= (const Fixed &fixed);
		/*Comparision Overloaders*/
		bool operator> (const Fixed &fixed) const;
		bool operator< (const Fixed &fixed) const;
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
		~Fixed();
		/*Min Max member functions*/
		static Fixed& min(Fixed& fixed_a, Fixed& fixed_b);
		static Fixed& max(Fixed& fixed_a, Fixed& fixed_b);
		static Fixed& min(const Fixed& fixed_a, const Fixed& fixed_b);
		static Fixed& max(const Fixed& fixed_a, const Fixed& fixed_b);
		
};

		std::ostream & operator<< (std::ostream &os, const Fixed &fixed);
#endif