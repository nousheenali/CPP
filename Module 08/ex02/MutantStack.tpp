/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:19:34 by nali              #+#    #+#             */
/*   Updated: 2022/11/16 10:31:57 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &stack)
{
    *this = stack;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &obj)
{
    this->c = obj.c;
    return (*this);
}

/* c is the object container_type defined in stack class.
https://en.cppreference.com/w/cpp/container/stack (check under Member objects)
begin() and end() are member functions of all containers.*/


template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return this->c.end();
}
