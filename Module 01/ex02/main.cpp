/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:26:08 by nali              #+#    #+#             */
/*   Updated: 2022/09/28 21:18:43 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; //A pointer to the string.
    std::string& stringREF = str; //A reference to the string.
    std::cout <<std::endl;
    std::cout << "--------------------ADDRESS---------------------------" <<std::endl;
    std::cout << "The memory address of the string variable : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : " << &stringREF <<std::endl;
    std::cout << std::endl;
    std::cout << "---------------------VALUES----------------------------" <<std::endl;
    std::cout << "The value of the string variable  : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF <<std::endl;
}
/*
POINTER
* To store address of a vriable.
* Can have NULL values.
* Need not be initialized on declarartion.
* Has its own memory in stack.

REFERENCE
* An alternate name foe the variable.
* Cannot have NULL values.
* Should be initialized on declarartion.
* Shares same memory address with original variable but also takes some space in stack.
* References are implicitly constant and cannot be redirected to another variable.
eg:
val1 = 5
val2 = 6
&ref = val1
ref = val2 statement changes val1 to 6 and not the reference.
*/