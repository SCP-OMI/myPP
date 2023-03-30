/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:31:41 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 14:43:20 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

class HumanB {
	private :
		std::string name;
		Weapon weapon;
	public :
		HumanB();
		~HumanB();
		void attack(std::string type);
};


#endif