/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:25:16 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 17:30:33 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <cstdlib> //for rand()
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &old_obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        void execute(Bureaucrat const & executor) const;
};

#endif