#include "../Libs/ScalarConverter.hpp"

enum type {
    _int,
    _char,
    _float,
    _double,
    _noType,
};


ScalarConverter::ScalarConverter(){
    std::cout << "Default Constructor" << std::endl;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "Default Destructor" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& SC){
    (void) SC;
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& SC){
    *this = SC;
}

bool is_digit(std::string input){
 for (size_t i = input.at(0) == '-' ? 1 : 0; i < input.length(); i += 1) {
        if (!isdigit(input.at(i)))
            return false;
    }
    return true;
}

bool is_char(std::string input){
     if (input.length() != 1)
        return false;
    if (input.at(0) < std::numeric_limits<char>::min()
     || input.at(0) > std::numeric_limits<char>::max()
     || isdigit(input.at(0)))
            return false;
    return true;
}

bool is_float(std::string input){
    bool    found_point;

    if (input == "-inff" || input == "+inff" || input == "nanf")
        return true;
    if (input.at(input.length() - 1) != 'f')
        return false;
    found_point = false;

    for (size_t i = 0; i < input.length() - 1; i += 1)
    {
        if (input.at(i) == '.' && found_point)
            return false;
        else if (input.at(i) == '.'){
            found_point = true;
            continue;
        }
        if (!isdigit(input.at(i)))
            return false;
    }
    return true;
}

bool is_double(std::string input){
    bool    found_point;

    found_point = false;
    if (input == "-inf" || input == "+inf" || input == "nan")
        return true;
    for (size_t i = 0; i < input.length(); i += 1)
    {
        if (input.at(i) == '.' && found_point)
            return false;
        else if (input.at(i) == '.')
        {
            found_point = true;
            continue ;
        }
        if (!isdigit(input.at(i)))
            return false;
    }
    return true;
}

type Check_type(std::string input){
    /*Check int*/
    if (is_char(input))
        return _char;
    else if (is_float(input))
        return _float;
    else if (is_digit(input))
        return _int;
    else if (is_double(input))
        return _double;
    /*Check char*/
    return (_noType);
}

void print_char(std::string input){

    std::cout << "char : " << static_cast<char>(input[0]) << std::endl;
    std::cout << "int : " << static_cast<int>(input[0]) << std::endl;
    std::cout << "float : " << static_cast<float>(input[0]) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(input[0]) << ".0" << std::endl;
}

bool check_printable(int _input){
    if (isprint(_input))
        return true;
    return false;
}

void print_int(std::string input){
    int _input = atoi(input.c_str());
    // std::cout << "Original val : " << _input << std::endl;
    if(!check_printable(_input))
        std::cout << "char : " << "Not speakable by mortal men." << std::endl;
    else
        std::cout << "char : " << static_cast<char>(_input) << std::endl;
    std::cout << "int : " << static_cast<int>(_input) << std::endl;
    std::cout << "float : " << static_cast<float>(_input) << ".0f" << " (No fixed point s*** for you.)" << std::endl;
    std::cout << "double : " << static_cast<double>(_input) << ".0" << " (Refer to ☝️ )" << std::endl;
}



void ScalarConverter::convert(std::string literal){
    /*Check type*/
    switch (Check_type(literal))
    {
    case _char :
        print_char(literal);
        break;
    case _int :
        print_int(literal);
        break;
    case _double :
        print_int(literal);
        break;
    case _float :
        print_int(literal);
        break;
    case _noType :
        std::cout << "No type" << std::endl;
        break;
    }

    // std::cout << literal.length() << std::endl;
    // if (Check_type(literal) == _int)
    //     std::cout << "int" << std::endl;
    // else if (Check_type(literal) == _char)
    //     std::cout << "char" << std::endl;
    // else if (Check_type(literal) == _float)
    //     std::cout << "float" << std::endl;
    // else if (Check_type(literal) == _double)
    //     std::cout << "double" << std::endl;
    // else
    //     std::cout << "NO TYPE" << std::endl;

    // Print_literal();

}

