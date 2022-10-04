/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:57:11 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 09:02:26 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout <<"Default constructor called"<< std::endl;
    num = 0;
}

/*to convert to fixed point, mutliply by 2^(number of fractional bits).
When bit shift is performed to left, it is equivalent to multiplying by 2*/
Fixed::Fixed(const int n)
{
    std::cout <<"Int constructor called"<< std::endl;
    num = n << this->fractionalbits;
    std::cout << num <<std::endl;
}

/*to convert to fixed point, mutliply by 2^(number of fractional bits).
then round off to nearest integer.*/
Fixed::Fixed(const float n)
{
    std::cout <<"Float constructor called"<< std::endl;
    int val;
    
    val = 1;
    for (int i = 0; i < this->fractionalbits; i++)
        val = val * 2;
    this->num = n * val;
}
        
Fixed::Fixed (const Fixed &old_obj)
{
    std::cout <<"Copy constructor called"<< std::endl;
    *this = old_obj; //uses operator = function to assign vale
    // this->num = old_obj.getRawBits(); //directly assigns value
}

void Fixed::operator= (const Fixed &fp )
{ 
    std::cout <<"Copy assignment operator called"<< std::endl;
    this->num = fp.num;
}

Fixed::~Fixed()
{
    std::cout <<"Destructor called"<< std::endl;
}
        
int Fixed::getRawBits( void ) const
{
    std::cout <<"getRawBits member function called"<< std::endl;
    return (num);
}

void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called"<< std::endl;
    this->num = raw;
}

/*to convert from fixed point to floating point
this-> num is integer
convert this->num to floating point by multiplying by 1.0
then dvide by 2^(number of fractional bits) */
float Fixed::toFloat(void) const
{
    int val;
    
    val = 1;
    for (int i = 0; i < this->fractionalbits; i++)
        val = val * 2;
    return((float)(this->num * 1.0/val));
}

/*to convert to integer, 
divide by 2^(number of fractional bits).
 i.e., bit wise shift to right*/
int Fixed::toInt( void ) const
{
    return(this->num >> this->fractionalbits);
}

/*  overloading the ostream operator*/
/*  std::cout << "a is " << a << std::endl;
But here a is an object of class type Fixed
so we cannot print value of 'a' by simply specifying a.
We have to specify a.getRawBits();
But this staement could be made to work using the overload operaotr for << */
std::ostream &	operator<<( std::ostream & out, const Fixed & f)
{
	out << f.toFloat();
	return (out);
}
