/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:54:49 by nali              #+#    #+#             */
/*   Updated: 2022/10/15 16:14:40 by nali             ###   ########.fr       */
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
    index = 0;
    n = 0;
}


template <class T>
Array <T>::Array(unsigned int n)
{
    this->arr = new T[n];
    this->n = n;
    this->index = 0;
}

template <typename T>
Array<T>::~Array()
{
    delete [] arr;
}

template <typename T>
Array<T>::Array(const Array &old_obj)
{
    this->n = old_obj.n;
    this->arr = new T[n]; //deep copy
    for ( size_t i = 0; i < this->n; i++)
    {
        this->arr[i] = old_obj.arr[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
    this->n = obj.n;
    this->index = obj.index;
    if (this->arr)
        delete [] this->arr; //free space for old array 
    this->arr = new T[n]; //allocate new space
    for ( int i = 0; i < (int)this->n; i++) //copy contents
    {
        this->arr[i] = obj.arr[i];
    } 
    return (*this);
}

template <typename T>
T&	Array<T>::operator[](int i) const
{
    if (i >= this->size() || i < 0)
    {
        throw InvalidIndex();
    }
    return(this->arr[i]);
}

template <typename T>
const char *Array<T>::InvalidIndex::what() const throw()
{
    return ("Invalid Index.");
}

template <typename T>
int Array<T>::size() const
{
    return (this->n);
}