/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:14:26 by nali              #+#    #+#             */
/*   Updated: 2022/11/13 10:00:42 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include <iostream>
#include <exception>


/* <typename T> and <class T> are interchangeable in the declaration of a type template parameter*/
template <class T> 
class Array
{
    private:
        T *arr;
        unsigned int n; // no.of elements in array
        unsigned int index;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &old_obj);
        ~Array();
        Array &operator=(const Array &obj);
        T& operator[](int i) const;
        int size() const;
        class InvalidIndex: public std::exception
        {
            public :
                const char *what() const throw();
        };

};
#include "Array.tpp"

#endif

/*
    Refer: very good read!!
    https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
    
    An alternate way is to create .tpp file and include method descriptions there.
    And then place #include "Array.tpp" at the of .hpp file. If we do not do it this way and create a .cpp with
    method description we get a compilation error.


*/