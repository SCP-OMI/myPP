/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:35:22 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/30 14:43:24 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
	private :
		std::string type;
	public :
		Weapon();
		~Weapon();
		const std::string& getType();
		void setType(std::string type);
};


#endif