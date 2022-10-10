/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:58:48 by nali              #+#    #+#             */
/*   Updated: 2022/10/10 14:27:47 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data
{
    public :
        int a;
    public :
        Data();
        Data(int val);
        void printHello(void);
        // ~Data();
        // Data(const Data &old_obj);
        // Data &operator=(const Data &obj);

    
};

#endif