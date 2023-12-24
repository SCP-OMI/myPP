#include "../Libs/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137){
    // this->name = "ShrubberyCreationForm";
    // this->target = target;
    // this->Signing_grade = 145;
    // this->Exec_grade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){
    // this->name = copy.GetName();
    // this->target = copy.GetTarget();
    // this->Signing_grade = copy.GetSign();
    // this->Exec_grade = copy.GetExec();
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& jjk){
    // this->name = jjk.name;
    // this->target = jjk.target;
    // this->Signing_grade = jjk.Signing_grade;
    // this->Exec_grade = jjk.Exec_grade;
    return *this;
}

void ShrubberyCreationForm::executeClass(Bureaucrat const& executor) const{
    if (executor.GetGrade() > this->GetExec()){
        throw Bureaucrat::GradeTooLowException();
        std::cout << "HI" << std::endl;}
    else if (this->GetBool() == false)
        std::cerr << "Presidential form couldn't get executed by " << executor.GetName() << " Because of curruption " << std::endl;
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