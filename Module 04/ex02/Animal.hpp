/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:39:25 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:11:39 by nali             ###   ########.fr       */
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