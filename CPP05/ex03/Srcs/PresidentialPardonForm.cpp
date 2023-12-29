#include "../Libs/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", target, 25, 5){
    // this->name = "PresidentialPardonForm";
    // this->target = target;
    // this->Signing_grade = 25;
    // this->Exec_grade = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){
    // this->name = copy.GetName();
    // this->target = copy.GetTarget();
    // this->Signing_grade = copy.GetSign();
    // this->Exec_grade = copy.GetExec();
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& Pardon) {
    this->name = Pardon.name;
    this->target = Pardon.target;
    this->Signing_grade = Pardon.Signing_grade;
    this->Exec_grade = Pardon.Exec_grade;
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