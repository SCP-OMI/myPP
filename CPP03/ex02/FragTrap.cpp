/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 07:15:35 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/10 00:41:39 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Default FragTrap Constructor has been called" << std::endl;
	this->C_name = "Default FragTrap name";
	this->Hit_points = 100;
	this->Energy_points = 30;
	this->Attack_damage = 100;
}
FragTrap::~FragTrap(){
	std::cout << "Default FragTrap Destructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	std::cout << "Parametrized FragTrap Destructor has been called" << std::endl;
	this->C_name = name;
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 100;
}

FragTrap &FragTrap::operator=(const FragTrap & _FragTrap){
	this->C_name = _FragTrap.C_name;
	this->Hit_points = _FragTrap.Hit_points;
	this->Attack_damage = _FragTrap.Attack_damage;
	this->Energy_points = _FragTrap.Energy_points;
	return(*this);
}

FragTrap::FragTrap(const FragTrap& _FragTrap){
	std::cout << "Copy FragTrap Constructor has been called" << std::endl;
	*this = _FragTrap;
}

/*Overloading methods / Special inherited class methods*/

void FragTrap::attack(const std::string &target){
	if (this->Energy_points && this->Hit_points){
		std::cout << "FragTrap " << this->C_name << " attacks " << target << " causing " << this->Attack_damage << " points of damage" << std::endl;
		this->Energy_points--;}
	else
		std::cout << "FragTrap " << this->C_name << " does not have enough energy points to attack" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap HighFives you!!!!" << std::endl;
}