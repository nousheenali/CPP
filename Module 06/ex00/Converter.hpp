/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:28:17 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 12:34:14 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

class Converter
{
    
    public:
        Converter();
        ~Converter();
        Converter(std::string str);
        Converter(const Converter &old_obj);
        Converter& operator=(const Converter &obj)
};

#endif