/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/10/16 16:18:09 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main( void ) 
{
    std::cout << "======VECTOR======" << std::endl;
    std::vector<int> numvec;
    numvec.push_back(3);
    numvec.push_back(10);
    numvec.push_back(7);
    numvec.push_back(6);
    numvec.push_back(11);
    createIterator(numvec);

    std::cout << "======DEQUE======" << std::endl;
    std::deque<int> numdeq;
    numdeq.push_back(3);
    numdeq.push_front(4);
    numdeq.push_back(15);
    numdeq.push_front(6);
    numdeq.push_back(10);
    createIterator(numdeq);

    std::cout << "======LIST======" << std::endl;
    std::list<int> numlst;
    numlst.push_back(3);
    numlst.push_front(4);
    numlst.push_back(15);
    numlst.push_front(6);
    numlst.push_back(10);
    createIterator(numlst);
    
    return (0);
}