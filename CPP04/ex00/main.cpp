/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:22:21 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 01:39:03 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main () {
	
	const Animal* meta = new Animal("ANIMAL");
	const Animal* j = new Dog("DAWGIIIE");
	// const Animal* i = new Cat("KITTTTYYYYYYY");
	std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return 0;
}