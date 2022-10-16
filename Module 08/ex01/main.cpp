/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 22:31:11 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
// #include <range/v3/all.hpp>

int main() 
{
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
    Span sp2 = Span(10000);
    int n;
    for (int i = 0; i < 10000; i++)
	{
	    n = rand() % 10000;
		sp2.addNumber(n);
	}
    sp2.addNumber(20000);
    std::cout << "Shortest span is: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span is: " << sp2.longestSpan() << std::endl;
    
    
    
    return 0; 
}