/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:04:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 21:41:22 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
/* Since weapon is of type reference we have to initialize it before entering the constructor body.*/
/* if we include this->weapon = weapon inside the body, it is a reinitialization*/
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)                                
{
    this->name = name;
}
        
void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}