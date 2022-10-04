/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 14:15:42 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <cstring>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{

    FragTrap obj1("Bob");
    FragTrap ft; 
    ft = obj1; 
    
    std::cout << ft.getName() <<" "<< ft.getHitPoints() <<" " << ft.getEnergyPoints()\
     << " " <<ft.getAttackDamage()<< std::endl;
    std::cout << std::endl; 
    ft.attack("Rob");
    ft.takeDamage(99);
    ft.beRepaired(10);
    ft.ClapTrap::attack("Ness");
    ft.highFivesGuys();
    std::cout << std::endl; 
    ft.setEnergyPoints(0);
    ft.attack("Matt");
    // to use attack in parent instead of child
    return 0; 
}