/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:22:21 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/11 08:59:38 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"
#include "../Includes/WrongAnimal.hpp"
#include "../Includes/WrongCat.hpp"
#include "../Includes/Cat.hpp"
#include "../Includes/Dog.hpp"

int main () {
	
	const Animal hi;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}