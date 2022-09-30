/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 07:26:40 by nali              #+#    #+#             */
/*   Updated: 2022/09/30 18:40:43 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//when catch calls what() function it return the str message
const char *Form::GradeTooHighException::what() const throw()
{
    return (this->str);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return (this->str);
}

//creates an exception object and initializes the string message
Form::GradeTooHighException::GradeTooHighException(const char *str):str(str)
{}

Form::GradeTooLowException::GradeTooLowException(const char *str):str(str)
{}

Form::Form(std::string name, int sign_grade, int execute_grade)
:name(name),sign_grade(sign_grade),execute_grade(execute_grade)
{
    this->sign = false;
    if (this->sign_grade < 1)
        //ccreates an exception object
        throw GradeTooHighException("Highest SIGN grade cannot exceed 1.");
    if (this->execute_grade < 1)
        throw GradeTooHighException("Highest EXECUTE grade cannot exceed 1.");
    if (this->sign_grade > 150)
        throw GradeTooLowException("Lowest SIGN grade cannot be below 150.");
    if (this->execute_grade > 150)
        throw GradeTooLowException("Lowest EXECUTE grade cannot be below 150.");
}

Form::Form(const Form &old_obj)
:name(old_obj.name),sign_grade(old_obj.sign_grade),execute_grade(old_obj.execute_grade)
{
    *this = old_obj;
}

Form::~Form()
{
    // std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
    this->sign = obj.sign;
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getSign_grade() const
{
    return (this->sign_grade);
}

int Form::getExecute_grade() const
{
    return (this->execute_grade);
}

void Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() <= this->sign_grade)
        this->sign = true;
    else
        throw GradeTooLowException("grade too low to sign.");
}

std::ostream& operator<<(std::ostream& out, const Form & f)
{
    out << f.getName() << " " << f.getSign() << " " << f.getSign_grade() << " " << f.getExecute_grade() ;
    return(out);
}

