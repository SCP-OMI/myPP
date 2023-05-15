#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(int grade);
        Bureaucrat(const Bureaucrat &_Bureaucrat);
        Bureaucrat & operator= (const Bureaucrat &_Bureaucrat);
        ~Bureaucrat();
        std::string GetName() const;
        int GetGrade() const;
        void GradeManip(std::string command);
        void Print_B(const Bureaucrat &_Bureaucrat);
};
        std::ostream & operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
#endif