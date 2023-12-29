#include"../Libs/intern.hpp"
#include"../Libs/PresidentialPardonForm.hpp"
#include"../Libs/RobotomyRequestForm.hpp"
#include"../Libs/ShrubberyCreationForm.hpp"

Intern::Intern(){
    // _ptr[0] = &Intern::RobotForm;
    // _ptr[1] = &Intern::TreeForm;
    // _ptr[2] = &Intern::PrezForm;
}
Intern::Intern(const Intern& copy){
    // _ptr[0] = &Intern::RobotForm;
    // _ptr[1] = &Intern::TreeForm;
    // _ptr[2] = &Intern::PrezForm;
    *this = copy;
}

Intern& Intern::operator=(const Intern& intern){
    *this = intern;
    return *this;
}

 AForm* Intern::RobotForm(std::string target){
    return new RobotomyRequestForm(target);
}

 AForm* Intern::TreeForm(std::string target){
    return new ShrubberyCreationForm(target);
}

 AForm* Intern::PrezForm(std::string target){
    return new PresidentialPardonForm(target);
}

typedef AForm* (*FormPtr)(std::string);

AForm* Intern::makeForm(std::string name, std::string target){
    AForm* temp = NULL;

    std::string names[]= {
        "Robot",
        "Prez",
        "Tree",
    };

    FormPtr _ptr[3] = {&RobotForm, &TreeForm, &PrezForm};

    for(int i = 0; i < 3; i++){

      if(names[i] == name){
        temp = _ptr[i](target);
        std::cout << "Intern creates : " << names[i] << std::endl;
        break; 
      }
    }
    if (!temp)
        std::cerr << "7ala chaba khoya 7bibi : The form you've inputed does not exist!" << std::endl;
    return temp;
}

Intern::~Intern(){}

