/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:54:36 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:54:45 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) {
	*this = src;
}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & other) {
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}