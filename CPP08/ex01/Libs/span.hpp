#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <algorithm>

class span {
    private:
        std::vector<int> array;
        unsigned int size;

    public:
        span();
        span(unsigned int size);
        ~span();
        span(const span& _copySpan);
        span &operator=(const span& span);

        void addNumber(int N);
        void printNumber();
        int shortestSpan();
        int longestSpan();
};

#endif