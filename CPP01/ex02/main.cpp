/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:25:41 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/05 12:28:20 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string& stringREF = brain;
	
	std::cout << "This is the stringREF address : " << &stringREF << std::endl;
	std::cout << "This is the stringPTR address : " << stringPTR << std::endl;
	std::cout << "This is the string address : " <<  &brain << std::endl;

	std::cout << "This is the stringREF value : " << stringREF << std::endl;
	std::cout << "This is the stringPTR value : " << *stringPTR << std::endl;
	std::cout << "This is the string value : " << brain << std::endl;
	
	return 0;
}