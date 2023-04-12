/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:25:20 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/12 07:49:38 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
#define MATERIASOURCE

class MateriaSource : public IMateriaSource{
	private :
		AMateria* Admin_Skillz[4];
	public :
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource & operator= (MateriaSource const & other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
}; 

#endif