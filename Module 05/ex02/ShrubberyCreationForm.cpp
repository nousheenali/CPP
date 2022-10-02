/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:49:38 by nali              #+#    #+#             */
/*   Updated: 2022/10/02 22:09:26 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
// #include <iostream>
#include <fstream>

//format when setting const attributes in base class
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getSign() == true)
    {
        std::cout << "The form is signed." <<std::endl;
        if (executor.getGrade() <= this->getExecute_grade())
        {
            // std::cout << "The form has been executed." <<std::endl;
            std::string filename;
            std::ofstream out_file;
            std::string file = target;
            
            filename = file.append("_shrubbery");
            out_file.open(filename, std::ios::out | std::ios::trunc);
            if (!out_file)
            {
                std::cout << "Unable to open output file" << std::endl;
                return ;
            }
        }
        else 
            throw GradeTooLowException("The Executor grade too low to execute form.");
    }
    else
        throw FormNotSigned("The Form has not been signed.");
}