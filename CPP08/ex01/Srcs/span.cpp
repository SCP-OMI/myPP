#include "../Libs/span.hpp"

span::span(){
    std::cout << "default" << std::endl;
}

span::span(unsigned int size){
    this->array = vector<int> vector(size);
}

span::span(const span& _copySpan){
    this->array = _copySpan.array;
}

span& span::operator=(const span& span){
    
}

span::~span(){
    std::cout << "dest" << std::endl;
}