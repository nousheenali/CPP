/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:28:17 by nali              #+#    #+#             */
/*   Updated: 2022/10/09 23:06:52 by nali             ###   ########.fr       */
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
        char valchar;
        int valint;
        float valfloat;
        double valdouble;
        int special;
        
        enum Type{CharType, IntType, FloatType, DoubleType, UnknownType};
        
    public:
        // Converter();
        // ~Converter();
        Converter(std::string str);
        // Converter(const Converter &old_obj);
        // Converter& operator=(const Converter &obj);

        void checkType();
        void convertToChar(void);
        void convertToInt(void);
        void convertToDouble(void);
        void convertToFloat(void);
        void printValues(void);
        
        
};

#endif