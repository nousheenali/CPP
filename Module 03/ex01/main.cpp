/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 14:02:30 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{

    ScavTrap obj1("Bob");
    ScavTrap st; 
    st = obj1;
    std::cout << std::endl; 
    st.attack("Rob");
    st.takeDamage(5);
    st.beRepaired(10);
    st.attack("Ness");
    st.guardGate();

    return 0; 
}

