/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:11:55 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 20:06:37 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include "iostream"

template <typename T>
void print_value(T val)
{
    std::cout << val << std::endl;
}

template <typename T> void iter(T *arr, int len, void (*fun)(T))
{
    for (int i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

#endif