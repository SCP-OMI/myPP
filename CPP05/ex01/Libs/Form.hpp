#ifndef FORM_HPP
#define FORM_HPP

#include "../Libs/Bureaucrat.hpp"
#include<iostream>

class Bureaucrat;

class Form{
    private:
        std::string name;
        bool is_signed;
        int   req_Grade;
    public :
        Form();
        ~Form();
        Form(const Form& form);
        Form(std::string name, int req_Grade);
        Form &operator=(const Form &form);
        std::string GetName()const;
        bool GetSign()const;
        int GetGrade()const;
        /*Form Methods*/
        void beSigned(Bureaucrat Bureaucrat);
        std::underflow_error GradeTooLowException();
        
};
    std::ostream &operator<< (std::ostream &os, const Form& form);
#endif