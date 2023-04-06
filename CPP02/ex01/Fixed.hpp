/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:48:44 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/06 12:52:31 by mcharouh         ###   ########.fr       */
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
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& other);
		void operator= (const Fixed &fixed);
		void operator<< (const Fixed &fixed);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
};



#endif