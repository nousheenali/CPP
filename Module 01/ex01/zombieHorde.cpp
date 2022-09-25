/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:25:22 by nali              #+#    #+#             */
/*   Updated: 2022/09/12 15:22:51 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    if (N < 0)
        return (NULL);
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].set_name(name);
    }
    return (z);
}