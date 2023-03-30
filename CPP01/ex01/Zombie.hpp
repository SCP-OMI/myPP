/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:57 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 02:13:16 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private :
		std::string Z_name;
	public :
		Zombie();
		~Zombie();
		void announce(void);
		std::string Get_z_name();
		void Set_z_name(std::string zombieName);
};
	Zombie* zombieHorde( int N, std::string name );
	
#endif