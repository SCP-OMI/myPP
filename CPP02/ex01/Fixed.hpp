/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:48:44 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/07 22:51:09 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>

class Fixed{

	private :
		int Fixed_p;
		static const int Fractional_bits = 8;
	public :
		Fixed();
		Fixed(int integer);
		Fixed(float _float);
		/*Connonical form needs*/
		Fixed(const Fixed& other);
		Fixed& operator= (const Fixed &fixed);
		/*Ex Member Functions*/
		float toFloat(void) const;
		int getFixed_p(void) const;
		int toInt(void) const;
		~Fixed();
};

std::ostream &operator<< (std::ostream &os, const Fixed &fixed);


#endif