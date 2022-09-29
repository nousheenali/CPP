/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/29 09:22:02 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#include "Harl.hpp"

int main(int argc, char **argv) 
{
    if (argc == 2)
    {
        Harl harl;
        harl.complain(argv[1]);
    }
    else
    {
        std::cout << "Please provide one argument(DEBUG/INFO/WARNING/ERROR)." <<std::endl;
    }
    return 0; 
}