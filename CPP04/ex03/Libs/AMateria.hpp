/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:07:24 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 09:21:08 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../Libs/ICharacter.hpp"


class AMateria {
	protected :
		std::string type;
	public : 
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		AMateria &operator=(Materia const &other);

		std::string const &getType() const = 0;
		virtual void use(ICharacter& target);
};


#endif