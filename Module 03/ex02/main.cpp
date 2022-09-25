/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/22 13:16:03 by nali             ###   ########.fr       */
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

    ft.attack("Rob");
    ft.takeDamage(99);
    ft.beRepaired(10);
    ft.highFivesGuys();
    ft.setEnergyPoints(0);
    ft.attack("Matt");
    // to use attack in parent instead of child
    // st.ClapTrap::attack("Ness");
    return 0; 
}