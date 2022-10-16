/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:44:33 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 16:18:16 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <deque>
#include <list>
#include <iostream> //for push_back
#include <algorithm> //for std::find


// returns an iterator pointing to num if it is found
// else return iterator pointing to a location after the last element
template <typename T>
typename T::iterator easyFind(T t, int num)
{
    return (std::find(t.begin(), t.end(), num));
} 


template<typename T>
void createIterator(T num)
{
    int value;
    std::cout << "Enter value to be found: ";
    std::cin >> value;
    
    typename T::iterator iter;
    iter = easyFind(num, value); 
    if (*iter == value)
        std::cout << "FOUND." << std::endl;
    else
        std::cout << "NOT FOUND." << std::endl;
}

#endif