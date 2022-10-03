/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:26:31 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 18:39:28 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Robotomy request form", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

/* The attributes Name, sign_grade, execute_grade are derived from base class
    While an obj of type ShrubberyCreationForm is created  and the constructor of 
    Form class id also called. Form class doesn't have a default constructor but only constructor 
    that takes name, sig_grade and execute_grade attributes initialized. so have to pass
    values for the const attributes.  */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj)
:Form(old_obj.getName(), old_obj.getSign_grade(), old_obj.getExecute_grade())
{
    *this = old_obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    this->target = obj.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->checkStatus(executor);   
    
    std::cout << "whirr whirr...." << std::endl;
    if (rand() % 2)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
       std::cout << "Robotomy failed for " << this->target <<"." << std::endl;
}