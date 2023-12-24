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

int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// try {
	Bureaucrat hermano("Hermano", 150);

	Bureaucrat ebil("Ebil", 150);
	cout << endl;

	cout << endl;
	ShrubberyCreationForm scf("Ebil");
	PresidentialPardonForm ppf("Ebil");
	RobotomyRequestForm rrf("Ebil");
	cout << endl;

	// try {

	ebil.executeForm(scf);
	std::cout << "HI" << std::endl;
	scf.beSigned(ebil);
	ebil.executeForm(scf);

	cout << endl;

	ebil.executeForm(ppf);
	ppf.beSigned(ebil);
	ebil.executeForm(ppf);

	cout << endl;

	ebil.executeForm(rrf);
	rrf.beSigned(ebil);
	ebil.executeForm(rrf);
	

	cout << endl;
	// }
	// catch (std::exception& e) {
	// 	cerr << e.what() << endl;
	// }

	try {
		hermano.executeForm(scf);
	}
	catch (std::exception& e) {
		cerr << e.what() << endl;
	}

	cout << endl;
	return EXIT_SUCCESS;
}