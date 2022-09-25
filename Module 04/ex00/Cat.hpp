/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:42:32 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 18:16:40 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat: public Animal
{
    public :
        Cat();
        Cat(const Cat &old_obj);
        Cat & operator= (const Cat &obj);
        ~Cat();

        void makeSound() const;
};
#endif