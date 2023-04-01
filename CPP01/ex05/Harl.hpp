/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 06:30:16 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/01 08:13:37 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_H
#define HARL_HPP_H

#include <iostream>
#include <iostream>


class Harl {
	private :
		void debug(void);
		void info(void);
		void error(void);
		void warning(void);
		std::string level[4];
		void (Harl::*complainer[4])(void);
	public :
		void complain(std::string level);
		Harl();
		~Harl();
};

#endif