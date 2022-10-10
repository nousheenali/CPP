/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:49:40 by nali              #+#    #+#             */
/*   Updated: 2022/10/10 14:30:39 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// #include <stdint.h>
#include <cstdint>
#include <iostream>
uintptr_t serialize(Data* ptr)
{
    // void *vp;
    // vp = reinterpret_cast<void *>(ptr);
    uintptr_t result = reinterpret_cast<uintptr_t>(ptr);
    return (result);
}

Data* deserialize(uintptr_t raw)
{
    // void *vp;
    // vp = reinterpret_cast<void *>(raw);
    Data *d= reinterpret_cast<Data *>(raw);
    return (d);
}

int main (void)
{

    Data *data_ptr = new Data(10);
    uintptr_t test = serialize(data_ptr);
    Data *data_ptr1 = deserialize(test);
    data_ptr1->printHello();
    return 0;
}

