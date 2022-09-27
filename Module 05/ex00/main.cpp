/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/09/27 14:40:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat B("Jack", -1);   
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        Bureaucrat B("Jack", 155);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        Bureaucrat B("Jack", 5);
        std::cout << "Instantiating a Bureaucrat "<< B.getName() << " with Rank " \
        << B.getGrade() <<std::endl;
        for (;;)
        {
            B.incrementGrade();
            std::cout << B <<std::endl;
        }
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    std::cout<<"-------------------------------"<<std::endl;
    try
    {
        Bureaucrat B1("Matt", 147);
         std::cout << "Instantiating a Bureaucrat "<< B1.getName() << " with Rank " \
        << B1.getGrade() <<std::endl;
        for (;;)
        {
            B1.decrementGrade();
            std::cout << B1 <<std::endl;
        }
    }
    catch(std::exception & e)
    {
        std::cout << e.what() <<std::endl;
    }
    return (0);

}