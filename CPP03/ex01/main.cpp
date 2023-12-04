/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:08:36 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/10 00:18:26 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (){
	ScavTrap Scav("Scav");
	//ClapTrap Clap("Clap");
	
	for (int i = 0; i < 10 ; i++){
		//Clap.attack("MEHDI");
		Scav.attack("MEHDI");
		//Clap.takeDamage(1);
		//Clap.beRepaired(1);
		//Clap.guardGate();
	}
}