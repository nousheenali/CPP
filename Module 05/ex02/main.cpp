/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:31:01 by nali              #+#    #+#             */
/*   Updated: 2022/10/03 12:21:42 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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
    std::cout<<"-------------------------------"<<std::endl;
    // RobotomyRequestForm
    try
    {
        //when grade high enough to sign and execute
        Bureaucrat B("Jack", 130);
        RobotomyRequestForm RF("vaccum");
        RF.execute(B);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    // std::cout<<"-------------------------------"<<std::endl;
    return (0);
}