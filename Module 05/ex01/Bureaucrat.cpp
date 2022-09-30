/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:07:43 by nali              #+#    #+#             */
/*   Updated: 2022/09/30 18:39:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Highest grade cannot exceed 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Lowest grade cannot be below 150.");
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade < 1)
		throw GradeTooHighException();
    if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}  
        
Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    *this = old_obj;
}
        
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    (this->grade)--;
    if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    (this->grade)++;
    if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() <<std::endl;
    }
    catch(std::exception & e)
    {
        /*If exception occurs inside the above try block this catch will be 
        called and then terminate function is called. The catch in the main
        will not be called*/
        std::cout << this->name << " couldn't sign " << form.getName() << \
        " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat & b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return(out);
}

