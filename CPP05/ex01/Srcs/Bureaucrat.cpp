#include "../Libs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor has been called" << std::endl;
    this->name = "Normal Guy";
    this->grade = 150;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor has been called" << std::endl;
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
    if (this->grade <= 1)
        GradeTooHighException();
    else
        this->grade -= 1;
}
void Bureaucrat::GradeTooHighException(){
    throw std::overflow_error("You're the prez!");
}
void Bureaucrat::GradeTooLowException(){
    throw std::underflow_error("You're fired!");
}
void Bureaucrat::GradeDOWN(){
    if (this->grade >= 150)
        GradeTooLowException();
    this->grade += 1;
}


std::ostream & operator<<(std::ostream &os, const Bureaucrat& Bureaucrat){
    // std::ostream os;
    os << Bureaucrat.GetName() << "bureaucrat grade" << Bureaucrat.GetGrade() << std::endl;
    return os;
}
