/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:26:39 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 22:01:27 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon; /*since weapon in a pointer we assign the address*/
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}