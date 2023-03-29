/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:33:49 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/29 18:44:01 by mcharouh         ###   ########.fr       */
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

void Zombie::Set_z_name(std::string zombieName){
	Z_name = zombieName;
}

void randomChump(std::string name){
	Zombie zombie;
	zombie.Set_z_name(name);
	zombie.announce();
}

Zombie* newZombie(std::string name){
	Zombie* zombiePTR = new Zombie();

	zombiePTR->Set_z_name(name);
	return(zombiePTR);	
}



void Zombie::announce(void){
	std::cout <<  Zombie::Get_z_name() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

int main ()
{
	Zombie *zombie;
	std::cout << "Creating Zombie on the stack" << std::endl;
	randomChump("Zombie1");
	std::cout << "Creating Zombie on the heap" << std::endl;
	zombie = newZombie("Zombie2");
	zombie->announce();
	while (1);
}