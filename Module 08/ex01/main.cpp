/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/10/19 19:55:46 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main() 
{
    std::cout << "Creating a span and adding numbers" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(11);
    sp.addNumber(9);
    sp.addNumber(17);
    sp.addNumber(12);
    sp.printValues();
    std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span is: " << sp.longestSpan() << std::endl;
    
    std::cout << std::endl;
    std::cout << "Creating a span of 10000 numbers" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    Span sp2 = Span(10000);
    int n;
    for (int i = 0; i < 10000; i++)
	{
        if (i % 2 == 0)
	        n = rand() % 10000;
        else 
            n = -1 * (rand() % 10000);
		sp2.addNumber(n);
	}
    sp2.addNumber(20000);
    std::cout << "Shortest span is: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span is: " << sp2.longestSpan() << std::endl;
    

    std::cout << std::endl;
    std::cout << "Filling Span using a range of iterators" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    Span sp3(5);
	std::set<int>	newset;
	newset.insert(11);
	newset.insert(1);
	newset.insert(3);
	newset.insert(12);
	newset.insert(6);
	sp3.insertValuesIterator(newset.begin(), newset.end());
    sp3.printValues();
    return 0; 
}