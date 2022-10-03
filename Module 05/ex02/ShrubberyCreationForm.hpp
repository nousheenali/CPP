/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:46:36 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 17:42:33 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, 
// and writes ASCII trees inside it.

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        void execute(Bureaucrat const & executor) const;
        class UnabletoCreateFileException: public std::exception
        {
            const char *what() const throw();
        };
};

#endif