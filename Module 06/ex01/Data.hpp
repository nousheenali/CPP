/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:58:48 by nali              #+#    #+#             */
/*   Updated: 2022/11/10 16:59:12 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>

class Data
{
    public :
        std::string name;
    public :
        Data();
        Data(std::string str);
        void printHello(void);
        ~Data();
        Data(const Data &old_obj);
        Data &operator=(const Data &obj);

};

#endif