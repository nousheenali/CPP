/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:39:25 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 14:34:08 by nali             ###   ########.fr       */
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
        Animal();
        Animal(const Animal &old_obj);
        virtual Animal & operator= (const Animal &obj);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
        virtual Brain* getBrain() = 0;
};
#endif