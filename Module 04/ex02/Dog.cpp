/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:20:00 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 15:27:46 by nali             ###   ########.fr       */
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
    this->brain = new Brain();// for deep copy we have allocate memory and then copy values
    *this->brain = *(old_obj.brain); //calls operator overload for brain
}

//copy constructor from dog obj to dog obj
Dog & Dog::operator= (const Dog &obj)
{ 
    std::cout <<"Dog Copy assignment operator called for dog to dog obj copy"<< std::endl;
    this->type = obj.type;
    delete this->brain; //delete the old brain obj
    this->brain = new Brain(); // reallaocate memory
    *this->brain = *(obj.brain); //calls operator overload for brain
    return (*this);
}
/* In shallow copy, an object is created by simply copying the data of all variables 
of the original object. (works well if no variables of the object are defined in the heap section of memory.)
If some variables are dynamically allocated memory from the heap section, then copied object
variable will also reference the same memory location. This will create abiguity as both obj referce same location*/
/*In deep copy, all values are copied but for dynamically allocated members, we dont assign the address directly 
instead create new memory location(if not present) and then copy values only*/
//copy constructor from animal to dog

Animal&		Dog::operator=(const Animal& other)
{
    std::cout <<"Dog Copy assignment operator called for animal obj to dog obj copy "<< std::endl;
    const Dog	*ptr; 
    
    /*since incoming obj is of type animal and animal class does have brain attribute
	we cannot copy brain of incoming obj to new obj.
    so we have to typecast it to dog obj and the deep copy the brain attribute
    */
    ptr = dynamic_cast<const Dog*>(&other); //if dynamic cast fails then this ptr is NULL                                       //example cast from cat to dog   
	if(ptr)
	{
        delete this->brain; 
        this->brain = new Brain();
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