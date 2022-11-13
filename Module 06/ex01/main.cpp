/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:49:40 by nali              #+#    #+#             */
/*   Updated: 2022/11/10 17:01:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
    return (result);
}

Data* deserialize(uintptr_t raw)
{
    Data *d= reinterpret_cast<Data *>(raw);
    return (d);
}

int main (void)
{
    Data *data_ptr = new Data("Bob");
    uintptr_t test = serialize(data_ptr);
    Data *data_ptr1 = deserialize(test);
    data_ptr->printHello();
    data_ptr1->printHello();

    delete data_ptr;
    return 0;
}
//uintptr_t 
// an unsigned integer type with the property that any valid pointer to void 
// can be converted to this type, then converted back to pointer to void, and
//  the result will compare equal to the original pointer".
