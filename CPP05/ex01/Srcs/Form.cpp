#include "../Libs/Form.hpp"


Form::Form(){
    // std::cout << "Defaut Form constructor has been called" << std::endl;
}
Form::Form(const Form& form){
    this->name = form.name;
    this->is_signed = false;
    this->Exec_grade = form.Exec_grade;
    this->Signing_grade = form.Signing_grade;
}

Form::Form(std::string name, int Signing_grade, int Exec_grade){
    this->name = name;
    this->is_signed = false;
    this->Exec_grade = Exec_grade;
    this->Signing_grade = Signing_grade;
    if (Signing_grade > 150 || Exec_grade > 150)
        throw (Form::GradeTooLowException());
    else if (Signing_grade < 1 || Exec_grade < 1)
        throw (Form::GradeTooHightException());
}

Form::~Form(){
    // std::cout << "Form destructor has been called" << std::endl;
}

Form &Form::operator=(const Form &form){
    this->name = form.name;
    this->is_signed = false;
    this->Exec_grade = form.Exec_grade;
    this->Signing_grade = form.Signing_grade;

    return *this;
}

const char* Form::GradeTooHightException::what() const throw(){
    return "7ala chaba khoya 7bibi : Grade too high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "7ala chaba khoya 7bibi : Grade too low";
}

std::string Form::GetName()const{return this->name;}
bool Form::GetBool()const{return this->is_signed;}
int Form::GetSign()const{return this->Signing_grade;}
int Form::GetExec()const{return this->Exec_grade;}


void Form::beSigned(Bureaucrat Bureaucrat){
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

std::ostream &operator<<(std::ostream &os, const Form& form){
    os << form.GetName() << ", " << form.GetBool() << ", " << form.GetSign() << "," << form.GetExec() << std::endl;
    return os;
}

