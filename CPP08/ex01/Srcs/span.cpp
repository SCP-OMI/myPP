#include "../Libs/span.hpp"

span::span(){
    std::cout << "default" << std::endl;
}

span::span(unsigned int size){
    this->size = size;
    this->array = std::vector<int>();
    this->array.reserve(size);
    // std::cout << "size :" << size << std::endl;
}

span::span(const span& _copySpan){
    this->array = _copySpan.array;
}

span& span::operator=(const span& span){
    this->array = span.array;
    return *this;
}


void span::addNumber(int N){
    if (this->array.size() > this->size)
        throw ("7ala chaba khoya hbibi: vector is full!");
    this->array.push_back(N);
    // std::cout << "current size :" << this->array.size() << std::endl;
}
void span::printNumber() {
    std::cout << "=====Your Vector=====" << std::endl;
    if (!this->array.empty()) {
        for (std::vector<int>::iterator it = this->array.end() - 1; it != this->array.begin()-1; --it) {
            std::cout << *it << std::endl;
        }
    }
}


int span::shortestSpan(){
    std::cout << "=====Your Shortest Span=====" << std::endl;
    std::vector<int> sorted_vector = this->array;

    std::sort(sorted_vector.begin(), sorted_vector.end());

    std::vector<int> differences;
    for (size_t i = 1; i < sorted_vector.size(); ++i) {
        differences.push_back(sorted_vector[i] - sorted_vector[i - 1]);
    }

    int shortest_span = *std::min_element(differences.begin(), differences.end());
    return shortest_span;
}

int span::longestSpan(){
    std::cout << "=====Your Longest Span=====" << std::endl;
    int max_value = *std::max_element(this->array.begin(), this->array.end());
    int min_value = *std::min_element(this->array.begin(), this->array.end());

        // Calculate the longest span
        int longest_span = max_value - min_value;
    return longest_span;

}

span::~span(){
    std::cout << "dest" << std::endl;
}