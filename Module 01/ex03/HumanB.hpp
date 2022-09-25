/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:18:59 by nali              #+#    #+#             */
/*   Updated: 2022/09/13 15:08:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weapon;
    
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack(void);
};
#endif

/*
    Here we are passing by reference setWeapon(Weapon& weapon) 
    then &weapon is an alias for club.
    so, later when club.setType is called in main, the change is
    reflected in Jim's weapon also.

    if  we pass by value (Weapon weapon), we get a copy of club
    later when club is changed using club.settype
    the change is not reflected here.
    CLub value will be changed but jim's weapon which is only
    a copy and not an alias will remain same.
*/