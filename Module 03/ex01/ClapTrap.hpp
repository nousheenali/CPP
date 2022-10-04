/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:46:18 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 14:11:41 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// It will be called ClapTrap and will have the following private attributes 
// initialized to the values specified in brackets:
// • Name, which is passed as parameter to a constructor 
// • Hit points (10), represent the health of the ClapTrap • Energy points (10)
// • Attack damage (0)

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    private :
    
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &old_obj);
        void operator= (const ClapTrap &fp);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(std::string name);
        void setHitPoints(int hit);
        void setEnergyPoints(int energy);
        void setAttackDamage(int damage);
        std::string getName(void);
        int getHitPoints(void);
        int getEnergyPoints(void);
        int getAttackDamage(void);
        void print_values(ClapTrap *obj);
        
};

#endif
