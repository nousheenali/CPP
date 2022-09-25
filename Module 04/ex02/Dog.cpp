/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:00 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 17:08:19 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout <<"Dog Default constructor called"<< std::endl;
    type = "Dog";
    brain = new Brain();
   
}

Dog::Dog(const Dog &old_obj)
{
    std::cout <<"Dog Copy constructor called"<< std::endl;
    this->type = old_obj.type;
    this->brain = new Brain();
    this->brain = old_obj.brain; //calls operator overload for brain
}

Dog & Dog::operator= (const Dog &obj)
{ 
    std::cout <<"Dog Copy assignment operator called"<< std::endl;
    this->type = obj.type;
    this->brain = obj.brain; 
    return (*this);
}
/* In shallow copy, an object is created by simply copying the data of all variables 
of the original object. (works well if no variables of the object are defined in the heap section of memory.)
If some variables are dynamically allocated memory from the heap section, then copied object
variable will also reference the same memory location. This will create abiguity as both obj referce same location*/
/*In deep copy, all values are copied but for dynamically allocated members, we dont assign the address directly 
instead create new memory location(if not present) and then copy values only*/

Animal&		Dog::operator=(const Animal& other)
{
    std::cout <<"Dog Copy assignment operator called"<< std::endl;
	const Dog	*ptr; 

	ptr = dynamic_cast<const Dog*>(&other);
	if(ptr)
	{
		this->type = ptr->type;
		*this->brain = *ptr->brain; //calls operator overload for brain
	}
	return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout <<"Dog Destructor called"<< std::endl;
}

void Dog::makeSound() const
{   
     std::cout <<"woof!"<< std::endl; 
}

Brain* Dog::getBrain()
{
    return (this->brain);
}