/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 09:33:07 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

/*while storing the value is stored as fixed point
but while printing the value is printed as int or float*/
int main( void ) 
{ 
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl; //constructor sets val of a to 0
    std::cout << ++a << std::endl; // value of a is incremented to 1 and converted to float i.e., (1 / 2^(number of fractional bits))
    std::cout << a << std::endl;
    std::cout << a++ << std::endl; //value incremented to 2 after printing
    std::cout << a << std::endl; // value of a is 2 and converted to float i.e., (2 / 2^(number of fractional bits))
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl; //this calls > operator inside max function

    
    return 0; 
}