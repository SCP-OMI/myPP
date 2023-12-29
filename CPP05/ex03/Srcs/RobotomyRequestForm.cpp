#include "../Libs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", target, 72, 45){
    // this->name = "RobotomyRequestForm";
    // this->target = target;
    // this->Signing_grade = 72;
    // this->Exec_grade = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy.GetName(), copy.GetTarget(), copy.GetSign(), copy.GetExec()){
    // this->name = copy.GetName();
    // this->target = copy.GetTarget();
    // this->Signing_grade = copy.GetSign();
    // this->Exec_grade = copy.GetExec();
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& jjk){
    this->name = jjk.name;
    this->target = jjk.target;
    this->Signing_grade = jjk.Signing_grade;
    this->Exec_grade = jjk.Exec_grade;
    return *this;
}

void RobotomyRequestForm::executeClass(Bureaucrat const& executor) const{
    if (executor.GetGrade() > this->GetExec())
        throw Bureaucrat::GradeTooLowException();
    else if (this->GetBool() == false)
        std::cerr << "Presidential form couldn't get executed by " << executor.GetName() << " Because of curruption " << std::endl;
    else{
        std::srand(std::time(NULL));
        if (random() % 2 == 0)
            std::cout << this->GetTarget() << " IT'S ALIVE! ALIIIIIIIIIIIIIIIVE!!" << std::endl;
        else
            std::cout << this->GetTarget() << " Ahh ya killed it... American teen girl moment." << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){}