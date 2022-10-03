/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:36:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 18:39:20 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("Presidential pardon form", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

/* The attributes Name, sign_grade, execute_grade are derived from base class
    While an obj of type ShrubberyCreationForm is created  and the constructor of 
    Form class id also called. Form class doesn't have a default constructor but only constructor 
    that takes name, sig_grade and execute_grade attributes initialized. so have to pass
    values for the const attributes.  */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj)
:Form(old_obj.getName(), old_obj.getSign_grade(), old_obj.getExecute_grade())
{
    *this = old_obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    this->target = obj.target;
    return (*this);
}

void PresidentialPardonForm ::execute(Bureaucrat const & executor) const
{
    this->checkStatus(executor);   
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
