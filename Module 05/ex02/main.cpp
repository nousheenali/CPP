/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 08:23:17 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    //ShrubberyCreationForm default values --> sign grade = 145, execute grade = 137
    try
    {
        //when form is not signed
        Bureaucrat B("Jack", 2);
        ShrubberyCreationForm SF("home");
        SF.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign but low to execute
        Bureaucrat B("Jack", 140);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        SF.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        //when grade high enough to sign and execute
        Bureaucrat B("Jack", 130);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        SF.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
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