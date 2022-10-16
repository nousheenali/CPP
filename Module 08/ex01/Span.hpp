/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:32:42 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 22:00:05 by nali             ###   ########.fr       */
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
        Span(unsigned int N);
        void addNumber(int num);
        void printValues();
        int shortestSpan();
        int longestSpan();
        // void insertValues(void);
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