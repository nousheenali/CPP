/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:02:30 by nali              #+#    #+#             */
/*   Updated: 2022/10/12 10:46:33 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <string>
#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &old_obj);
        WrongAnimal &operator= (const WrongAnimal &obj);
        virtual ~WrongAnimal();
        std::string getType() const;
        virtual void makeSound() const;
};
#endif