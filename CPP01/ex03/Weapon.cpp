/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:45:25 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 14:38:48 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Weapon::Weapon(){
	
}
Weapon::~Weapon(){

}

const std::string& Zombie::getType(){
	return type;
}


void Zombie::setType(std::string Wtype) {
	type = Wtype
}