/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:49:38 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 10:06:40 by nali             ###   ########.fr       */
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
    std::ofstream out_file;
    std::string filename = target;
            
    filename = filename.append("_shrubbery");
    out_file.open(filename, std::ios::out | std::ios::trunc);
    if (!out_file)
    {
        std::cout << "Unable to open output file" << std::endl;
        return ;
    }
    out_file    <<"//     _-_-_-_" << std::endl
                <<"//  /~~       ~~\\" << std::endl
                <<"// /~~         ~~\\" << std::endl
                <<"//{               }" << std::endl
                <<"// \\  _-     -_  /" << std::endl
                <<"//   ~ \\\\  //  ~" << std::endl
                <<"//       | |" <<std::endl
                <<"//       | |" <<std::endl
                <<"//      // \\\\" <<std::endl;
    std::cout << "ShrubberyCreationForm has been executed." << std::endl;
}