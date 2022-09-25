/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:02 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:16:25 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout <<"Cat Default constructor called"<< std::endl;
}

Cat::Cat(const Cat &old_obj)
{
    std::cout <<"Cat Copy constructor called"<< std::endl;
    *this = old_obj;
}

Cat & Cat::operator= (const Cat &obj)
{ 
    std::cout <<"Cat Copy assignment operator called"<< std::endl;
    this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout <<"Cat Destructor called"<< std::endl;
}

void Cat::makeSound() const
{   
     std::cout <<"Meow!"<< std::endl; 
}