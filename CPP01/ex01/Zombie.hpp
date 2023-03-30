/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:57 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 00:15:09 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


class zombie{
	private :
		std::string Z_name;
	public :
		Zombie();
		~Zombie();
		void announce(void);
};
	Zombie* zombieHorde( int N, std::string name );
	
#endif;