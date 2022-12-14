/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:38:48 by nali              #+#    #+#             */
/*   Updated: 2022/10/10 19:04:33 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{}
        
Data::Data(std::string str)
{
    name = str;
}

void Data::printHello(void)
{
    std::cout << "Hello " << name << "!" << std::endl;
}

Data::~Data()
{}

Data::Data(const Data &old_obj)
{
    *this = old_obj;
}

Data &Data::operator=(const Data &obj)
{
    this->name = obj.name;
    return (*this);
}