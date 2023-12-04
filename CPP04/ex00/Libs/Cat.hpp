/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:29:28 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:25:17 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Animal.hpp"

class Cat : public Animal{
	public :
		Cat();
		Cat(std::string type);
		virtual ~Cat();
		Cat(const Cat &_Cat);
		Cat &operator= (const Cat &_Cat);
		void makeSound() const;
	
};