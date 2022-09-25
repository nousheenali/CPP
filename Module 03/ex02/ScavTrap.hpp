/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:17:43 by nali              #+#    #+#             */
/*   Updated: 2022/09/22 12:30:27 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public :
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap &old_obj);
    void operator= (const ScavTrap &fp);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif