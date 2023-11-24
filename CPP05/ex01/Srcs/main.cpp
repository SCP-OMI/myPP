#include "../Libs/Bureaucrat.hpp"
#include "../Libs/Form.hpp"

int main (){

    Bureaucrat Steve("OMI", 10);
    Form Form("Formi", 1);
for (int i=0; i<150; i++){
   try{
    Form.beSigned(Steve);
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