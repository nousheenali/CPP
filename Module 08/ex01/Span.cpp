/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:32:38 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 23:37:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char *Span::SpanFullException::what() const throw()
{
    return("We cannot add more elements to Span.");
}

const char *Span::TooFewElementsException::what() const throw()
{
    return("Span cannot be found as there are less than 2 elements.");
}

Span::Span()
{}

Span::~Span()
{}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    std::set<int>::iterator iter;
    this->size = obj.size;
    this->N = obj.N;
    for (iter = obj.numbers.begin(); iter != obj.numbers.end(); ++iter)
        this->numbers.insert(*iter);
    return (*this);
}

void Span::printValues()
{
    std::set<int>::iterator iter;
    for (iter = this->numbers.begin(); iter != this->numbers.end(); ++iter)
        std::cout<< *iter << " ";
    std::cout << std::endl;
}

Span::Span(unsigned int N)
{
    this->size = 0;
    this->N = N;
}

void Span::addNumber(int num)
{
    try
    {
        if (size >= N)
            throw SpanFullException();
        else
        {
            this->numbers.insert(num);
            size++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan()
{
    int result = 0;
    int prev;
    std::set<int>::iterator iter;
    try
    {
        if (size < 2)
            throw TooFewElementsException();
        iter = this->numbers.begin();
        prev = *iter;
        ++iter;
        result = *iter - prev;
        prev = *iter;
        ++iter;
        while (iter != this->numbers.end())
        {
            if (*iter - prev < result)
                result = *iter - prev;
            prev = *iter;
            ++iter;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
    return result; 
}

int Span::longestSpan()
{
    int result = 0;
    int prev;
    std::set<int>::iterator iter;
    try
    {
        if (size < 2)
            throw TooFewElementsException();
        iter = this->numbers.begin();
        prev = *iter;
        ++iter;
        result = *iter - prev;
        prev = *iter;
        ++iter;
        while (iter != this->numbers.end())
        {
            if (*iter - prev > result)
                result = *iter - prev;
            prev = *iter;
            ++iter;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
    return result; 
}

void Span::insertValuesIterator(std::set<int>::iterator iter1, std::set<int>::iterator  iter2)
{   
    while(iter1 != iter2)
    {
       this->numbers.insert(*iter1);
       ++iter1;
    }
}