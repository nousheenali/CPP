/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/12 15:21:56 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name );

int main(void)
{
    std::string name;
    int n;
    Zombie* z;

    std::cout << "Enter name of Zombie:";
    std::cin >> name;
    std::cout << "Enter no: of Zombies:";
    std::cin >> n;
    z = zombieHorde(n, name);
    for (int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    delete[] z;
}