#include "../Libs/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", target, 25, 5){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Pardon){
    (void) Pardon;
    return *this;
}

void PresidentialPardonForm::executeClass(Bureaucrat const& executor) const{
    if (executor.GetGrade() > this->GetExec())
        throw Bureaucrat::GradeTooLowException();
    else if (this->GetBool() == false)
        std::cerr << "Presidential form couldn't get executed by " << executor.GetName() << " Because of curruption " << std::endl;
    else
        std::cout << this->GetTarget() << " Can see the light of day, he did it btw, you've let a criminal out. YOU MONSTER!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){}