#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "../Libs/Form.hpp"

class Form;

class Bureaucrat{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &Bureaucrat);
        Bureaucrat &operator= (const Bureaucrat &Bureaucrat);
        std::string GetName()const;
        void GradeTooHighException();
        void GradeTooLowException();
        int GetGrade()const;
        void GradeUP();
        void GradeDOWN();
        void signForm(Form form);

};
    std::ostream & operator<<(std::ostream &os, const Bureaucrat& Bureaucrat);
#endif