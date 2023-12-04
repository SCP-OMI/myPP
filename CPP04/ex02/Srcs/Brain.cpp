/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:14:08 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 08:53:36 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Constructor has been called" << std::endl;
}

Brain &Brain::operator= (const Brain& _brain){
	for(int i = 0; i < 99; i++){
		this->ideas[i] = _brain.ideas[i];
	}
	return(*this);
}

Brain::Brain(const Brain &_Brain){
	std::cout << "Brain Copy constructor has been called" << std::endl;
	*this = _Brain;
}

Brain::~Brain(){
	std::cout << "Brain Destructor has been called" << std::endl;
}

