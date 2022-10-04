/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:57:11 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 09:31:55 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    // std::cout <<"Default constructor called"<< std::endl;
    num = 0;
}

Fixed::Fixed(const int n)
{
    // std::cout <<"Int constructor called"<< std::endl;
    num = n << this->fractionalbits;
}

Fixed::Fixed(const float n)
{
    // std::cout <<"Float constructor called"<< std::endl;
    int val;
    
    val = 1;
    for (int i = 0; i < this->fractionalbits; i++)
        val = val * 2;
    this->num = n * val;
}
        
Fixed::Fixed (const Fixed &old_obj)
{
    // std::cout <<"Copy constructor called"<< std::endl;
    *this = old_obj;   
}

void Fixed::operator= (const Fixed &fp )
{ 
    // std::cout <<"Copy Assignment operator called"<< std::endl;
    this->num = fp.num;
}

Fixed::~Fixed()
{
    // std::cout <<"Destructor called"<< std::endl;
}
        
int Fixed::getRawBits( void ) const
{
    // std::cout <<"getRawBits member function called"<< std::endl;
    return (num);
}

void Fixed::setRawBits( int const raw )
{
    // std::cout <<"setRawBits member function called"<< std::endl;
    this->num = raw;
}

/*Convert fixed point to floating point*/
float Fixed::toFloat(void) const
{
    int val;
    
    val = 1;
    for (int i = 0; i < this->fractionalbits; i++)
        val = val * 2;
    return((float)(this->num * 1.0/val));
}

/*Convert fixed point to int*/
int Fixed::toInt( void ) const
{
    return(this->num >> this->fractionalbits);
}

/*outstream operator overload*/
std::ostream &	operator<<( std::ostream & out, const Fixed & f)
{
	out << f.toFloat();
	return (out);
}

/*Comparison Operators*/
bool Fixed::operator>(const Fixed & f) const
{
    return ((*this).getRawBits() > f.getRawBits());
}

bool Fixed::operator<(const Fixed & f) const
{
    return ((*this).getRawBits() < f.getRawBits());
}

bool Fixed::operator>=(const Fixed & f) const
{
    return ((*this).getRawBits() >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed & f) const
{
    return ((*this).getRawBits() <= f.getRawBits());
}

bool Fixed::operator==(const Fixed & f) const
{
    return ((*this).getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(const Fixed & f) const
{
    return ((*this).getRawBits() != f.getRawBits());
}

/*Arithmetic Operators*/
Fixed Fixed::operator*(const Fixed & f)
{
    float result;
	result =  this->toFloat() * f.toFloat();
	return (result);
}

Fixed Fixed::operator+(const Fixed & f)
{
    float result;
	result =  this->toFloat() + f.toFloat();
	return (result);
}

Fixed Fixed::operator-(const Fixed & f)
{
    float result;
	result =  this->toFloat() - f.toFloat();
	return (result);
}

Fixed Fixed::operator/(const Fixed & f)
{
    float result;
	result =  this->toFloat() / f.toFloat();
	return (result);
}

/*Preincrement Operator*/
Fixed Fixed::operator++()
{
    this->num = this->num + 1;
    return (*this);
}

/*Postincrement Operator*/
Fixed Fixed::operator++(int)
{
    Fixed tmp;
    
    tmp = *this;
    this->num = this->num + 1;
    return (tmp);
}

/*Predecrement Operator*/
Fixed Fixed::operator--()
{
    this->num = this->num - 1;
    return (*this);
}

/*Postdecrement Operator*/
Fixed Fixed::operator--(int)
{
    Fixed tmp;
    
    tmp = *this;
    this->num = this->num - 1;
    return (tmp);
}

/*static min and max member functions*/
Fixed	&Fixed::min( Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}
