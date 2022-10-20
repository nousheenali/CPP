/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:19:34 by nali              #+#    #+#             */
/*   Updated: 2022/10/20 10:37:41 by nali             ###   ########.fr       */
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
