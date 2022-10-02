/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/10/02 21:37:16 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    ShrubberyCreationForm SF("home");
    
    //  try
    // {
    //     //when grade too low to sign 
    //     Bureaucrat B1("Matt", 5);
    //     Form F("Payment", 4, 6);
    //     B1.signForm(F);
    //     F.execute(B1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout<<"-------------------------------"<<std::endl;
    // try
    // {
    //     //when grade high enough to sign but low to execute
    //     Bureaucrat B1("Matt", 2);
    //     Form F("Payment", 5, 1);
    //     B1.signForm(F);
    //     F.execute(B1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout<<"-------------------------------"<<std::endl;
    // try
    // {
    //     //when grade high enough to sign  and execute
    //     Bureaucrat B1("Matt", 1); //the person who signs
    //     Form F("Payment", 3, 2);
    //     B1.signForm(F);
    //     F.execute(B1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // std::cout<<"-------------------------------"<<std::endl;
    return (0);
}