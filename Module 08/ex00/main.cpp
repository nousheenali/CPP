/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/11/16 11:08:05 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main( void ) 
{
        int value = 0;
        float value1 = 0.0f;
        std::cout << "======VECTOR======" << std::endl;
        std::vector<int> numvec;
        numvec.push_back(3);
        numvec.push_back(10);
        numvec.push_back(7);
        numvec.push_back(6);
        numvec.push_back(11);
        createIterator(numvec, value);

        std::cout << "======VECTOR======" << std::endl;
        std::vector<float> numvec1;
        numvec1.push_back(3.2f);
        numvec1.push_back(10.1f);
        numvec1.push_back(7.6f);
        numvec1.push_back(6.6f);
        numvec1.push_back(11.0f);
        createIterator(numvec1, value1);

        std::cout << "======DEQUE======" << std::endl;
        std::deque<int> numdeq;
        numdeq.push_back(3);
        numdeq.push_front(4);
        numdeq.push_back(15);
        numdeq.push_front(6);
        numdeq.push_back(10);
        createIterator(numdeq, value);

        std::cout << "======LIST======" << std::endl;
        std::list<int> numlst;
        numlst.push_back(3);
        numlst.push_front(4);
        numlst.push_back(15);
        numlst.push_front(6);
        numlst.push_back(10);
        createIterator(numlst, value);

        std::cout << "======ARRAY======" << std::endl;
        std::array<int, 5> numarr = {3, 4, 15, 6, 10};
        createIterator(numarr, value);
        return (0);
}