/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:48:47 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 09:56:20 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::print_values(ClapTrap *obj)
{
    std::cout << "Name:"<< obj->getName() <<"  Hit:" << obj->getHitPoints() \
    <<"  Energy:" << obj->getEnergyPoints() << "  Damage:" << obj->getAttackDamage() << std::endl;
    std::cout << std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout <<"ClapTrap Default constructor called"<< std::endl;
    this->Name = "";
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout <<"ClapTrap Parameterized Constructor called"<< std::endl;
    this->Name = Name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
    std::cout <<"ClapTrap Copy constructor called"<< std::endl;
    *this = old_obj;
}

void ClapTrap::operator= (const ClapTrap &ct)
{ 
    std::cout <<"ClapTrap Copy assignment operator called"<< std::endl;
    this->Name = ct.Name;
    this->Hit_points = ct.Hit_points;
    this->Energy_points = ct.Energy_points;
    this->Attack_damage = ct.Attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap Destructor called"<< std::endl;
}

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
//  When ClapTrap repairs itself, it gets <amount> hit points back. 
// Attacking and repairing cost 1 energy point each. 
// Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
void ClapTrap::attack(const std::string& target)
{
    if (Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " \
         << Attack_damage << " points of damage!" << std::endl;
         print_values(this);
    }
    else
    {
        std::cout << "ClapTrap " << Name << " doesn't have enough energy to attack " \
        << target << std::endl;
        print_values(this);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    Hit_points = Hit_points - amount;
    if (Hit_points <= 0)
    {
        Hit_points = 0;
        std::cout << "ClapTrap " << Name<< " can't take any more hits!" << std::endl;
        print_values(this);
    }
    else
    {
        std::cout << "ClapTrap " << Name << " takes " << amount << " damage!" << std::endl;
        print_values(this);   
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points > 0)
    {
        Hit_points = Hit_points + amount;
        Energy_points--;
        std::cout << "ClapTrap " << Name << " repairs itself."<< std::endl;
        print_values(this);
    }
     else
    {
        std::cout << "ClapTrap " << Name << " doesn't have enough energy to repair itself " \
        << std::endl;
        print_values(this);
    }
}

void ClapTrap::setName(std::string name)
{
    this->Name = name;
}

void ClapTrap::setHitPoints(int hit)
{
    this->Hit_points = hit;
}

void ClapTrap::setEnergyPoints(int energy)
{
    this->Energy_points = energy;
}

void ClapTrap::setAttackDamage(int damage)
{
    this->Attack_damage = damage;
}

std::string ClapTrap::getName(void)
{
    return (this->Name);
}

int ClapTrap::getHitPoints(void)
{
    return (this->Hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->Energy_points);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->Attack_damage);
}

