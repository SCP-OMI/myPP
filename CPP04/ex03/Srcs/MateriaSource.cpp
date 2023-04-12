/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:44:15 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 08:04:46 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource Constructor has been called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src){
	for (int i = 0; i < 4; i++)
		this->Admin_Skillz[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource Destructor has been called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->Admin_Skillz[i];
}

MateriaSource & MateriaSource::operator= (MateriaSource const & other){
	for (int i = 0; i < 4; i++)
		delete this->Admin_Skillz[i];
	for (int i = 0; i < 4; i++)
		//Impliment the clone method
	return *this;
}

void MateriaSource::learnMateria(AMateria* Skill){
	for (int i = 0; i < 4; i++){
		if (this->Admin_Skillz[i] == NULL){
			this->Admin_Skillz[i] = Skill;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] != NULL)
			if(this->inventory[i]->getType() == type)
				return(this->inventory[i]->clone());
	}
	return (NULL);
}