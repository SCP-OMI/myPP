/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:26:05 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:49:43 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria::~AMateria(void) {}

AMateria & AMateria::operator=(AMateria const & other)
{
	this->type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use on " << target.getName() << std::endl;
}
