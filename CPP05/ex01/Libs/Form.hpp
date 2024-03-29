#ifndef FORM_HPP
#define FORM_HPP

#include "../Libs/Bureaucrat.hpp"
#include<iostream>

class Bureaucrat;

class Form{
    private:
        std::string name;
        bool is_signed;
        int   Signing_grade;
        int   Exec_grade; 

    public :
        Form();
        ~Form();
        Form(const Form& form);
        Form(std::string name, int Signing_grade, int Exec_grade);
        Form &operator=(const Form &form);

        /*Getters*/
        std::string GetName()const;
        bool GetBool()const;
        int GetSign()const;
        int GetExec()const;

        /*Form Methods*/
        void beSigned(Bureaucrat Bureaucrat);


        class GradeTooLowException : public std::exception{
            public :
                virtual const char* what() const throw();
        };
        class GradeTooHightException : public std::exception{
            public :
                virtual const char* what() const throw();
        };
        
};
    std::ostream &operator<< (std::ostream &os, const Form& form);
#endif