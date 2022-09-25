/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:53:12 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 15:43:35 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<"Brain Default constructor called"<< std::endl;
    size = 0;
}

Brain::Brain(const Brain &old_obj)
{
    std::cout <<"Brain Copy constructor called"<< std::endl;
    *this = old_obj;
}

void Brain::operator= (const Brain &obj) 
{ 
    std::cout <<"Brain Copy assignment operator called"<< std::endl;
    for (int i = 0; i < 100; i++)
    { 
        std::string s = obj.getIdea(i);
        if (s.empty()) //copy only till values are present otherwise setidea will have problems for this obj
            break;
        this->setIdea(obj.getIdea(i));
    }
}

Brain::~Brain()
{
    std::cout <<"Brain Destructor called"<< std::endl;
}

void Brain::setIdea(std::string idea)
{
    if (size >= 100)
    {
        std::cout <<"Invalid Index"<< std::endl;
        return ;
    }
    this->ideas[size] = idea;
    size++;
}

std::string Brain::getIdea(int i) const
{   
    if (i >= 100)
    {
        std::cout <<"Invalid Index"<< std::endl;
        return (" ");
    }
    return (this->ideas[i]);
}