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
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade -= 1;
}
// void Bureaucrat::GradeTooHighException(){
//     throw std::underflow_error("You're the prez!");
// }
// void Bureaucrat::GradeTooLowException(){
//     throw std::underflow_error("You're fired!");
// }

void Bureaucrat::GradeDOWN(){
    if (this->grade >= 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade += 1;

}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low";
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.GetName() << ", bureaucrat grade " << bureaucrat.GetGrade() << std::endl;
    return os;
}

void Bureaucrat::signForm(std::string name, bool is_signed){
    if (is_signed)
        std::cout << this->GetName() << " signed " << name << std::endl;
    else
        std::cout << this->GetName() << " couldn't sign " << name << " because throwing here isn't a smart idea." << std::endl;
}