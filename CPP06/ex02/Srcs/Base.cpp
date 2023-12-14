#include"../Libs/Base.hpp"
#include"../Libs/A.hpp"
#include"../Libs/B.hpp"
#include"../Libs/C.hpp"

Base::~Base(){}


Base* generate(void){
    srand(time(NULL));
    int i = rand();
    if (i % 2 == 0)
        return new A;
    else if (i % 3 == 0 )
        return new B;
    return new C;
}

void identify(Base* p){
    bool Is_casted;
    Is_casted = dynamic_cast<A*>(p);
    if (Is_casted == true)
        std::cout << "Casted to Type A" << std::endl;
    Is_casted = dynamic_cast<B*>(p);
    if (Is_casted == true)
        std::cout << "Casted to Type B" << std::endl;
    Is_casted = dynamic_cast<C*>(p);
    if (Is_casted == true)
        std::cout << "Casted to Type C" << std::endl;
}

void identify(Base &p){
    try{
        A &a = dynamic_cast<A &>(p);
        std::cout << "Casted to Ref Type A" << std::endl;
    }
    catch (const std::exception& e) {
        try {
            B &b = dynamic_cast<B &>(p);
            std::cout << "Casted to Ref Type B" << std::endl;   
        }
        catch (const std::exception& e){
            try {
                C &c = dynamic_cast<C &>(p);
                std::cout << "Casted to Ref Type C" << std::endl;  
            }
            catch(const std::exception& e){
                std::cout << "How in C++ name did this happen?" << std::endl;
            } 
        }
    }
}
