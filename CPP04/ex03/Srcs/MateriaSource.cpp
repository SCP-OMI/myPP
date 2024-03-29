/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:44:15 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:55:30 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other) {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	for (int i = 0; i < 4; i++) {
		if (other.inventory[i] != NULL)
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL)
			if (this->inventory[i]->getType() == type)
				return (this->inventory[i]->clone());
	}
	return (NULL);
}