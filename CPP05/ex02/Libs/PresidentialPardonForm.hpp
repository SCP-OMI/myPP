#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"../Libs/AForm.hpp"

class PresidentialPardonForm : public AForm {
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& Pardon);
        ~PresidentialPardonForm();

        void executeClass(Bureaucrat const& executor)const;
};

#endif