/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 06:30:14 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/05 12:36:21 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";

	this->complainer[0] = &Harl::debug;
	this->complainer[1] = &Harl::info;
	this->complainer[2] = &Harl::warning;
	this->complainer[3] = &Harl::error;
}

Harl::~Harl(){
	std::cout << "BAYA!" << std::endl;
}


void Harl::debug(void){
	std::cout << "I love debugging!" << std::endl;
}

void Harl::info(void){
	std::cout << "I love infoing!" << std::endl;
}

void Harl::warning(void){
	std::cout << "This is a warning!" << std::endl;
}
void Harl::error(void){
	std::cout << "This has to be an error!" << std::endl;
}


void Harl::complain(std::string level){
	for (int i = 0; i < 4; i++){
		if (this ->level[i] == level){
			(this ->*complainer[i])();
			break;
		}
	}
}