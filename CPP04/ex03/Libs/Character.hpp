/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:23:30 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:14:12 by mcharouh         ###   ########.fr       */
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
		AMateria*	Player_Skill[4];
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		Character & operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int i);
		void use(int i, ICharacter& target);
};

#endif
