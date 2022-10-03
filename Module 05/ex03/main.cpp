/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 22:20:19 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern  someRandomIntern;
    Form*   form;
    Bureaucrat B("Jack", 4);
    
    form = someRandomIntern.makeForm("robotomy request", "Bender");
    delete form; // refer comment

    form = someRandomIntern.makeForm("shrubbery creation", "home");
    delete form;
    
    form = someRandomIntern.makeForm("presidential pardon", "prisoner");
    delete form;
    
    return (0);
}
/*
When deleting a base class pointer to a derived class
A base class destructor should be either public and 
virtual, or protected and nonvirtual.*/