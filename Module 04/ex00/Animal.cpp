/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:45:22 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:15:54 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "None";
    std::cout <<"Animal Default constructor called"<< std::endl;
}

Animal::Animal(const Animal &old_obj)
{
    std::cout <<"Animal Copy constructor called"<< std::endl;
    *this = old_obj;
}

Animal & Animal::operator= (const Animal &obj)
{ 
    std::cout <<"Animal Copy assignment operator called"<< std::endl;
    this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout <<"Animal Destructor called"<< std::endl;
}

void Animal::makeSound() const
{   
    std::cout <<"Animal makes sound!"<< std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}