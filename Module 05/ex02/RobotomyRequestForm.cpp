/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:26:31 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 12:16:02 by nali             ###   ########.fr       */
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
    this->checkStatus(executor);   
    
    std::cout << "whirr whirr...." << std::endl;
    if (rand() % 2)
        std::cout << this->target << "has been robotomized successfully." << std::endl;
    else
       std::cout << "Robotomy failed for " << this->target << std::endl;
}