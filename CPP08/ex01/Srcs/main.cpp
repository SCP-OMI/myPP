#include "../Libs/span.hpp"
#include <time.h> 
#include <stdlib.h>

int main(){
    unsigned int size = 5;
    span span(size);
    try {
        srand(time(NULL));
        int number = rand();
        // for (unsigned int i = 0; i < size; i++){
            span.addNumber(number/1);
            span.addNumber(number/2);
            span.addNumber(number/3);
            span.addNumber(number/4);
            span.addNumber(number/5);
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