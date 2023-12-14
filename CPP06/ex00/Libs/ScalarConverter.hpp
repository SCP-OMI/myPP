#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include "stdlib.h"
#include <cctype>
#include <limits>
#include <string>  

class ScalarConverter{
    private:
    
    public :
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& SC);
        ScalarConverter& operator=(const ScalarConverter& SC);
        void static convert(std::string literal);
};

#endif