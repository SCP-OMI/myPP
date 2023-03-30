/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:45:25 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 17:36:30 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string W_type){
	this ->type = W_type;
}
Weapon::~Weapon(){

}
Weapon::Weapon(){

}

const std::string& Weapon::getType(){
	return type;
}


void Weapon::setType(std::string Wtype) {
	type = Wtype;
}