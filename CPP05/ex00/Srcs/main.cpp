#include "../Libs/Bureaucrat.hpp"

int main (){

    Bureaucrat Steve("OMI", 10);
    // std::cout << Steve << std::endl;
    // std::cout << Steve.GetGrade() << std::endl;
    // std::cout << Steve.GetName() << std::endl;
for (int i=0; i<15; i++){
   try{
    Steve.GradeUP();
    std::cout << Steve << std::endl;
    // std::cout << Steve.GetGrade() << std::endl;
   }
   catch (const std::underflow_error& e){
    std::cerr << e.what() << std::endl;
   }
   catch (const std::overflow_error &e){
    std::cerr << e.what() << std::endl;
   }
}
    std::cout << "Your program didn't crash" << std::endl;
   return 0;
}