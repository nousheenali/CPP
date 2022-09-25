/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:41:06 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 17:08:30 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
        
    public :
        Dog();
        Dog(const Dog &old_obj);
        Dog & operator= (const Dog &obj);
        Animal & operator= (const Animal &obj);
        ~Dog();

        void makeSound() const;
        Brain* getBrain();
};
#endif