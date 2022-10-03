/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:25:16 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 12:11:40 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <cstdlib>
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