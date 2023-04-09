/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:34:41 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/07 22:52:01 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

	private :
		int Fixed_p;
		static const int Fractional_bits = 8;
	public :
		Fixed();
		/*Connonical form needs*/
		Fixed(const Fixed& other);
		Fixed & operator= (const Fixed &fixed);
		/*Getters */
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};



#endif