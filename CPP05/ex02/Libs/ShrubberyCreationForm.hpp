#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include"../Libs/AForm.hpp"

class ShrubberyCreationForm : public AForm {
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& jjk);
        ~ShrubberyCreationForm();

        void executeClass(Bureaucrat const& executor)const;
};

#endif