/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:18:48 by nali              #+#    #+#             */
/*   Updated: 2022/09/13 15:08:14 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon& weapon; //HumanA will always be armed hence reference type
    
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
};

#endif

/*
    Here we are passing by reference HumanA(std::string name, Weapon &weapon)
    then &weapon is an alias for club.
    so, later when club.setType is called in main, the change is
    reflected in Bob's weapon also.

    if  we pass by value HumanA(std::string name, Weapon weapon), we get a copy of club
    later when club is changed using club.setType
    the change is not reflected in Bob's weapon
    CLub value will be changed but Bob's copy of weapon which is only
    a copy and not an alias will remain same.
*/