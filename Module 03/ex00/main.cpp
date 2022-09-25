/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/22 13:44:08 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <cstring>

#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap obj("Bob");
    ClapTrap ct1(obj);
    // std::cout << ct1.getName() <<" "<< ct1.getHitPoints() <<" " << ct1.getEnergyPoints()\
    //  << " " <<ct1.getAttackDamage()<< std::endl;
    
    ClapTrap ct;
    ct = obj;
    ct.attack("Rob");
    ct.setAttackDamage(5);
    ct.attack("Rob");
    ct.takeDamage(10);
    ct.beRepaired(4);
    ct.takeDamage(2);
    ct.attack("Rob");
   
    
    return 0; 
}