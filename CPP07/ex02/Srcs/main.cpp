#include "../Libs/Array.hpp"
#include <iostream>
#define MAX_VAL 25


int main(int, char**)
{
    {
        std::cout << ">>>>>>>>>>>> Empty Scope <<<<<<<<<<<<" << std::endl;
        Array<int> ints(0);
        std::cout << "size of empty ints array is : " << ints.size() << std::endl;
        Array<char> chars(0);
        std::cout << "size of empty char array is : " << chars.size() << std::endl;

    }
    std::cout << std::endl;
    {
        std::cout << ">>>>>>>>>>>>> Char SCOPE <<<<<<<<<<<<< " << std::endl;
        Array<char> characters(27);
        char* mirror = new char[27];
        int val = 65;
        for (int i = 0; i < 26; i++){ 
            characters[i] = val;
            mirror[i] = val;
            val++;
        }
        for (int i = 0; i < 26; i++)
         {
            if (mirror[i] != characters[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            characters[-1] = 's';
            }
        catch(const std::exception& e)
        {
            std::cerr << "Range exception : " << e.what() << '\n';
        }
        try
        {
            characters[27] = 0;
        }
        catch(const std::exception& e){
            std::cerr << "non range exception : " << e.what() << '\n';
        }
        for (int i = 0; i < 26; i++){
        	std::cout << characters[i] << " ";
        }
        std::cout << std::endl;

          std::cout << ">>>>>>>> Editing the array <<<<<<<<" << std::endl;
        for (int i = 0; i < MAX_VAL; i++){
            characters[i] += 1;
        }
        
        for (int i = 0; i < MAX_VAL; i++){
        	std::cout << characters[i] << " ";
        }
        std::cout << std::endl;
        
    }
    std::cout << std::endl;

    {
        std::cout << ">>>>>>>>>>>>> INT SCOPE <<<<<<<<<<<<< " << std::endl;
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
            std::cerr << "Range exception : " << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL + 1] = 0;
        }
        catch(const std::exception& e){
            std::cerr << "non range exception : " << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++){
            numbers[i] = i;
        }
        for (int i = 0; i < MAX_VAL; i++){
        	std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;

        std::cout << ">>>>>>>> Editing the array <<<<<<<<" << std::endl;
        for (int i = 0; i < MAX_VAL; i++){
            numbers[i] += 1;
        }
        
        for (int i = 0; i < MAX_VAL; i++){
        	std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;

        delete [] mirror;//
    }
    return 0;
}

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