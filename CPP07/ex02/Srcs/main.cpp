#include "../Libs/Array.hpp"

// int main()
// {

// 	Array<int>	a(3);
// 	Array<int>	b(3);

// 	for (int i = 0; i < a.size(); i++) {
// 		std::cout << "a[" << i << "] = " << a[i] << "\n";
// 	}
// 	std::cout << std::endl;
// 	for (int i = 0; i < b.size(); i++) {
// 		std::cout << "b[" << i << "] = " << b[i] << "\n";
// 	}
// 	a[0] = 1;
// 	a[1] = 1;
// 	a[2] = 1;
// 	std::cout << std::endl;
// 	std::cout << "AFTER FILLING A WITH 1's" << std::endl;
// 	for (int i = 0; i < a.size(); i++) {
// 		std::cout << "a[" << i << "] = " << a[i] << "\n";
// 	}
// 	std::cout << std::endl;
// 	for (int i = 0; i < b.size(); i++) {
// 		std::cout << "b[" << i << "] = " << b[i] << "\n";
// 	}
// 	b = a;

// 	std::cout << "AFTER B = A" << std::endl;
// 	for (int i = 0; i < a.size(); i++) {
// 		std::cout << "a[" << i << "] = " << a[i] << "\n";
// 	}
// 	std::cout << std::endl;
// 	for (int i = 0; i < b.size(); i++) {
// 		std::cout << "b[" << i << "] = " << b[i] << "\n";
// 	}


//     Array<int> empty;

//     try {
//         std::cout << empty[1] << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// 	return 0;
// }

// #include <Array.hpp>

#include <iostream>
#define MAX_VAL 10
int main(int, char**)
{
	std::cout << "HELLO" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "RAnge : " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL - 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "RAnge : " << e.what() << '\n';
        // std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
