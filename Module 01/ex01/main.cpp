/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 21:20:58 by nali             ###   ########.fr       */
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
    int i;

    std::cout << "Enter name of Zombie: ";
    std::cin >> name;
    std::cout << "Enter no: of Zombies: ";
    std::cin >> n;
    z = zombieHorde(n, name);
    if (z == NULL)
        return (0);
    i = 0;
    while (i < n)
    {
        z[i].announce();
        i++;
    }
    std::cout << "---------------DELETING ZOMBIES----------------------" <<std::endl;
    delete[] z; //deletes entire array of zombies
    return (0);
}