/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 09:54:45 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <cstring>

#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap obj("Bob");
    ClapTrap ct1(obj);
    std::cout << ct1.getName() <<" "<< ct1.getHitPoints() <<" " << ct1.getEnergyPoints()\
     << " " <<ct1.getAttackDamage()<< std::endl;
    std::cout << std::endl;
    
    ClapTrap ct;
    ct = obj;
    ct.attack("Rob");
    ct.setAttackDamage(10);
    ct.attack("Rob");
    ct.takeDamage(5);
    ct.takeDamage(6);
    ct.beRepaired(4);
    ct.takeDamage(2);
    ct.attack("Rob");

    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.attack("Rob");
    // ct.beRepaired(4);    
    return 0; 
}