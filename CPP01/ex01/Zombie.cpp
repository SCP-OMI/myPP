/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:30 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 00:22:08 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

 Zombie::Zombie(){
}
 Zombie::~Zombie(){
	std::cout << "Hord of zombies have been slayed" << std::endl;
}

std::string Zombie::Get_z_name(){
	return Z_name;
}