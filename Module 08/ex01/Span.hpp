/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:32:42 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 23:35:42 by nali             ###   ########.fr       */
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
        unsigned int N;
        size_t size; 
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