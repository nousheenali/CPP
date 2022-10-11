/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:21:45 by nali              #+#    #+#             */
/*   Updated: 2022/10/11 21:48:01 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
/*When you separate method definitions from their declarations for a templated class,
 you have to include the same template declaration on every method definition,
  and quality the class name with the template argument(s)*/

template <typename T>
Array<T>::Array()
{
    this->arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->n = n;
}

// template <typename T>
// Array<T>::~Array()
// {}

// template <typename T>
// Array<T>::Array(const Array &old_obj)
// {
//     for (int i = 0; i <n ; i++)
//     {
//         this->arr[i] = old_obj.arr[i];
//     }
// }

// template <typename T>
// void Array<T>::setArray(T val)
// {
//     for (int i = 0; i <this->n ; i++)
//     {
//         this->arr[i] = val;
//     }
// }

// template <typename T>
// void Array<T>::printArray()
// {
//     for (int i = 0; i <this->n ; i++)
//     {
//         std::cout <<  this->arr[i] <<std::endl;
//     }
// }
// template <typename T>
// Array<T> &Array<T>::operator=(const Array &obj)
// {
    
// }