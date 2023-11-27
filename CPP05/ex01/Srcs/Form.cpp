#include "../Libs/Form.hpp"


Form::Form(){
    // std::cout << "Defaut Form constructor has been called" << std::endl;
}
Form::Form(const Form& form){
    *this = form;
}

Form::Form(std::string name, int req_Grade){
    this->name = name;
    this->req_Grade = req_Grade;
    this->is_signed = false;
}

Form::~Form(){
    // std::cout << "Form destructor has been called" << std::endl;
}

Form &Form::operator=(const Form &form){
    this->name = form.name;
    this->is_signed = form.is_signed;
    this->req_Grade = form.req_Grade;
    return *this;
}

std::underflow_error Form::GradeTooLowException(){
    // std::string error = "Grade too low";
    return std::underflow_error("This Form requires a higher Grade to be signed");

    // throw std::string(Bureaucrat.GetName() + " couldn't sign " + this->GetName() + " because " + error);

}

std::string Form::GetName()const{return this->name;}
bool Form::GetSign()const{return this->is_signed;}
int Form::GetGrade()const{return this->req_Grade;}


void Form::beSigned(Bureaucrat Bureaucrat){
    // try {
    std::cout << this->req_Grade << "---" << Bureaucrat.GetGrade() << std::endl;
    if (this->req_Grade >= Bureaucrat.GetGrade())
        this->is_signed = true;
    else
        throw GradeTooLowException();
    // catch (std::underflow_error &e){
        
    // }
}

std::ostream &operator<<(std::ostream &os, const Form& form){
    os << form.GetName() << ", " << form.GetSign() << ", " << form.GetGrade() << std::endl;
    return os;
}

