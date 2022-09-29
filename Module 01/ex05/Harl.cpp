/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 05:58:16 by nali              #+#    #+#             */
/*   Updated: 2022/09/29 09:13:37 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#include <iostream>

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-";
    std::cout << "-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
    std::cout << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough ";
    std::cout << "bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
    std::cout << "for years whereas you started working here since last month." <<std::endl;        
    std::cout << std::endl;
}
        
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
    std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; //create an array that stores different input options
    void (Harl::*pfnComplain[4])(void); //declares an array of member function pointers pfnComplain
    pfnComplain[0] = &Harl::debug; //assign address of member function to the pointer
    pfnComplain[1] = &Harl::info;
    pfnComplain[2] = &Harl::warning;
    pfnComplain[3] = &Harl::error;

    i = 0;
    while(i < 4)
    {
        if (levels[i] == level)
        {
            (this->*pfnComplain[i])();
            break;
        }
        i++;
    }   
}  