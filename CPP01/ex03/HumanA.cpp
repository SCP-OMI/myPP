/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:47:31 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 14:43:16 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"
#include"Weapon.hpp"

HumanA::HumanA(){
	HumanA::Weapon::setType(type);
}
HumanA::~HumanA(){

}

void attack(std::string type){
	
}
