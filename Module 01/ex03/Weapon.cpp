/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:08:39 by nali              #+#    #+#             */
/*   Updated: 2022/09/13 15:10:25 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{   
}

Weapon::Weapon(std::string str)
{
    type = str;
}
        
const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}