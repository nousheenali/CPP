/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:45:30 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 20:10:54 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Test.hpp"

Test::Test()
{}
        
Test::~Test()
{}

Test::Test(const Test &old_obj)
{
    *this = old_obj;
}

Test &Test::operator=(const Test &obj)
{
    this->name = obj.name;
    return (*this);
}

void Test::setVal(std::string str)
{ 
    this->name = str;
}

std::string Test::getVal() const
{ 
    return(name);
}
