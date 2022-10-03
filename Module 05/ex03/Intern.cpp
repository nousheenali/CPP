/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:46:22 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 22:20:59 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern (const Intern &old_obj)
{
    *this = old_obj;
}

Intern &Intern::operator=(const Intern &obj)
{
    return(*this);
}

Form *makeShrubberyCreationForm(std::string target)
{
    Form *f = new ShrubberyCreationForm(target);
    return (f);
}

Form *makeRobotomyRequestForm(std::string target)
{
    Form *f= new RobotomyRequestForm(target);
    return (f);
}

Form *makePresidentialPardonForm(std::string target)
{
    Form *f = new PresidentialPardonForm(target);
    return (f);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    
    //declares an array of function pointers that takes std::string argument(refer ex06 in module01)
    Form *(*pfnForm[3])(std::string);  
    pfnForm[0] = &makeShrubberyCreationForm;
    pfnForm[1] = &makeRobotomyRequestForm;
    pfnForm[2] = &makePresidentialPardonForm;

    std::string Forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3 ;i++)
    {
        if (name == Forms[i])
        {
            std::cout << "Intern creates " << Forms[i] << " form." <<std::endl;
            return (pfnForm[i](target));
        }
    }
    std::cout << "Invalid form name." <<std::endl;
    return (NULL);
}