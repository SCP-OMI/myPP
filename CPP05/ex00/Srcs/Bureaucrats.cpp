/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrats.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OMI <mcharouh@student.1337.ma>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:27:37 by OMI               #+#    #+#             */
/*   Updated: 2023/05/15 21:34:08 by OMI              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libs/Bureaucrats.hpp"
#include "../Libs/Exceptions.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "default constructor has been called" << std::endl;
    this->name = "Bureaucrat";
    this->grade = 0;
}
Bureaucrat::Bureaucrat(std::string name){
    this->name = name;
}

Bureaucrat::Bureaucrat(int grade){
    this->grade = grade;
}

std::string Bureaucrat::GetName() const{
    return (this->name);
}

int Bureaucrat::GetGrade() const{
    return(this->grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &_Bureaucrat){
    *this = _Bureaucrat;
}


Bureaucrat & Bureaucrat::operator= (const Bureaucrat &_Bureaucrat){
    this->name = _Bureaucrat.name;
    this->grade = _Bureaucrat.grade;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.GetName() << ", bureaucrat grade " << bureaucrat.GetGrade() << std::endl;
    return os;
}

void Bureaucrat::GradeManip(std::string command) {
    if (command == "POG") {
        if (grade > 0) {
            grade--;
        } else {
            throw GradeOutOfRangeException();
        }
    } else if (command == "KEK") {
        if (grade < 150) {
            grade++;
        } else {
            throw GradeOutOfRangeException();
        }
    }
}

void Bureaucrat::Print_B(const Bureaucrat &_Bureaucrat){
    std::cout << _Bureaucrat;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "default destructor has been called" << std::endl;
}