/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:57:03 by nali              #+#    #+#             */
/*   Updated: 2022/09/13 15:11:15 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
class Weapon
{
    private:
    
        std::string type;

    public :
        Weapon();
        Weapon(std::string str);
        const std::string& getType();
        void setType(std::string type);
};

#endif