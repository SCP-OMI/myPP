/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:35:23 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 08:51:05 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Character.hpp"

Character::Character(){
	std::cout << "Character Constructor has been called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->Player_Skillz[i] = NULL;
}

Character::Character(std::string const & Name){
	std::cout << "Character parametrized Constructor has been called" << std::endl;
	this->Name = Name;
	for (int i = 0; i < 4; i++)
		this->Skill[i] = NULL; 
}

Character::Character(Character const & src){
	for (int i = 0; i < 4; i++)
		this->Player_Skillz[i] = NULL;
	*this = src;
}

Character& Character::operator= (Character const & other){
	for (int i = 0; i < 4; i++)
		delete this->Player_Skillz[i];
	for (int i = 0; i < 4; i++)
		this->Player_Skillz[i] = other.Player_Skillz[i]->clone();
	return *this;
}

std::string const & Character::getName()const {
	return this->Name;
}


void Character::equip(Materia* Prompted_Skillz){
	for (int i = 0; i < 4; i++){
		if (this->Player_Skillz[i] == NULL){
			this->Player_Skillz[i] = Prompted_Skillz;
			return;
		}
	}
}

void Character::unequip(int i){
	if (i < 0 || i > 3)
		return;
	this->Player_Skillz[i] = NULL;
}


void Character::use(int i, ICharacter& target){
	if (i < 0 || i > 3)
		return;
	if (this->Player_Skillz[i] != NULL)
		this->Player_Skillz[i]->use(target);
}

Character::~Character(){
	std::cout << "Character Destructor has been called" << std::endl;
}
