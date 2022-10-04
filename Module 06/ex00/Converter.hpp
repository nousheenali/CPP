/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:28:17 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 21:37:02 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>

class Converter
{
    private:
        std::string str;
        int type;
        char val_char;
        // int val_int;
        // float val_float;
        // double val_double;
        
        enum Type{CharType, IntType, FloatType, DoubleType, UnknownType};
        
    public:
        // Converter();
        // ~Converter();
        Converter(std::string str);
        // Converter(const Converter &old_obj);
        // Converter& operator=(const Converter &obj);

        void checkType();
};

#endif