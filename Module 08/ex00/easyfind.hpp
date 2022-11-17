/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:44:33 by nali              #+#    #+#             */
/*   Updated: 2022/11/16 11:08:17 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <deque>
#include <list>
#include <array>
#include <iostream> //for push_back
#include <algorithm> //for std::find


// returns an iterator pointing to num if it is found
// else return iterator pointing to a location after the last element
template <typename T, typename C>
typename T::iterator easyFind(T t, C num)
{
    return (std::find(t.begin(), t.end(), num));
} 


//have included 2 types C and T to let use enter the value to be searched
template<typename T, typename C>
void createIterator(T num, C value)
{
        std::cout << "Enter value to be found: ";
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cout << "Invalid Entry" << std::endl;
            std::cin.clear(); // reset failbit
            std::cin.ignore(200, '\n');
            return ;
        }
        typename T::iterator iter;
        iter = easyFind(num, value); 
        if (*iter == value)
            std::cout << "FOUND." << std::endl;
        else
            std::cout << "NOT FOUND." << std::endl;
        std::cin.ignore(200, '\n');
}

#endif