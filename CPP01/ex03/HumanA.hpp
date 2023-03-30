/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:32:04 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 16:22:34 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <iostream>
#include"Weapon.hpp"


class HumanA {
	private :
		std::string name;
		Weapon weapon;
	public :
	HumanA(std::string name, Weapon type);
	~HumanA();
	void attack(std::string type);
};



#endif