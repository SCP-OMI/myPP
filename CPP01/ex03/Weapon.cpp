/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:45:25 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 15:41:53 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	
}
Weapon::~Weapon(){

}

const std::string& Weapon::getType(){
	return type;
}


void Weapon::setType(std::string Wtype) {
	type = Wtype;
}