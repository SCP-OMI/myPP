/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:25:20 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:55:53 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "../Libs/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource & operator=(MateriaSource const & other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif