/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 00:57:37 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/09 02:06:28 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default Constructor has been called" << std::endl;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 1;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constructor has been called" << std::endl;
	this->C_name = name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 1;
}
ClapTrap::ClapTrap(const ClapTrap& Copy_Clap){
	std::cout << "Copy Constructor has been called" << std::endl;
	*this = Copy_Clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_ClapTrap){
	this->C_name = _ClapTrap.C_name;
	this->Hit_points = _ClapTrap.Hit_points;
	this->Energy_points = _ClapTrap.Energy_points;
	this->Attack_damage = _ClapTrap.Attack_damage;
	return(*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->Hit_points)
		this->Hit_points = this->Hit_points - amount;
	else
		std::cout << "It's already dead" << std::endl;
		
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->Energy_points && this->Hit_points){
		this->Hit_points = this->Hit_points + amount;
		this->Energy_points--;
		std::cout << "Clap trap has been repaird" << std::endl;}
	else
		std::cout << "ClapTrap " << this->C_name << " does not have enough energy points to repair itself" << std::endl;

}
void ClapTrap::attack(const std::string &target){
	if (this->Energy_points && this->Hit_points){
		std::cout << "Claptrap " << this->C_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage" << std::endl;
		this->Energy_points--;}
	else
		std::cout << "ClapTrap " << this->C_name << " does not have enough energy points to attack" << std::endl;
}