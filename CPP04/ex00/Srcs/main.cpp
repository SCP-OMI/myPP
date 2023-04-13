/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:22:21 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/13 06:28:28 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Animal.hpp"
#include "../Libs/WrongAnimal.hpp"
#include "../Libs/WrongCat.hpp"
#include "../Libs/Cat.hpp"
#include "../Libs/Dog.hpp"

int main () {
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	return 0;
}