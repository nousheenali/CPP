/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:25:22 by nali              #+#    #+#             */
/*   Updated: 2022/09/29 11:28:06 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "No.of zombies should be a number and greater than zero." << std::endl;
        return (NULL);
    }
    std::cout << "---------------CREATING ZOMBIES----------------------" <<std::endl;
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].set_name(name);
    }
    return (z);
}