/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:14:26 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 21:47:40 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include <iostream>

template <typename T> 
class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        // Array(const Array &old_obj);
        // Array &operator=(const Array &obj);
        // ~Array();
        // void setArray(T val);
        // void printArray(void);

};

#endif