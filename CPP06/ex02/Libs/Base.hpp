#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdlib.h>

class Base{
    public:
        virtual ~Base();

};
void identify(Base& p);
void identify(Base* p);
Base* generate(void);

#endif