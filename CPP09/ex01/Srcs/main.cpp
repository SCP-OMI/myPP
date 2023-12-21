#include"../Libs/RPN.hpp"


int main(int ac, char **av){
    if(ac == 2){
        std::string input = av[1];
        // std::cout << input << std::endl;
        // check()
        RPN sad_RPN(input);
        sad_RPN.routine();
    }

}