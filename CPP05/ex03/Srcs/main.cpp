#include"../Libs/intern.hpp"
#include"../Libs/PresidentialPardonForm.hpp"
#include"../Libs/RobotomyRequestForm.hpp"
#include"../Libs/ShrubberyCreationForm.hpp"

int main(){
	AForm *Robot;
	AForm *Tree;
	AForm *Prez;

	Intern InterNOMI;
	std::cout << "=========Default Case=========" << std::endl;

	Robot = InterNOMI.makeForm("Robot", "OMI");
	Prez = InterNOMI.makeForm("Prez", "OMI");
	Tree = InterNOMI.makeForm("Tree", "OMI");

	std::cout << std::endl;

	std::cout << "=========Error Case=========" << std::endl;

	InterNOMI.makeForm("HA", "OMI");

	delete Prez;
	delete Tree;
	delete Robot;

}