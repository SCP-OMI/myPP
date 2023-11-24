#include "../Libs/Bureaucrat.hpp"

int main (){

    Bureaucrat Steve;
for (int i=0; i<150; i++){
   try{
    Steve.GradeUP();
    std::cout << "Hi there, my name is " << Steve.GetName() << ", my grade is : " << Steve.GetGrade() << std::endl;
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