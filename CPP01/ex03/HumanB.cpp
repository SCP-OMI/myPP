/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:46:44 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 18:54:57 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"


void HumanB::setWeapon(Weapon weapon){
	B_weapon = &weapon;
}

Weapon HumanB::GetWeapon(){
	return B_weapon;
}

HumanB::HumanB(std::string name) : B_weapon(B_weapon){
	this ->B_name = name;
	//this ->B_weapon = weapon; 
}
HumanB::~HumanB(){
	
}

void HumanB::attack(){
	std::cout << this ->B_name << " attakcs with their " <<  B_weapon->getType() << std::endl;
}