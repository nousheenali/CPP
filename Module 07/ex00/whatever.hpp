/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:11:55 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 17:15:24 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include "iostream"

template <typename T> 
T max(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T> 
T min(T x, T y)
{
    return (x < y) ? x : y;
}

template <typename T> 
void swap(T& x, T& y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}


#endif