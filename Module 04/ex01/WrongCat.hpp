/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:02:40 by nali              #+#    #+#             */
/*   Updated: 2022/09/23 18:51:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(const WrongCat &old_obj);
        void operator= (const WrongCat &obj);
        ~WrongCat();
        void makeSound() const;
};
#endif