/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:32:04 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 18:47:03 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <iostream>
#include"Weapon.hpp"


class HumanA {
	private :
		std::string A_name;
		Weapon &A_weapon;
	public :
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
	void SetWeapon(Weapon weapon);
	Weapon GetWeapon();


};



#endif