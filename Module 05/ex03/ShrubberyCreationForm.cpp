/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:49:38 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 18:39:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

const char *ShrubberyCreationForm::UnabletoCreateFileException::what() const throw()
{
    return ("Unable to create output file.");
}

//format when setting const attributes in base class by derived class
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery creation form", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/* The attributes Name, sign_grade, execute_grade are derived from base class
    While an obj of type ShrubberyCreationForm is created  and the constructor of 
    Form class id also called. Form class doesn't have a default constructor but only constructor 
    that takes name, sig_grade and execute_grade attributes initialized. so have to pass
    values for the const attributes.  */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj)
:Form(old_obj.getName(), old_obj.getSign_grade(), old_obj.getExecute_grade())
{
    *this = old_obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    this->target = obj.target;
    return (*this);
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
        throw UnabletoCreateFileException();
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
}