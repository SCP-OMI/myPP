#include <iostream>

int main(int ac, char **str)
{
	if (ac == 2)
	{
		int i = 0;
		while (*str[1])
		{
			while (std::islower(*str[1]))
				*str[1] -= 32;
			std::cout << *str[1];
			*str[1]++;
		}
		std::cout << std::endl;
		return 0;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}