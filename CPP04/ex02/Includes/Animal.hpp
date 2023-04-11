/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:24:08 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 08:58:38 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
	protected :
		std::string type;
	public :
		Animal();
		Animal(std::string name);
		virtual ~Animal();
		Animal(const Animal &_Animal);
		Animal & operator= (const Animal &_Animal);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif