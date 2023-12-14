#include "../Libs/Serializer.hpp"

serializer::serializer(){
    std::cout << "Default" << std::endl;
}

serializer::~serializer(){
    std::cout << "Des" << std::endl;
}

serializer::serializer(const serializer& Copy){
    *this = Copy;
}

serializer &serializer::operator=(const serializer& Ser){
    return *this;
}

uintptr_t serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}
