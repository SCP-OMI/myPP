/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:13:52 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/29 22:36:00 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie::Zombie(){
}
 Zombie::~Zombie(){
	std::cout << "Zombies have been slayed" << std::endl;
}

std::string Zombie::Get_z_name(){
	return Z_name;
}