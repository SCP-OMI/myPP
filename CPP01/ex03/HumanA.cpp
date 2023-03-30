/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:47:31 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 16:18:48 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string type){
	weapon.setType(type);
}
HumanA::~HumanA(){

}

void attack(std::string type){
	
	std::cout << "name" << HumanA::Weapon::getType() << std::endl;
}
