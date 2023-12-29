#ifndef FORM_HPP
#define FORM_HPP

#include "../Libs/Bureaucrat.hpp"
#include<iostream>
#include <stdlib.h>
#include <ctime>

#define LOWEST_GRADE 1
#define HIGHEST_GRADE 150

class Bureaucrat;

class AForm{
    protected:
        std::string target;
        std::string name;
        bool  is_signed;
        int   Signing_grade;
        int   Exec_grade;

    public :
        AForm();
        virtual ~AForm();
        AForm(const AForm& form);
        AForm(std::string name, std::string target, int Signing_grade, int Exec_grade);
        AForm &operator=(const AForm &form);

        /*Getters*/
        std::string GetName()const;
        std::string GetTarget()const;
        bool GetBool()const;
        int GetSign()const;
        int GetExec()const;

        /*Form Methods*/
        void beSigned(Bureaucrat Bureaucrat);
        void execute(Bureaucrat const& executor) const;
        virtual void executeClass(Bureaucrat const& executor) const = 0;


        class GradeTooLowException : public std::exception{
            public :
                virtual const char* what() const throw();
        };
        class GradeTooHightException : public std::exception{
            public :
                virtual const char* what() const throw();
        };
        
};
    std::ostream &operator<< (std::ostream &os, const AForm& form);
#endif