/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/22 13:46:15 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <cstring>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{

    ScavTrap obj1("Bob");
    ScavTrap st; 
    st = obj1;  
    st.attack("Rob");
    st.takeDamage(5);
    st.beRepaired(10);
    st.guardGate();
    // to use attack in parent instead of child
    // st.ClapTrap::attack("Ness");
    return 0; 
}