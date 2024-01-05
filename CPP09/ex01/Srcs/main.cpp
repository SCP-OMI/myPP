#include"../Libs/RPN.hpp"


int main(int ac, char **av){
    if(ac == 2){
        //Comment 
        std::string input = av[1];
        // std::cout << input << std::endl;
        // check()
        RPN sad_RPN(input);
        std::cout << sad_RPN.routine() << std::endl;
    }
    else
        error_print("Usage : ./RPN args");

}