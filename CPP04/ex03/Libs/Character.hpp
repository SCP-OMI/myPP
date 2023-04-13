/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:23:30 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:51:27 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../Libs/ICharacter.hpp"
#include "../Libs/AMateria.hpp"

# include <string>
# include <iostream>

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	inventory[4];
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		Character & operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
