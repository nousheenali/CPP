/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:25:16 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 08:26:02 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const & executor) const;
};

#endif