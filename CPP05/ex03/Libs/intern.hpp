#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include "../Libs/AForm.hpp"

class AForm;

class Intern {
    public :
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& intern);
        ~Intern();

        AForm* makeForm(std::string name, std::string target);
        
        static AForm*  RobotForm(std::string target);
        static AForm*  PrezForm(std::string target);
        static AForm*  TreeForm(std::string target);
        // typedef AForm* (*FormPtr)(std::string);

    private :
        // typedef AForm* (Intern::*FormPtr)(std::string);
        // FormPtr _ptr[3];


};

#endif
