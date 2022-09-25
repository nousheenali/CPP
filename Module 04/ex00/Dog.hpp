/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:41:06 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:17:13 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog: public Animal
{
    public :
        Dog();
        Dog(const Dog &old_obj);
        Dog & operator= (const Dog &obj);
        ~Dog();

        void makeSound() const;
};
#endif