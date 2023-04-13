/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:08:53 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 05:59:44 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Libs/IMateriaSource.hpp"
# include "../Libs/MateriaSource.hpp"
# include "../Libs/ICharacter.hpp"
# include "../Libs/Character.hpp"
# include "../Libs/AMateria.hpp"
# include "../Libs/Ice.hpp"
# include "../Libs/Cure.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}