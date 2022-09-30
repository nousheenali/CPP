/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/09/30 18:37:13 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Form f1("Payment", 0, 140);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    try
    {
        Form f1("Payment", 157, 140);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    try
    {
        Form f1("Payment", 1, -3);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    try
    {
        Form f1("Payment", 1, 160);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        Bureaucrat B("Jack", 1);
        Form F("Application 111", 2, 4);
        B.signForm(F); //Bureaucrat::signForm calls Form::beSigned
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        Bureaucrat B("Jack", 3);
        Form F("Application 121", 2, 4);
        B.signForm(F);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    return (0);
}