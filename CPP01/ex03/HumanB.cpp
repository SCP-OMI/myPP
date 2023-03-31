/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:46:44 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/31 03:29:39 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"


void HumanB::setWeapon(Weapon &weapon) {
	B_weapon = &weapon;
}

Weapon HumanB::GetWeapon(){
	return *B_weapon;
}
void HumanB::getAddWeapon()
{
	std::cout << B_weapon <<std::endl;
}

HumanB::HumanB(std::string name){
	this ->B_name = name;
}
HumanB::~HumanB(){	
}

void HumanB::attack(){
	if(B_weapon == NULL)
		std::cout << this->B_name << "Has no weapon"<<std::endl;
	else
		std::cout << this ->B_name << " attakcs with their " <<  B_weapon->getType() << std::endl;
}