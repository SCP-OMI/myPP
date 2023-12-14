#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include<stdint.h>


struct Data
{
    std::string Using_a_string_in_a_struct_feels_weird ;
};


class serializer{
    private:
        
    public:
        serializer();
        ~serializer();
        serializer(const serializer& Copy); 
        serializer& operator= (const serializer& Ser);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif