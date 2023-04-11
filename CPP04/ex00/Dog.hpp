/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:30:06 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 01:15:26 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
	public :
		Dog();
		Dog(std::string type);
		~Dog();
		Dog(const Dog &_Cat);
		Dog &operator= (const Dog &_Cat);
		void setType(const Dog &_Dog);
		void makeSound() const;
		
};