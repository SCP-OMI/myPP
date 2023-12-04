/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:30:06 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 06:30:42 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"
#include "../Includes/Brain.hpp"

class Dog : public Animal{
	public :
		Dog();
		Dog(std::string type);
		virtual ~Dog();
		Dog(const Dog &_Cat);
		Dog &operator= (const Dog &_Cat);
		void setType(const Dog &_Dog);
		void makeSound() const;
	private :
		Brain *_brain;
		
};