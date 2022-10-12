/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:53:12 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 14:34:04 by nali             ###   ########.fr       */
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

Brain &Brain::operator= (const Brain &obj) 
{ 
    std::cout <<"Brain Copy assignment operator called"<< std::endl;
    this->size = 0; //set idea is set to zero has setIdea() will increment as ideas are copied
    for (int i = 0; i < 100; i++)
    { 
        std::string s = obj.getIdea(i);
        if (s.empty()) //copy only till values are present otherwise setidea will have problems for this obj
            break;
        this->setIdea(s);
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout <<"Brain Destructor called"<< std::endl;
}

void Brain::setIdea(std::string idea)
{
    if (size >= 100)
    {
        std::cout <<"No more Ideas can be added."<< std::endl;
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