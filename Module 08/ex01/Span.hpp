/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:32:42 by nali              #+#    #+#             */
/*   Updated: 2022/11/15 13:57:43 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <set>
#include <exception>
#include <iostream>
#include <algorithm>

class Span
{
    public:
        std::set<int> numbers; //choosing set beacuse it is automatically sorted
        unsigned int N; //max number of elements that can be added
        size_t size; //number of elements present 
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        void addNumber(int num);
        void printValues();
        int shortestSpan();
        int longestSpan();
        void insertValuesIterator(std::set<int>::iterator iter1, std::set<int>::iterator  iter2);
        class SpanFullException :public std::exception
        {
            public:
                const char *what() const throw();
        };
        class TooFewElementsException :public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#endif