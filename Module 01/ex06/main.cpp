/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/15 09:33:18 by nali             ###   ########.fr       */
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
        // std::string str(argv[1]);
        // std::cout <<str<<std::endl;
        harl.complain(argv[1]);
    }
    return 0; 
}