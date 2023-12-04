/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:41:09 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 00:09:16 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
	private :
		std::string ideas[100];
	public :
		Brain();
		~Brain();
		Brain(const Brain &_Brain);
		Brain &operator= (const Brain& _brain);
		
		
};
#endif