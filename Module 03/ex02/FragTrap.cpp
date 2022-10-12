/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:25:42 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 10:09:17 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"FragTrap default constructor called"<< std::endl;
}

/*In the case of the default constructor, it is implicitly accessible from 
parent to the child class but parameterized constructors are not accessible
 to the derived class automatically, for this reason, an explicit call has 
 to be made in the child class constructor to access the parameterized
  constructor of the parent class to the child class using the following syntax*/
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout <<"FragTrap Parameterized Constructor called"<< std::endl;
     Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &old_obj)
{
    std::cout <<"FragTrap Copy constructor called"<< std::endl;
    *this = old_obj;
}

/*The copy assignment operator of the derived class that is implicitly declared
 by the compiler hides assignment operators of the base class. */
void FragTrap::operator= (const FragTrap &obj)
{ 
    ClapTrap::operator=(obj);
    std::cout <<"FragTrap Copy assignment operator called"<< std::endl;
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap Destructor called"<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap gives High Five" << std::endl;
}