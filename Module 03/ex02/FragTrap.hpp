/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:17:43 by nali              #+#    #+#             */
/*   Updated: 2022/09/22 13:03:53 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public :
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap &old_obj);
    void operator= (const FragTrap &fp);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif