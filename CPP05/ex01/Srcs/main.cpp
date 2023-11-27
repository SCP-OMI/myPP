#include "../Libs/Bureaucrat.hpp"
#include "../Libs/Form.hpp"

int main (){

    Bureaucrat Steve("LMOS", 3);
    Form Form("DLA7", 5);
for (int i=0; i <= 3; i++){
    std::cout << "req_Grade : " << Form.GetGrade() << " B_Grade : " << Steve.GetGrade() << std::endl;
    // Form.beSigned(Steve);
    Steve.signForm(Form);
    // Steve.GradeUP();
    Steve.GradeUP();
    std::cout << std::endl;
    // std::cout << "Hi there, my name is " << Steve.GetName() << ", my grade is : " << Steve.GetGrade() << std::endl;
    // std::cout << Steve.GetGrade() << std::endl;
 
}
    // std::cout << "Your program didn't crash" << std::endl;
   return 0;
}