#include "../Libs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    // std::cout << "Default constructor has been called" << std::endl;
    this->name = "Normal Guy";
    this->grade = 150;
}
Bureaucrat::~Bureaucrat(){
    // std::cout << "Destructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
    this->name = name;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(int grade){
    this->name = "No Name Was given";
    this->grade = grade;
}
Bureaucrat::Bureaucrat(std::string name){
    this->name = name;
    this->grade = 150;
}

int Bureaucrat::GetGrade() const{return (grade);}
std::string Bureaucrat::GetName()const {return (name);}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat){
    *this = Bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Bureaucrat){
    this->name = Bureaucrat.name;
    this->grade = Bureaucrat.grade;
    return *this;
}

void Bureaucrat::GradeUP() {
    try {
    if (this->grade <= 1)
        GradeTooHighException();
    else
        this->grade -= 1;
    }
    catch (const std::overflow_error &e){
        std::cout << "7ALA CHABA KHOYA 7BIBI : " << e.what() << std::endl;
    }
}
void Bureaucrat::GradeTooHighException(){
    throw std::overflow_error("You're the prez!");
}
void Bureaucrat::GradeTooLowException(){
    throw std::underflow_error("You're fired!");
}
void Bureaucrat::GradeDOWN(){
    try{
    if (this->grade >= 150)
        GradeTooLowException();
    else
        this->grade += 1;
    }
    catch (std::underflow_error &e){
        std::cout << "7ALA CHABA KHOYA 7BIBI : " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(Form form){
    try {
        form.beSigned(*this);
        if(form.GetSign() == true)
            std::cout << this->name << " signed " << form.GetName() << std::endl;
    }
    catch (const std::underflow_error & e) {
        std::cout << this->name << " couldn't sign " << form.GetName() << " Because " << e.what() << std::endl;

    }
        // std::cout << this->name << " couldn't sign " << form.GetName() << " because " << e.what() << std::endl;
}


std::ostream & operator<<(std::ostream &os, const Bureaucrat& Bureaucrat){
    // std::ostream os;
    os << Bureaucrat.GetName() << "bureaucrat grade" << Bureaucrat.GetGrade() << std::endl;
    return os;
}
