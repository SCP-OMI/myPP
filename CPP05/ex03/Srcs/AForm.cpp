#include "../Libs/AForm.hpp"


AForm::AForm(){
    // std::cout << "Defaut Form constructor has been called" << std::endl;
}
AForm::AForm(const AForm& form){
    this->name = form.name;
    this->is_signed = false;
    this->Exec_grade = form.Exec_grade;
    this->Signing_grade = form.Signing_grade;
}

AForm::AForm(std::string name, std::string target,  int Signing_grade, int Exec_grade){
    this->name = name;
    this->target = target;
    this->is_signed = false;
    this->Exec_grade = Exec_grade;
    this->Signing_grade = Signing_grade;
    if (Signing_grade > 150 || Exec_grade > 150)
        throw (AForm::GradeTooLowException());
    else if (Signing_grade < 1 || Exec_grade < 1)
        throw (AForm::GradeTooHightException());
}

AForm::~AForm(){
    // std::cout << "AForm destructor has been called" << std::endl;
}

AForm &AForm::operator=(const AForm &form){
    this->name = form.name;
    this->is_signed = false;
    this->Exec_grade = form.Exec_grade;
    this->Signing_grade = form.Signing_grade;

    return *this;
}

void AForm::execute(Bureaucrat const& executor) const {
    this->executeClass(executor);
}

const char* AForm::GradeTooHightException::what() const throw(){
    return "7ala chaba khoya 7bibi : Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "7ala chaba khoya 7bibi : Grade too low";
}

std::string AForm::GetTarget()const{return this->target;}
std::string AForm::GetName()const{return this->name;}
bool AForm::GetBool()const{return this->is_signed;}
int AForm::GetSign()const{return this->Signing_grade;}
int AForm::GetExec()const{return this->Exec_grade;}



void AForm::beSigned(Bureaucrat Bureaucrat){
    // try {
    // std::cout << this->req_Grade << "---" << Bureaucrat.GetGrade() << std::endl;
    if (this->Signing_grade >= Bureaucrat.GetGrade()){
        this->is_signed = true;
        Bureaucrat.signForm(this->GetName(), this->is_signed);
    }
    else {
        Bureaucrat.signForm(this->GetName(), this->is_signed);
        throw GradeTooLowException();
    }
    // }
}

std::ostream &operator<<(std::ostream &os, const AForm& form){
    os << form.GetName() << ", " << form.GetBool() << ", " << form.GetSign() << form.GetExec() << std::endl;
    return os;
}

