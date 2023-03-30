/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:47:31 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 18:47:51 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

void HumanA::SetWeapon(Weapon weapon){
	A_weapon =  weapon;
}
Weapon HumanA::GetWeapon(){
	return A_weapon;
}

HumanA::HumanA(std::string name, Weapon& weapon) : A_weapon(weapon)
{
	// A_weapon.setType(type);
	this ->A_name = name;
	// this ->A_weapon = weapon;
}

HumanA::~HumanA(){

}


void HumanA::attack(){
	std::cout << this ->A_name << " attakcs with their " <<  A_weapon.getType() << std::endl;
}
