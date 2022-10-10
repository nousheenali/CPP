/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:16:33 by nali              #+#    #+#             */
/*   Updated: 2022/10/10 08:34:23 by nali             ###   ########.fr       */
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
   try
   {
      Converter c(argv[1]);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << std::endl;;
   }
   return (0);
}