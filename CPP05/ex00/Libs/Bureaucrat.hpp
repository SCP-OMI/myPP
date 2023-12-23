#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
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
        
        /*Execptions*/
        class GradeTooHighException : public std::exception{
            public :
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public :
                virtual const char* what() const throw();
        };
        /*Getters*/
        std::string GetName()const;
        int GetGrade()const;
        /*Grade Manips*/
        void GradeUP();
        void GradeDOWN();

};
        std::ostream & operator<<(std::ostream &os, const Bureaucrat& Bureaucrat);
#endif