/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:59:18 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 02:00:46 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(std::string name);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &_WrongAnimal);
		WrongAnimal & operator= (const WrongAnimal &_WrongAnimal);
		void makeSound() const;
		std::string getType() const;
};

#endif