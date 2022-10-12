/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:02:34 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 10:38:52 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "None";
    std::cout <<"WrongAnimal Default constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old_obj)
{
    std::cout <<"WrongAnimal Copy constructor called"<< std::endl;
    *this = old_obj;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &obj)
{ 
    std::cout <<"WrongAnimal Copy assignment operator called"<< std::endl;
    this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal Destructor called"<< std::endl;
}

void WrongAnimal::makeSound() const
{   
    std::cout <<"WrongAnimal makes sound!"<< std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}