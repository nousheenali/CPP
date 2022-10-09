/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:16:33 by nali              #+#    #+#             */
/*   Updated: 2022/10/09 19:14:45 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
   if (argc != 2)
   {
      std::cout << "Please provide one argument." <<std::endl;
      return(0);
   }
   Converter c(argv[1]);
   // std::cout << c <<std::endl;
   return (0);
}