/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:35:22 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 18:39:05 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string W_type);
		~Weapon();
		const std::string& getType();
		void setType(std::string type);
		Weapon operator= (const Weapon& copy);

};


#endif