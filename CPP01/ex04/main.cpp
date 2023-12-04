/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 01:46:58 by mcharouh          #+#    #+#             */
/*   Updated: 2023/04/01 08:46:58 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


void stdReplace(char **av) {
	std::string inFile = av[1];
	std::string outFile = inFile + ".replace";
	std::string TBR = av[2];
	std::string TR  = av[3];

	if (!inFile.empty())
	{
		std::ifstream infile(inFile);
		std::ofstream outfile(outFile);
		std::string content;
		
		if (infile.is_open() && outfile.is_open())
		{
			while (std::getline(infile, content))
			{
				int i = content.find(TBR);
				while(i != -1)
				{
					content.erase(i, TBR.size());
					content.insert(i, TR);
					i = content.find(TBR, i + TR.size());
				}
				outfile << content << std::endl;
			}
			infile.close();
			outfile.close();
		}
		else {
			std::cerr << "Failed to obtain file from file, check if the file exists and has the right permissions" << std::endl;
			exit(1);
		}
	}
	else {
		std::cerr << "Failed to obtain file from file, check if file is empty" << std::endl;
		exit (1);
	}
}



int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of args, valid input is 'filename' 'string to be replaced' 'string to replace' " << std::endl;
		return (1);
	}
	stdReplace(av);
	return (0);
}