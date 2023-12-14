#include "../Libs/Serializer.hpp"

int main(){

    uintptr_t intpointer;
    Data Pre_data;
    // serializer serializer;

    Pre_data.Using_a_string_in_a_struct_feels_weird = "It is weird NGL";
    std::cout << "Data : " << Pre_data.Using_a_string_in_a_struct_feels_weird << std::endl;
    std::cout << "Data Address : " << &Pre_data << std::endl;
    intpointer = serializer::serialize(&Pre_data);
    std::cout << "Serialized Address : " << &intpointer << std::endl;
    
    Data *Post_data;
    Post_data = serializer::deserialize(intpointer);
    std::cout << "Data : " << Post_data->Using_a_string_in_a_struct_feels_weird << std::endl;
    std::cout << "Data Address : " << Post_data << std::endl;




   
}
