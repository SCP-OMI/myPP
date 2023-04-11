/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:59:45 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 02:12:09 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
	protected :
		std::string type;
	public :
		WrongCat();
		WrongCat(std::string name);
		~WrongCat();
		WrongCat(const WrongCat &_WrongCat);
		WrongCat & operator= (const WrongCat &_WrongCat);
		void makeSound() const;
		std::string getType() const;
};

#endif