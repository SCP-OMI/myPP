/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:08:36 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/09 07:55:07 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (){
	ScavTrap Scav("Scav");
	ScavTrap SCAAV;
	ClapTrap Clap("Clap");
	FragTrap Frag("Frag");
	
	for (int i = 0; i < 5 ; i++){
		Frag.attack("MEHDI");
		Scav.attack("MEHDI");
		Clap.attack("MEHDI");
		//Clap.beRepaired(1);
		Frag.highFivesGuys();
			}
	
}