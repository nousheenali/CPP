/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:42:50 by nali              #+#    #+#             */
/*   Updated: 2022/10/20 10:40:29 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &stack);
        MutantStack &operator=(const MutantStack &obj);
        typedef typename Container::iterator iterator;
        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"
#endif

// https://stackoverflow.com/questions/73440733/how-can-i-implement-my-own-stack-iterator-in-c

/* alternate definition for
    typedef typename Container::iterator iterator;
    is typedef typename std::deque<T>::iterator iterator;
*/


/*  template<typename T, typename Container = std::deque<T> > class Stack
    This is how stack inherits from deque. 
    T - The element data type to be stored in the stack.
    Container - The type of the underlying container used to implement the stack. 
                The default value is the class deque<Type>.

stack object inherits from the deque type like this. It exposes only a few methods 
such as: pop, push, empty, swap and emplace. It also has a deque iterator. 
'typedef' the deque iterator to 'iterator' coz that is how main.cpp uses it.


c is the object container_type defined in stack class.
https://en.cppreference.com/w/cpp/container/stack (check under Member objects)
begin() and end() are member functions of all containers.


MutantStack class inherit from the std::stack class that's itself inherits from
 the std::deque
 
*/