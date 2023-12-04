/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:35:23 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:14:35 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Character.hpp"

Character::Character() {
	this->name = "Default name";
	for (int i = 0; i < 4; i++)
		this->Player_Skill[i] = NULL;
}

Character::Character(std::string const & name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->Player_Skill[i] = NULL;
}

Character::Character(Character const & src) {
	for (int i = 0; i < 4; i++)
		this->Player_Skill[i] = NULL;
	*this = src;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->Player_Skill[i];
}

Character & Character::operator=(Character const & other)
{
	for (int i = 0; i < 4; i++)
		delete this->Player_Skill[i];
	for (int i = 0; i < 4; i++)
		this->Player_Skill[i] = other.Player_Skill[i]->clone();
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Player_Skill[i] == NULL)
		{
			this->Player_Skill[i] = m;
			return ;
		}
	}
}

void Character::unequip(int i)
{
	if (i < 0 || i > 3)
		return ;
	this->Player_Skill[i] = NULL;
}

void Character::use(int i, ICharacter& target)
{
	if (i < 0 || i > 3)
		return ;
	if (this->Player_Skill[i] != NULL)
		this->Player_Skill[i]->use(target);
}