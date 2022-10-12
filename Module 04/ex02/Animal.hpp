/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:39:25 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 15:58:59 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected :
        std::string type;
    public :
        virtual ~Animal();
        std::string getType() const;
        virtual Animal & operator= (const Animal &obj) = 0;
        virtual void makeSound() const = 0;
        virtual Brain* getBrain() = 0;
};
#endif

/* We cannot make the object of the abstract class ,
then why a destruct is needed for an abstract class ? 

This means that an abstract class cannot be instantiated by itself. 
It does not mean that objects of abstract class cannot be instantiated
 as part of a derived object, though: an instance of any derived class 
 is also an instance of its abstract base.
 This is where the destructor comes in: if you need one to free private 
 resources allocated in the constructor of the abstract class, the only 
 place to put the clean-up is its destructor.
*/