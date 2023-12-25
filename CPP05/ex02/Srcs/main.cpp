#include <cstdlib>
#include <iostream>

#include "../Libs/Bureaucrat.hpp"
#include "../Libs/AForm.hpp"
#include "../Libs/PresidentialPardonForm.hpp"
#include "../Libs/RobotomyRequestForm.hpp"
#include "../Libs/ShrubberyCreationForm.hpp"

using std::cout;
using std::cerr;
using std::endl;

int main (){
	// try {
	Bureaucrat NotOMI("OMI", 150);
	Bureaucrat OMI("Not OMI", 1);

	ShrubberyCreationForm Tree("OMI");
	PresidentialPardonForm Prez("OMI");
	RobotomyRequestForm Robot("OMI");
	
	std::cout << "===========Starting the <Tree> routine============\n" << std::endl;

	std::cout << "Should not Execute => : "; 
	OMI.executeForm(Tree);
	Tree.beSigned(OMI);
	std::cout << "Form Got signed by OMI" << std::endl;
	std::cout << "Should Execute => : \n";
	OMI.executeForm(Tree);
	std::cout << std::endl;

	std::cout << "===========Starting the <Prez> routine============\n" << std::endl;


	std::cout << "Should not Execute => : "; 
	OMI.executeForm(Prez);
	Prez.beSigned(OMI);
	std::cout << "Form Got signed by OMI" << std::endl;
	std::cout << "Should Execute => : ";
	OMI.executeForm(Prez);
	std::cout << std::endl;


	std::cout << "===========Starting the <Robotomy> routine============\n" << std::endl;

	std::cout << "Should not Execute => : "; 
	OMI.executeForm(Robot);
	Robot.beSigned(OMI);
	std::cout << "Form Got signed by OMI" << std::endl;
	std::cout << "Should Execute => : ";
	OMI.executeForm(Robot);
	std::cout << std::endl;
	std::cout << "===========Starting the catching routine============\n" << std::endl;

	
	std::cout << "===========Starting the <False Tree> routine============\n" << std::endl;
	try {
		NotOMI.executeForm(Tree);
	}
	catch (std::exception& e) {
		std::cout << e.what() << endl;
	}
}