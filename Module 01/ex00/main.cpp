/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 21:22:46 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    std::string name;
    Zombie* z; // creates a pointer to zombie obj
                //this pointer is created in stack

    std::cout << "---DYNAMIC ALLOCATION---" <<std::endl;
    std::cout << "Enter name of Zombie: ";
    std::cin >> name;
    z = newZombie(name); 
    z->announce();
    delete z; //we have to manually delete dynamiaclly allocated member
    
    std::cout << std::endl;
    
    std::cout << "---STATIC ALLOCATION---" <<std::endl;
    std::cout << "Enter name of Zombie: ";
    std::cin >> name;
    randomChump(name); //the object is automatically deleted in the declared function 
                        //once its scope is over
}