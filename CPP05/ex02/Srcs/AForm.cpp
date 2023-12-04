#include "../Libs/AAForm.hpp"


AAForm::AAForm(){
    // std::cout << "Defaut AAForm constructor has been called" << std::endl;
}
AAForm::AAForm(const AAForm& AAform){
    *this = AAform;
}

AAForm::AAForm(std::string name, int req_Grade){
    this->name = name;
    this->req_Grade = req_Grade;
    this->is_signed = false;
}

AAForm::~AAForm(){
    // std::cout << "AAForm destructor has been called" << std::endl;
}

AAForm &AAForm::operator=(const AForm &Aform){
    this->name = Aform.name;
    this->is_signed = Aform.is_signed;
    this->req_Grade = Aform.req_Grade;
    return *this;
}

std::underflow_error AForm::GradeTooLowException(){
    // std::string error = "Grade too low";
    return std::underflow_error("This AForm requires a higher Grade to be signed");

    // throw std::string(Bureaucrat.GetName() + " couldn't sign " + this->GetName() + " because " + error);

}

std::string AForm::GetName()const{return this->name;}
bool AForm::GetSign()const{return this->is_signed;}
int AForm::GetGrade()const{return this->req_Grade;}


void AForm::beSigned(Bureaucrat Bureaucrat){
    // try {
    std::cout << this->req_Grade << "---" << Bureaucrat.GetGrade() << std::endl;
    if (this->req_Grade >= Bureaucrat.GetGrade())
        this->is_signed = true;
    else
        throw GradeTooLowException();
    // catch (std::underflow_error &e){
        
    // }
}

std::ostream &operator<<(std::ostream &os, const AForm& Aform){
    os << Aform.GetName() << ", " << Aform.GetSign() << ", " << Aform.GetGrade() << std::endl;
    return os;
}

