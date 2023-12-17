#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class span{
    private:
        std::vector<int> array;

    public:
        span();
        span(unsigned int size);
        ~span();
        span(const span& _copySpan);
        span &operator=(const span& span);

        void addNumber();
        void shortestSpan();
        void longestSpan();
};

#endif