/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:52:17 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:16:26 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) {
	*this = src;
}

Cure::~Cure() {}

Cure & Cure::operator=(Cure const & other) {
	this->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
