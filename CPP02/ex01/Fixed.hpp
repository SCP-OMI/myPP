/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:48:44 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 18:39:57 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed{

	private :
		int Fixed_p;
		static const int Fractional_bits = 8;
	public :
		Fixed(const int integer);
		Fixed();
		Fixed(const float);
	//	Fixed(const Fixed& other);
		int getFixed_p(void) const;
		void operator= (const Fixed &fixed);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<< (std::ostream &os, const Fixed &fixed);


#endif