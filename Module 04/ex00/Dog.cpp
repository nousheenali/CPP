/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:00 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:17:00 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout <<"Dog Default constructor called"<< std::endl;
}

Dog::Dog(const Dog &old_obj)
{
    std::cout <<"Dog Copy constructor called"<< std::endl;
    *this = old_obj;
}

Dog & Dog::operator= (const Dog &obj)
{ 
    std::cout <<"Dog Copy assignment operator called"<< std::endl;
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout <<"Dog Destructor called"<< std::endl;
}

void Dog::makeSound() const
{   
     std::cout <<"woof!"<< std::endl; 
}