/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:13:52 by mcharouh          #+#    #+#             */
/*   Updated: 2023/03/29 17:41:29 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The constructor takes the name and stores it in the object */
Zombie::Zombie (std::string name){
	this->Z_name = name;
}
/* The destructor just prints the deletion of the object */
Zombie::~Zombie() {
	std::cout << "Zombie " << this->Z_name << "Has been slayed." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->Z_name ":" << "BraiiiiiiinnnzzzZ";
}