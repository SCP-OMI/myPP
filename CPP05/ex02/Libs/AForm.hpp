#ifndef FORM_HPP
#define FORM_HPP

#include "../Libs/Bureaucrat.hpp"
#include<iostream>

class Bureaucrat;

class AForm{
    private:
        std::string name;
        bool is_signed;
        int   req_Grade;
    public :
        AForm();
        virtual ~AForm();
        AForm(const Form& form);
        AForm(std::string name, int req_Grade);
        AForm &operator=(const Form &form);
        std::string GetName()const;
        bool GetSign()const;
        int GetGrade()const;
        /*Form Methods*/
        void beSigned(Bureaucrat Bureaucrat);
        std::underflow_error GradeTooLowException();
        virutal execute(Bureaucrat const & executor)const = 0;
        
};
    std::ostream &operator<< (std::ostream &os, const Form& form);
#endif