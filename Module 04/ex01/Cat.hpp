/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:42:32 by nali              #+#    #+#             */
/*   Updated: 2022/09/24 17:12:07 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;
    public :
        Cat();
        Cat(const Cat &old_obj);
        Cat & operator= (const Cat &fp);
        Animal & operator= (const Animal &obj);
        ~Cat();

        void makeSound() const;
        Brain* getBrain();
};
#endif