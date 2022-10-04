/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:16:33 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 12:33:37 by nali             ###   ########.fr       */
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
   return (0);
}