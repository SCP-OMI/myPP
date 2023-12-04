/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:28 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/05 12:27:31 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << Zombie::Get_z_name() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::Set_z_name(std::string zombieName){
	Z_name = zombieName;
}

int main (){
	Zombie* zombie = zombieHorde(2, "zombie");
	delete [] zombie;
}