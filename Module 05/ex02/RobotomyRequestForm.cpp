/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:26:31 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 08:27:21 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->getSign() == true)
    {
        std::cout << "The form is signed." <<std::endl;
        if (executor.getGrade() <= this->getExecute_grade())
        {
            // std::cout << "The form has been executed." <<std::endl;
            std::ofstream out_file;
            std::string filename = target;
            
            filename = filename.append("_shrubbery");
            out_file.open(filename, std::ios::out | std::ios::trunc);
            if (!out_file)
            {
                std::cout << "Unable to open output file" << std::endl;
                return ;
            }
            out_file << "hello there!";
        }
        else 
            throw GradeTooLowException("The Executor grade too low to execute form.");
    }
    else
        throw FormNotSigned("The Form has not been signed.");
}