#include "../Libs/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& jjk){
    (void) jjk;
    return *this;
}

void ShrubberyCreationForm::executeClass(Bureaucrat const& executor) const{
    if (executor.GetGrade() > this->GetExec()){
        throw Bureaucrat::GradeTooLowException();
        std::cout << "HI" << std::endl;}
    else if (this->GetBool() == false)
        std::cerr << "Shrubbery form couldn't get executed by " << executor.GetName() << " Because it's a desert Retard! " << std::endl;
    else{
        std::cout << "        ^        \n";
        std::cout << "       ^^^       \n";
        std::cout << "      ^^^^^      \n";
        std::cout << "     ^^^^^^^     \n";
        std::cout << "    ^^^^^^^^^    \n";
        std::cout << "   ^^^^^^^^^^^   \n";
        std::cout << "  ^^^^^^^^^^^^^  \n";
        std::cout << " ^^^^^^^^^^^^^^^ \n";
        std::cout << "^^^^^^^^^^^^^^^^^\n";
        std::cout << "       |||       \n";
    
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}