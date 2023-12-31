#include "../Libs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", target, 72, 45){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){

    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& jjk){
    (void) jjk;
    return *this;
}

void RobotomyRequestForm::executeClass(Bureaucrat const& executor) const{
    if (executor.GetGrade() > this->GetExec())
        throw Bureaucrat::GradeTooLowException();
    else if (this->GetBool() == false)
        std::cerr << "Rotbotomy form couldn't get executed by " << executor.GetName() << " You're underage young lady! (This joke would make sense 50% of the time) " << std::endl;
    else{
        std::srand(std::time(NULL));
        if (random() % 2 == 0)
            std::cout << this->GetTarget() << " IT'S ALIVE! ALIIIIIIIIIIIIIIIVE!!" << std::endl;
        else
            std::cout << this->GetTarget() << " Ahh ya killed it... American teen girl moment." << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){}