#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"../Libs/AForm.hpp"

class RobotomyRequestForm : public AForm {
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& jjk);
        ~RobotomyRequestForm();

        void executeClass(Bureaucrat const& executor)const;
};

#endif