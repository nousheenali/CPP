/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:45:30 by nali              #+#    #+#             */
/*   Updated: 2022/11/13 09:42:02 by nali             ###   ########.fr       */
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

void Test::setName(std::string str)
{ 
    this->name = str;
}

std::string Test::getName() const
{ 
    return(name);
}
