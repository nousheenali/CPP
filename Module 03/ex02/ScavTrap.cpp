/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:25:42 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 10:08:35 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"ScavTrap default constructor called"<< std::endl;
}

/*In the case of the default constructor, it is implicitly accessible from 
parent to the child class but parameterized constructors are not accessible
 to the derived class automatically, for this reason, an explicit call has 
 to be made in the child class constructor to access the parameterized
  constructor of the parent class to the child class using the following syntax*/
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout <<"ScavTrap Parameterized Constructor called"<< std::endl;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj)
{
    std::cout <<"ScavTrap Copy constructor called"<< std::endl;
    *this = old_obj;
}

/*The copy assignment operator of the derived class that is implicitly declared
 by the compiler hides assignment operators of the base class. */
void ScavTrap::operator= (const ScavTrap &obj)
{ 
   ClapTrap::operator=( obj );
    std::cout <<"ScavTrap Copy assignment operator called"<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout <<"ScavTrap Destructor called"<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0)
    {
        int val;
        val = getEnergyPoints();
        setEnergyPoints(val - 1);
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " \
         << getAttackDamage() << " points of damage!" << std::endl;
        print_values(this);
        
    }
    else
    {
        std::cout << "ScavTrap " << getName() << " doesn't have enough energy to attack " \
        << target << std::endl;
        print_values(this);
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}