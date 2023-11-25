#include "../Libs/Bureaucrat.hpp"
#include "../Libs/Form.hpp"

int main (){

    Bureaucrat Steve("OMI", 10);
    Form Form("Formi", 1);
for (int i=0; i<10; i++){
   try{
    std::cout << "req_Grade : " << Form.GetGrade() << " B_Grade : " << Steve.GetGrade() << std::endl;
    Steve.GradeUP();
    Form.beSigned(Steve);
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