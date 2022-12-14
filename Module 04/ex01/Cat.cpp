/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:02 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 15:28:40 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout <<"Cat Default constructor called"<< std::endl;
    type = "Cat";
    brain = new Brain();
    
}

Cat::Cat(const Cat &old_obj)
{
    std::cout <<"Cat Copy constructor called"<< std::endl;
    this->type = old_obj.type;
    this->brain = new Brain();
    *this->brain = *(old_obj.brain);
}

Cat &Cat::operator= (const Cat &obj)
{ 
    std::cout <<"Cat Copy assignment operator called"<< std::endl;
    delete this->brain; //delete the old brain obj
    this->brain = new Brain(); // reallaocate memory
    *this->brain = *(obj.brain); //calls operator overload for brain
    return (*this);
}

Animal&		Cat::operator=(const Animal& other)
{
    std::cout <<"Cat Copy assignment operator called"<< std::endl;
	const Cat	*ptr; 
	ptr = dynamic_cast<const Cat*>(&other);
	if(ptr)
	{
        delete this->brain; 
        this->brain = new Brain();
		this->type = ptr->type;
		*this->brain = *ptr->brain; //calls operator overload for brain
	}
	return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout <<"Cat Destructor called"<< std::endl;
}

void Cat::makeSound() const
{   
     std::cout <<"Meow!"<< std::endl; 
}

Brain* Cat::getBrain()
{
    return (this->brain);
}