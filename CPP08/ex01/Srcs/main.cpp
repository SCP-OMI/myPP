#include "../Libs/span.hpp"
#include <time.h> 
#include <stdlib.h>

int main(){
    unsigned int size = 5;
    span span(size);
    try {
        srand(time(0));
        int number = rand();
        // for (unsigned int i = 0; i < size; i++){
            span.addNumber(6);
            span.addNumber(3);
            span.addNumber(17);
            span.addNumber(9);
            span.addNumber(11);
    // }
    }
    catch (const char *error){
        std::cout << "7ala chaba khoya hbibi: vector is full!" << std::endl;
    }
     span.printNumber();
    // span.shortestSpan();
    std::cout << span.longestSpan() << std::endl;
    std::cout << span.shortestSpan() << std::endl;
}