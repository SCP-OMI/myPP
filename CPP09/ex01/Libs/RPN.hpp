#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <cctype>
#include <algorithm>
#include <sstream>

#define CALLIBRE 48
class RPN{
    private :
        std::string _RPN;
        std::stack<int> stack;
        std::string _operator;
        bool op;
        int counter;
    public  :
        RPN();
        RPN(std::string RPN);

        RPN(const RPN& copy);
        RPN& operator=(const RPN& RPN);
        ~RPN();

        int routine();
        int intConvert(std::string& _num);
};
    void error_print(std::string error);
#endif