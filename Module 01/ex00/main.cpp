/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/12 11:26:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    std::string name;
    Zombie* z;

    std::cout << "Enter name of Zombie(dynamic allocation):";
    std::cin >> name;
    z = newZombie(name);
    z->announce();
    std::cout << "Enter name of Zombie(static allocation):";
    std::cin >> name;
    randomChump(name);
    delete z;
}