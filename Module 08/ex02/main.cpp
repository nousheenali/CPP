/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:23:57 by nali              #+#    #+#             */
/*   Updated: 2022/10/20 10:14:19 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << "value at the top : ";
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size : ";
    std::cout << mstack.size() << std::endl;
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737); 
    mstack.push(0);
    mstack.push(1111);
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    std::cout << "-----printing contents of stack-------" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it; 
    }
    std::stack<int> s(mstack); 

    std::cout << "-----Checking same code for list-------" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "value at the top : ";
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "list size : ";
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    lst.push_back(1111);
    std::list<int>::iterator l = lst.begin(); 
    std::list<int>::iterator le = lst.end();
    std::cout << "-----printing contents of list-------" << std::endl;
    while (l != le) 
    {
        std::cout << *l << std::endl;
        ++l; 
    }
    return 0;
}