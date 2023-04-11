/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:29:28 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 08:46:44 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"
#include "../Includes/Brain.hpp"

class Cat : public Animal{
	private :
		Brain *_brain;
	public :
		Cat();
		Cat(std::string type);
		virtual ~Cat();
		Cat(const Cat &_Cat);
		Cat &operator= (const Cat &_Cat);
		void makeSound() const;
	
};