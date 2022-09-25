/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 05:58:16 by nali              #+#    #+#             */
/*   Updated: 2022/09/15 09:47:56 by nali             ###   ########.fr       */
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

enum levels{DEBUG, INFO, WARNING, ERROR, INVALID};

levels resolveoption(std::string level)
{
    if (level == "DEBUG") return DEBUG;
    if (level == "INFO") return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR") return ERROR;
    return INVALID;
}

void    Harl::complain(std::string level)
{

    void (Harl::*pfnComplain[4])(void);
    pfnComplain[0] = &Harl::debug;
    pfnComplain[1] = &Harl::info;
    pfnComplain[2] = &Harl::warning;
    pfnComplain[3] = &Harl::error;

    switch(resolveoption(level))
    {
        case DEBUG:
            (this->*pfnComplain[DEBUG])();

        case INFO:
            (this->*pfnComplain[INFO])();
            
        case WARNING:
            (this->*pfnComplain[WARNING])();
            
        case ERROR:{
            (this->*pfnComplain[ERROR])();
            break;
        }
        case INVALID:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        
    }
}  