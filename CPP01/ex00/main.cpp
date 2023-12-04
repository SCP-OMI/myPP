/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:33:49 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/29 22:38:10 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <unistd.h>

void Zombie::Set_z_name(std::string zombieName){
	Z_name = zombieName;
}


void Zombie::announce(void){
	std::cout <<  Zombie::Get_z_name() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

int main ()
{
	Zombie *zombie;
	std::cout << "Creating Zombie on the stack" << std::endl;
	sleep(1);
	randomChump("Zombie1");
	std::cout << "Creating Zombie on the heap" << std::endl;
	sleep(2);
	zombie = newZombie("Zombie2");
	zombie->announce();
	sleep(1);
	delete zombie;
}