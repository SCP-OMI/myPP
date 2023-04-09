/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:46:35 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/09 06:53:02 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default ScavTrap Constructor" << std::endl;
	this->C_name = "Default ScavTrap name";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}
ScavTrap::~ScavTrap(){
	std::cout << "Default ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &_ScavTrap){
	this->C_name = _ScavTrap.C_name;
	this->Hit_points = _ScavTrap.Hit_points;
	this->Energy_points = _ScavTrap.Energy_points;
	this->Attack_damage = _ScavTrap.Attack_damage;
	return(*this);
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "Copy ScavTrap Constructor has been called" << std::endl;
	this->C_name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &_ScavTrap){
	*this = _ScavTrap;
}

void ScavTrap::attack(const std::string &target){
	if (this->Energy_points && this->Hit_points){
		std::cout << "Scavtrap " << this->C_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage" << std::endl;
		this->Energy_points--;}
	else
		std::cout << "ScavTrap " << this->C_name << " does not have enough energy points to attack" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}


