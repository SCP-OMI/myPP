#include "../Libs/Bureaucrat.hpp"
#include "../Libs/Form.hpp"

#include <cstdlib>

int main(void)
{
	std::cout << "=======Begin Routine========" << std::endl;
	{
		std::cout << "=======Too Low Exception========" << std::endl;
		try
		{
			Form	LowForm("LowForm", 151, 151);
			std::cout << LowForm << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "=======Too High Exception========" << std::endl;

		try
		{
			Form	HighForm("HighFrom", -1, 42);
			std::cout << HighForm << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}


		std::cout << "=======Safe Behaviour(OMI Can sign)========" << std::endl;
		try
		{
			Bureaucrat	OMI("OMI", 1);
			std::cout << OMI << std::endl;

			Form	FormA("C1", 1, 2);
			Form	FormB("C2", 90, 150);
			std::cout << FormA << std::endl;
			std::cout << FormB << std::endl;

			FormA.beSigned(OMI);
			FormB.beSigned(OMI);
			FormA.beSigned(OMI);

			std::cout << FormA << std::endl;
			std::cout << FormB << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;

		std::cout << "=======Safe Behaviour(OMI Can't sign)========" << std::endl;
		try
		{
			Bureaucrat	OMI("OMIn't", 150);

			Form	FORMI("FORMI", 1, 2);
			std::cout << OMI << std::endl;

			FORMI.beSigned(OMI);
			std::cout << OMI << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "=======End Routine========" << std::endl;

}
