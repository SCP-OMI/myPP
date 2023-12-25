#include "../Libs/Bureaucrat.hpp"

int main (){
    /*Error No 1*/
    try {
        Bureaucrat Steve("OMI", -2);}
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat SafeSteve("OMI", 2);

    for (int i=0; i<15; i++){
    try{
        SafeSteve.GradeUP();
        std::cout << SafeSteve << std::endl;
        // std::cout << Steve.GetGrade() << std::endl;
    }
    catch (const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    }
        std::cout << "No Exceptions were unhandled" << std::endl;
    return 0;
    }
    
