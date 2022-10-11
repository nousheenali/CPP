/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:49:40 by nali              #+#    #+#             */
/*   Updated: 2022/10/10 19:05:37 by nali             ###   ########.fr       */
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

