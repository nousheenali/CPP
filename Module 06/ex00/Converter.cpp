/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:32:54 by nali              #+#    #+#             */
/*   Updated: 2022/10/04 23:21:27 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"


void Converter::checkType()
{
    int l;
    std::string substr;
    
    l = str.length();
    if (l == 1 &&  isalpha(str[0]))
    {
        std::cout <<"char type"<<std::endl;
        this->type = CharType;
        this->val_char = str[0];
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
        if (str[0] == '-' || str[0] == '+')
        {
            substr = str.substr(1,l - 1);
            l--;
        }
        else
            substr = str;
        if (substr.find_first_not_of("0123456789") == std::string::npos) //checks if only digits present
        {
            this->type = IntType;
            std::cout <<"Integer type"<<std::endl;
            return ;
        }
        if (substr.find('.') != std::string::npos && (substr.find_first_of(".") == substr.find_last_of("."))) //checks if decimal present and only one present
        {
            if (substr.find_first_not_of(".0123456789") == std::string::npos && substr[l - 1] != '.')
            {
                this->type = DoubleType;
                std::cout <<"Double type"<<std::endl;
                return ;
            }
            else if (substr[l - 1] == 'f' && (substr.find_first_of("f") == substr.find_last_of("f"))) //checks if last char is 'f' and only one char present
            {
                this->type = FloatType;
                std::cout <<"Float type"<<std::endl;
                return ;
            }
            else
            {
                this->type = UnknownType;
                std::cout <<"Unknown type"<<std::endl;
                return ;
            }  
        }
        else
        {
            this->type = UnknownType;
            std::cout <<"Unknown type"<<std::endl;
            return ;
        }  
    }
}
    
    


Converter::Converter(std::string str)
{
    this->str = str;
    checkType();
}


