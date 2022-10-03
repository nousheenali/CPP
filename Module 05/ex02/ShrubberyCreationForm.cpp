/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:49:38 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 08:40:02 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

//format when setting const attributes in base class by derived class
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    this->checkStatus(executor);
    // this.checkStatus(executor, *this);
    
    std::ofstream out_file;
    std::string filename = target;
            
    filename = filename.append("_shrubbery");
    out_file.open(filename, std::ios::out | std::ios::trunc);
    if (!out_file)
    {
        std::cout << "Unable to open output file" << std::endl;
        return ;
    }
    out_file << "hello there hello!";
}