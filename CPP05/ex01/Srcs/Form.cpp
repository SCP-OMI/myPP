#include "../Libs/Form.hpp"


Form::Form(){
    std::cout << "Defaut" << std::endl;
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
    std::cout << "Dest" << std::endl;
}

Form &Form::operator=(const Form &form){
    this->name = form.name;
    this->is_signed = form.is_signed;
    this->req_Grade = form.req_Grade;
    return *this;
}

void Form::GradeTooLowException(){
    throw std::underflow_error("This Form requires a higher Grade to be signed");
}

std::string Form::GetName()const{return this->name;}
bool Form::GetSign()const{return this->is_signed;}
int Form::GetGrade()const{return this->req_Grade;}


void Form::beSigned(Bureaucrat Bureaucrat){
    if (this->req_Grade <= Bureaucrat.GetGrade())
        std::cout << "YEP" << std::endl;
    else
        GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form& form){
    os << form.GetName() << ", " << form.GetSign() << ", " << form.GetGrade() << std::endl;
    return os;
}

