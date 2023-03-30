/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:32:04 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 14:15:18 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

class HumanA {
	private :
		std::string name;
		Weapon weapon;
	public :
	HumanA();
	~HumanA();
	void attack(std::string type);
};



#endif