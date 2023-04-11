/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:22:21 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 02:37:26 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main () {
	
	const WrongAnimal* meta = new WrongAnimal("ANIMAL");
	//const WrongAnimal* j = new WrongDog("DAWGIIIE");
	const WrongAnimal* i = new WrongCat("KITTTTYYYYYY");
//	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	//j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	//delete j;
	return 0;
}