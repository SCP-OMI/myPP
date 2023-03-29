/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:57:48 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/29 18:31:53 by mcharouh         ###   ########.fr       */
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
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif