/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:08:36 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/09 02:14:40 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (){
	ClapTrap Clap("OMI");
	
	for (int i = 0; i < 9 ; i++){
		Clap.attack("MEHDI");
		Clap.takeDamage(8);
		Clap.beRepaired(1);}

	
}