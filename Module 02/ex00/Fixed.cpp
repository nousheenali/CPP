/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:57:11 by nali              #+#    #+#             */
/*   Updated: 2022/09/16 09:14:58 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout <<"Default constructor called"<< std::endl;
    num = 0;
}
        
Fixed::Fixed (const Fixed &old_obj)
{
    std::cout <<"Copy constructor called"<< std::endl;
    *this = old_obj;  //uses operator function to assign vale
    // this->num = old_obj.getRawBits();  //directly assigns value
}

void Fixed::operator= (const Fixed &fp )
{ 
    std::cout <<"Copy assignment operator called"<< std::endl;
    this->num = fp.getRawBits();
}

Fixed::~Fixed()
{
    std::cout <<"Destructor called"<< std::endl;
}
        
int Fixed::getRawBits( void ) const
{
    std::cout <<"getRawBits member function called"<< std::endl;
    return num;
}
void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called"<< std::endl;
    this->num= raw;
}