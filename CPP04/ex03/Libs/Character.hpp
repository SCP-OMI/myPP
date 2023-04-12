/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:23:30 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 08:48:31 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../Libs/ICharacter.hpp"
#include "../Libs/AMateria.hpp"

class Character : public ICharacter{
	
	private :
		std::string Name;
		AMateria* Player_Skillz;
	public :
		Character();
		Character(std::string const & Name);
		Character(Character const & src);
		~Character();

		Character & operator= (Character const & other);
		
		std::string const & getName() const;
		void equip(Materia* Prompted_Skillz);
		void unequip(int i);
		void use(int i, ICharacter& target);
};


#endif