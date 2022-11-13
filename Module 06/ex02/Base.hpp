/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:19:24 by nali              #+#    #+#             */
/*   Updated: 2022/11/10 17:23:47 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base
{

    public:
        virtual ~Base();
};

#endif

//Deleting a derived class object using a pointer of base class type
//  that has a non-virtual destructor results in undefined behavior.
//  To correct this situation, the base class should be defined with 
// a virtual destructor. For example, following program results in undefined behavior. 
// https://www.geeksforgeeks.org/virtual-destructor/