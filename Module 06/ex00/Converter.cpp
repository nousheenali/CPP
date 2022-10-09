/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:32:54 by nali              #+#    #+#             */
/*   Updated: 2022/10/09 23:08:43 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iomanip> //for setprecision

void Converter::checkType()
{
    int l;
    std::string substr;
    
    l = str.length();
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        this->type = FloatType;
        this->special = 1;
        return ;
    }
    if (str == "-inf" || str == "+inf" || str == "nan")
    {
        this->type = FloatType;
        this->special = 2;
        return ;
        
    }
    if (l == 1 &&  isalpha(str[0])) //to check char type
    {
        this->type = CharType;
        this->valchar = str[0];
        return ;
    }
    else if (l == 1 && !isdigit(str[0])) // for cases like +, - , .
    {
        this->type = UnknownType;
        std::cout <<"Unknown type"<<std::endl;
        return ;
    }
    else 
    {
        if (str[0] == '-' || str[0] == '+') //if first char is +/- remove it 
        {
            substr = str.substr(1,l - 1);
            l--;
        }
        else
            substr = str;
        if (substr.find_first_not_of("0123456789") == std::string::npos && l <= 10) //checks if only digits present
        {
            this->type = IntType;
            valint = std::stoi(str);
            return ;
        }
        if (substr.find('.') != std::string::npos && \
        (substr.find_first_of(".") == substr.find_last_of("."))) //checks if decimal present and only one present
        {
            if (substr.find_first_not_of(".0123456789") == std::string::npos && substr[l - 1] != '.') //check to see if no other character present
            {
                this->type = DoubleType;
                valdouble = std::stod(str);
                return ;
            }
            else if (substr.find_first_not_of(".0123456789f") == std::string::npos &&\
            substr[l - 1] == 'f' && (substr.find_first_of("f") == substr.find_last_of("f"))) //checks if last char is 'f' and only one char present
            {
                this->type = FloatType;
                valfloat = std::stof(str);
                return ;
            }
            else
            {
                this->type = UnknownType;
                return ;
            }  
        }
        else
        {
            this->type = UnknownType;
            return ;
        }  
    }
}

void Converter::convertToChar(void)
{
    this->valint = static_cast<int>(this->valchar);
    this->valdouble = static_cast<double>(this->valchar);
    this->valfloat = static_cast<float>(this->valchar);
}

void Converter::convertToInt(void)
{
    this->valchar = static_cast<char>(this->valint);
    this->valdouble = static_cast<double>(this->valint);
    this->valfloat = static_cast<float>(this->valint);
}

void Converter::convertToDouble(void)
{
    this->valchar = static_cast<char>(this->valdouble);
    this->valint = static_cast<double>(this->valdouble);
    this->valfloat = static_cast<float>(this->valdouble);
}

void Converter::convertToFloat(void)
{
    this->valchar = static_cast<char>(this->valfloat);
    this->valdouble = static_cast<double>(this->valfloat);
    this->valint = static_cast<float>(this->valfloat);
}

void Converter::printValues(void)
{
    int l;
    // Non displayable chars (0 to 31) and the DEL char (decimal value 127).
    if (this->special == 1)
    {
        std::cout << "char: impossible" <<std::endl;
        std::cout << "int: impossible" <<std::endl;
        std::cout << "float: " << this->str <<std::endl;
        l = this->str.length();
        std::cout << "double: " << this->str.substr(0, l - 1) <<std::endl;
        return;
    }
    if (this->special == 2)
    {
        std::cout << "char: impossible" <<std::endl;
        std::cout << "int: impossible" <<std::endl;
        std::cout << "float: " << this->str <<'f'<<std::endl;
        std::cout << "double: " << this->str <<std::endl;
        return;
    }  
    if ((this->valint >= 0 && this->valint<= 31) || this->valint == 127)
        std::cout << "char: Non displayable" <<std::endl;
    else
        std::cout << "char: \'"<< this->valchar << "\'"<<std::endl;
    std::cout << "int: " << this->valint <<std::endl;
    std::cout << "float: "<< std::fixed << std::setprecision(1) <<this->valfloat <<"f" <<std::endl;
    std::cout << "double: "<< this->valdouble <<std::endl;
}
    
Converter::Converter(std::string str)
{
    this->special = 0;
    this->str = str;
    checkType();
    if (this->type != UnknownType)
    {
        void (Converter::*pfnType[4])(void);  
        pfnType[0] = &Converter::convertToChar;
        pfnType[1] = &Converter::convertToInt;
        pfnType[2] = &Converter::convertToFloat;
        pfnType[3] = &Converter::convertToDouble;
        for(int i = 0; i < 4; i++)
        {
            if (this->type == i)
                (this->*pfnType[i])();
        }
        printValues(); 
    }
    
}



