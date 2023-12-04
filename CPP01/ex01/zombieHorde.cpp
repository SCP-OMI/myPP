/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:26 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/05 12:18:15 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <=  0){
		std::cout << "Please enter a positive number bigger than 0" << std::endl;
		exit(127);}
	Zombie* zombiePTR = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombiePTR[i].Set_z_name(name);
		zombiePTR[i].announce();	
	}
	return zombiePTR;
}