/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:31:41 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 15:36:14 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private :
		Weapon weapon;
		std::string name;
	public :
		HumanB();
		~HumanB();
		void attack(std::string type);
};


#endif