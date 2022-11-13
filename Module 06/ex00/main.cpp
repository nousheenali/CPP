/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:16:33 by nali              #+#    #+#             */
/*   Updated: 2022/11/10 16:48:06 by nali             ###   ########.fr       */
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
/*inputs '18.' for double and '18.f' for float are valid
but inputs '.' for double and '.f' for float are invalid*/

//NaN, an acronym for Not a Number is an exception that usually occurs in the cases when an expression results in a number that is undefined or can't be represented