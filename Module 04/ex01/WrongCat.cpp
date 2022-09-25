/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:02:37 by nali              #+#    #+#             */
/*   Updated: 2022/09/23 18:17:30 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout <<"WrongCat Default constructor called"<< std::endl;
}

WrongCat::WrongCat(const WrongCat &old_obj)
{
    std::cout <<"WrongCat Copy constructor called"<< std::endl;
    *this = old_obj;
}

void WrongCat::operator= (const WrongCat &obj)
{ 
    std::cout <<"WrongCat Copy assignment operator called"<< std::endl;
    this->type = obj.type;
}

WrongCat::~WrongCat()
{
    std::cout <<"WrongCat Destructor called"<< std::endl;
}

void WrongCat::makeSound() const
{   
    std::cout <<"WrongCat makes sound!"<< std::endl;
}
